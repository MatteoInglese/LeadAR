using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using Google.XR.ARCoreExtensions;
using System;
using Newtonsoft.Json;

public class VPSManager : MonoBehaviour
{
    [SerializeField] private AREarthManager earthManager;
    [SerializeField] private ARAnchorManager aRAnchorManager;

    [SerializeField] private List<EarthPosition> positions = new List<EarthPosition>();
    [SerializeField] private List<GeospatialObject> geospatialObjects = new List<GeospatialObject>();


    // Start is called before the first frame update
    void Start()
    {
        positions = JsonConvert.DeserializeObject<List<EarthPosition>>(Resources.Load<TextAsset>("JSON/EarthPosition").ToString());

        foreach (var position in positions)
        {
            GeospatialObject geo = new GeospatialObject(position);
            geo.ObjectPrefab = Resources.Load<GameObject>("arrow") as GameObject;
            geospatialObjects.Add(geo);
        }

/*        Transform a = Instantiate(geospatialObjects[0].ObjectPrefab, new Vector3(10.0f, 5.0f, 0.0f), Quaternion.identity).transform;
        Transform b = Instantiate(geospatialObjects[1].ObjectPrefab, new Vector3(3.0f, 0.0f, 3.0f), Quaternion.identity).transform;
        Transform c = Instantiate(geospatialObjects[2].ObjectPrefab, new Vector3(0.0f, 10.0f, 0.0f), Quaternion.identity).transform;

        List<Transform> path = new List<Transform>();
        path.Add(a);
        path.Add(b);
        path.Add(c);

        path.Reverse();
        for (int i = 0; i < path.Count; i++)
        {
            if (path[i] != path[path.Count - 1])
            {
                path[i + 1].LookAt(path[i]);
                path[i + 1].Rotate(0.0f, -90.0f, 0.0f, Space.Self);
            }
        }*/

        VerifyGeospatialSupport();

        Text lat = GameObject.Find("Canvas/Latitude").GetComponent<Text>();
        lat.text = "Latitude: " + geospatialObjects[0].EarthPosition.Latitude.ToString();

        Text lon = GameObject.Find("Canvas/Longitude").GetComponent<Text>();
        lon.text = "Longitude: " + geospatialObjects[0].EarthPosition.Longitude.ToString();

        Text alt = GameObject.Find("Canvas/Altitude").GetComponent<Text>();
        alt.text = "Altitude: " + geospatialObjects[0].EarthPosition.Altitude.ToString();
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

            List<Transform> path = new List<Transform>();

            foreach (var obj in geospatialObjects)
            {
                var earthPosition = obj.EarthPosition;
                var objAnchor = ARAnchorManagerExtensions.AddAnchor(aRAnchorManager, earthPosition.Latitude, earthPosition.Longitude, earthPosition.Altitude, Quaternion.identity);
                path.Add(Instantiate(obj.ObjectPrefab, objAnchor.transform).transform);
            }

            path.Reverse();
            for (int i = 0; i < path.Count; i++)
            {
                if (path[i] != path[path.Count - 1])
                {
                    path[i + 1].LookAt(path[i]);
                    path[i + 1].Rotate(0.0f, -90.0f, 0.0f, Space.Self);
                }
            }
        }

        else if (earthManager.EarthTrackingState == TrackingState.None)
        {
            Invoke("Place Objects", 5.0f);
        }
    }
}
