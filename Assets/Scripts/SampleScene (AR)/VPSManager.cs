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

    [SerializeField] public static EarthPosition userPosition = new EarthPosition();


    void Update()
    {
        userPosition = User.GetUserPosition();

        for (int i = 0; i < path.Count - 1; i++)
        {
            path[i].LookAt(path[(i + 1)]);
            path[i].Rotate(0.0f, -90.0f, 0.0f, Space.Self);
        }

        path[3].LookAt(goals[0]);
        path[3].Rotate(0.0f, -90.0f, 0.0f, Space.Self);

        Text posizione = GameObject.Find("Canvas/Latitude").GetComponent<Text>();
        posizione.text = path[0].position.ToString();
    }

    // Start is called before the first frame update
    void Start()
    {
        userPosition = MenuIniziale.userPosition;

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

    private void VerifyGeospatialSupport()
    {
        var result = earthManager.IsGeospatialModeSupported(GeospatialMode.Enabled);
        switch (result)
        {
            case FeatureSupported.Supported:
                Debug.Log("Ready to use VPS");
                PlaceInterests();
                PlacePath();
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

    private void PlaceInterests()
    {
        if (earthManager.EarthTrackingState == TrackingState.Tracking)
        {
            var geospatialPose = earthManager.CameraGeospatialPose;

            foreach (var obj in interests)
            {
                var earthPosition = obj.EarthPosition;
                var objAnchor = ARAnchorManagerExtensions.AddAnchor(aRAnchorManager, earthPosition.Latitude, earthPosition.Longitude, earthPosition.Altitude, Quaternion.identity);

                goals.Add(Instantiate(obj.ObjectPrefab, objAnchor.transform).transform);
            }
        }

        else if (earthManager.EarthTrackingState == TrackingState.None)
        {
            Invoke("Place Objects", 5.0f);
        }
    }

    private void PlacePath()
    {
        if (earthManager.EarthTrackingState == TrackingState.Tracking)
        {
                foreach (var obj in arrows)
                {
                    var earthPosition = obj.EarthPosition;
                    var objAnchor = ARAnchorManagerExtensions.AddAnchor(aRAnchorManager, earthPosition.Latitude, earthPosition.Longitude, earthPosition.Altitude, Quaternion.identity);

                    path.Add(Instantiate(obj.ObjectPrefab, objAnchor.transform).transform);
                }
        }

        else if (earthManager.EarthTrackingState == TrackingState.None)
        {
            Invoke("Place Objects", 5.0f);
        }
    }

    /*    private void BuildRoute()
        {
            if (displayPath)
            {
                for (int i = 0; i < path.Count - 1; i++)
                {
                    path[i].LookAt(path[(i + 1)]);
                    path[i].Rotate(0.0f, -90.0f, 0.0f, Space.Self);
                }

                path[3].LookAt(goals[0]);
                path[3].Rotate(0.0f, -90.0f, 0.0f, Space.Self);

                Text posizione = GameObject.Find("Canvas/Latitude").GetComponent<Text>();
                posizione.text = path[0].position.ToString();
            }
        }*/
}