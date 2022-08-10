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

    /*    [SerializeField] private EarthPosition pos;
        [SerializeField] private GeospatialObject geo;*/

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

            foreach (var obj in geospatialObjects)
            {
                var earthPosition = obj.EarthPosition;
                var objAnchor = ARAnchorManagerExtensions.AddAnchor(aRAnchorManager, earthPosition.Latitude, earthPosition.Longitude, earthPosition.Altitude, Quaternion.identity);
                Instantiate(obj.ObjectPrefab, objAnchor.transform);
            }
        }

        else if (earthManager.EarthTrackingState == TrackingState.None)
        {
            Invoke("Place Objects", 5.0f);
        }
    }
}
