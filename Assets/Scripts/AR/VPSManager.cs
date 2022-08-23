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

    public GameObject descrizionePrefab;

    private static bool showPath = false;


    void Update()
    {
        if (showPath)
        {
            for (int i = 0; i < path.Count - 1; i++)
        {
            path[i].LookAt(path[(i + 1)]);
            path[i].Rotate(0.0f, -90.0f, 0.0f, Space.Self);
        }

            path[path.Count - 1].LookAt(goals[0]);
            path[path.Count - 1].Rotate(0.0f, -90.0f, 0.0f, Space.Self);

            Text posizione = GameObject.Find("Canvas/Latitude").GetComponent<Text>();
            posizione.text = path[0].position.ToString();
        }
        else
        {
            Text posizione = GameObject.Find("Canvas/Latitude").GetComponent<Text>();
            posizione.text = "percorso non istanziato";
        }

        Text show = GameObject.Find("Canvas/Longitude").GetComponent<Text>();
        show.text = showPath.ToString();

        userPosition = User.GetUserPosition();
    }

    // Start is called before the first frame update
    void Start()
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

        Text posizione = GameObject.Find("Canvas/Longitude").GetComponent<Text>();
        posizione.text = showPath.ToString();

        VerifyGeospatialSupport();
    }

    private void VerifyGeospatialSupport()
    {
        var result = earthManager.IsGeospatialModeSupported(GeospatialMode.Enabled);
        switch (result)
        {
            case FeatureSupported.Supported:
                Debug.Log("Ready to use VPS");
                PlaceObjects();
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

    private void PlaceObjects()
    {
        if (earthManager.EarthTrackingState == TrackingState.Tracking)
        {
            var geospatialPose = earthManager.CameraGeospatialPose;

            //piazzo i punti di interesse
            foreach (var obj in interests)
            {
                var earthPosition = obj.EarthPosition;
                var objAnchor = ARAnchorManagerExtensions.AddAnchor(aRAnchorManager, earthPosition.Latitude, earthPosition.Longitude, earthPosition.Altitude, Quaternion.identity);

                GameObject newGo = Instantiate(obj.ObjectPrefab, objAnchor.transform);
                goals.Add(newGo.transform);

                GameObject descrizione = Instantiate(descrizionePrefab, newGo.transform); //questa riga � quella che piazza la descrizione

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
            else
            {
                Text posizione = GameObject.Find("Canvas/Latitude").GetComponent<Text>();
                posizione.text = "percorso non istanziato";
            }
        }

        else if (earthManager.EarthTrackingState == TrackingState.None)
        {
            Text trackingState = GameObject.Find("Canvas/Latitude").GetComponent<Text>();
            trackingState.text = earthManager.EarthTrackingState.ToString();

            Text earthState = GameObject.Find("Canvas/Longitude").GetComponent<Text>();
            earthState.text = earthManager.EarthState.ToString();
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