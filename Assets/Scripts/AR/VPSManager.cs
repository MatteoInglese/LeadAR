using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Android;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using Google.XR.ARCoreExtensions;
using System;
using Newtonsoft.Json;

public class VPSManager : MonoBehaviour
{
    [SerializeField] private AREarthManager earthManager;
    [SerializeField] private ARAnchorManager aRAnchorManager;

    [SerializeField] private List<EarthPosition> arrowsPositions = new List<EarthPosition>();
    [SerializeField] private List<GeospatialObject> arrows = new List<GeospatialObject>();

    [SerializeField] private List<Interest> interestsPositions = new List<Interest>();
    [SerializeField] private List<GeospatialObject> interests = new List<GeospatialObject>();

    [SerializeField] private List<Transform> path = new List<Transform>();
    [SerializeField] private List<Transform> goals = new List<Transform>();

    [SerializeField] private static EarthPosition userPosition = new EarthPosition();

    public GameObject descrizionePrefab;    //prefab della descrizione, avvalorato dall'interfaccia di unity

    private static bool showPath = false;
    private bool placeObj = true;

    // Update is called every frame
    /*Controllo ad ogni frame se lo stato del tracking è attivo finché non lo è.
    Se è stato selezionato un percorso valido, questo viene mostrato. */
    void Update()
    {
        //Controllo il tracking state
        if(earthManager.EarthTrackingState == TrackingState.Tracking && placeObj)
        {
            PlaceObjects();
            placeObj = false;
        }

        //Verifico se devo mostrare o meno il percorso
        if (showPath)
        {
            //Ruoto le frecce in modo che seguano il percorso fino al punto di interesse
            for (int i = 0; i < path.Count - 1; i++)
        {
            path[i].LookAt(path[(i + 1)]);
            path[i].Rotate(0.0f, -90.0f, 0.0f, Space.Self);
        }
            //Di default, il punto di interesse indicato come fine percorso è il primo nel JSON
            path[path.Count - 1].LookAt(goals[0]);
            path[path.Count - 1].Rotate(0.0f, -90.0f, 0.0f, Space.Self);
        }

        //Ruoto gli oggetti che rappresentano i punti di interesse in modo che siano sempre rivolti verso l'utente
        foreach(var goal in goals)
        {
            goal.LookAt(Camera.main.transform.position);
        }

        //Prendo la posizione dell'utente
        userPosition = User.GetUserPosition();
    }

    // Start is called before the first frame update
/*    Carico gli oggetti geolocalizzati dai JSON e gli assegno l'opportuno prefab.
 *    Verifico che il dispositivo supporti ARCore e, in quel caso, istanzio gli oggetti nel mondo virtuale.
*/    void Start()
    {
        userPosition = User.GetUserPosition();

        arrowsPositions = JsonConvert.DeserializeObject<List<EarthPosition>>(Resources.Load<TextAsset>("JSON/EarthPosition").ToString());
        interestsPositions = JsonConvert.DeserializeObject<List<Interest>>(Resources.Load<TextAsset>("JSON/interest").ToString());

        foreach (var position in interestsPositions)
        {
            GeospatialObject geo = new GeospatialObject(new EarthPosition(position.Latitude, position.Longitude, position.Altitude));
            geo.ObjectPrefab = Resources.Load<GameObject>("puntointeresse") as GameObject;
            interests.Add(geo);
        }

        foreach (var position in arrowsPositions)
        {
            GeospatialObject geo = new GeospatialObject(position);
            geo.ObjectPrefab = Resources.Load<GameObject>("arrow") as GameObject;
            arrows.Add(geo);
        }

        VerifyGeospatialSupport();
    }

    /*Verifico che il dispositivo supporti ARCore e, in quel caso, istanzio gli oggetti nel mondo virtuale.*/
    private void VerifyGeospatialSupport()
    {
        var result = earthManager.IsGeospatialModeSupported(GeospatialMode.Enabled);
        switch (result)
        {
            case FeatureSupported.Supported:
                Debug.Log("Ready to use VPS");
                break;
            case FeatureSupported.Unknown:
                Debug.Log("Unknown...");
                Invoke("VerifyGeospatialSupport", 5.0f);
                break;
            case FeatureSupported.Unsupported:
                Debug.Log("VPS Unsupported");
                break;
        }
    }

    /*Istanzio gli oggetti nel mondo virtuale.*/
    private void PlaceObjects()
    {
        if (earthManager.EarthTrackingState == TrackingState.Tracking)
        {
            var geospatialPose = earthManager.CameraGeospatialPose;

            int i = 0; //contatore usato per assegnare le giuste informazioni al punto di interesse corrispondente

            //piazzo i punti di interesse
            foreach (var obj in interests)
            {
                var earthPosition = obj.EarthPosition;
                var objAnchor = ARAnchorManagerExtensions.AddAnchor(aRAnchorManager, earthPosition.Latitude, earthPosition.Longitude, earthPosition.Altitude, Quaternion.identity);

                GameObject newGo = Instantiate(obj.ObjectPrefab, objAnchor.transform);
                goals.Add(newGo.transform);

                GameObject descrizione = Instantiate(descrizionePrefab, newGo.transform); // viene creato l'oggetto descrizione come figlio del punto di interesse
                
                descrizione.GetComponent<GestoreClick3d>().interest = interestsPositions[i]; // vengono passate le informazioni del punto di interesse
                i++;

            }

            //piazzo le frecce del percorso
            if (showPath)
            {
                foreach (var obj in arrows)
                {
                    var earthPosition = obj.EarthPosition;
                    var objAnchor = ARAnchorManagerExtensions.AddAnchor(aRAnchorManager, earthPosition.Latitude, earthPosition.Longitude, earthPosition.Altitude, Quaternion.identity);

                    path.Add(Instantiate(obj.ObjectPrefab, objAnchor.transform).transform);
                }
            }
        }

        else if (earthManager.EarthTrackingState == TrackingState.None)
        {
            Invoke("Place Objects", 5.0f);
        }
    }

    public static void setShowPathTrue()
    {
        showPath = true;
    }

    public static void setShowPathFalse()
    {
        showPath = false;
    }
}