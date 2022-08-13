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

    [SerializeField] private List<EarthPosition> positions = new List<EarthPosition>();
    [SerializeField] private List<GeospatialObject> geospatialObjects = new List<GeospatialObject>();

    [SerializeField] public static EarthPosition userPosition = new EarthPosition();
    private bool isUpdating;


    private void Update()
    {
        if (!isUpdating)
        {
            StartCoroutine(GetLocation());
            isUpdating = !isUpdating;
        }
    }
    IEnumerator GetLocation()
    {
        if (!Permission.HasUserAuthorizedPermission(Permission.FineLocation))
        {
            Permission.RequestUserPermission(Permission.FineLocation);
            Permission.RequestUserPermission(Permission.CoarseLocation);
        }
        // First, check if user has location service enabled
        if (!Input.location.isEnabledByUser)
            yield return new WaitForSeconds(10);

        // Start service before querying location
        Input.location.Start();

        // Wait until service initializes
        int maxWait = 10;
        while (Input.location.status == LocationServiceStatus.Initializing && maxWait > 0)
        {
            yield return new WaitForSeconds(1);
            maxWait--;
        }

        // Service didn't initialize in 20 seconds
        if (maxWait < 1)
        {
            yield break;
        }

        // Connection has failed
        if (Input.location.status == LocationServiceStatus.Failed)
        {
            yield break;
        }
        else
        {
            userPosition.Latitude = Input.location.lastData.latitude;
            userPosition.Longitude = Input.location.lastData.longitude;
            userPosition.Altitude = Input.location.lastData.altitude;

            Text lat = GameObject.Find("Canvas/Latitude").GetComponent<Text>();
            lat.text = "Latitude: " + userPosition.Latitude.ToString();

            Text lon = GameObject.Find("Canvas/Longitude").GetComponent<Text>();
            /*lon.text = "Longitude: " + userPosition.Longitude.ToString();*/
            lon.text = "Distance: " + userPosition.Distance(userPosition, geospatialObjects[0].EarthPosition) + "m";
        }

        // Stop service if there is no need to query location updates continuously
        isUpdating = !isUpdating;
        Input.location.Stop();
    }

    // Start is called before the first frame update
    void Start()
    {
        positions = JsonConvert.DeserializeObject<List<EarthPosition>>(Resources.Load<TextAsset>("JSON/EarthPosition").ToString());
        //interests = JsonConvert.DeserializeObject<List<Interest>>(Resources.Load<TextAsset>("JSON/Interest").ToString());

        foreach (var position in positions)
        {
            GeospatialObject geo = new GeospatialObject(position);
            geo.ObjectPrefab = Resources.Load<GameObject>("arrow") as GameObject;
            geospatialObjects.Add(geo);
        }


/*        //TEST LOCALE
        List<Transform> path = new List<Transform>();

        float lat = latToZ(53.178469);
        float lon = lonToX(6.503091);
        float alt = 0;

        foreach (var geo in geospatialObjects)
        {
            lat += 3;
            lon += 2;
            alt += 4;

            path.Add(Instantiate(geo.ObjectPrefab, new Vector3(lon, alt, lat), Quaternion.identity).transform);
        }

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
    }

    float latToZ(double lat)
    {

        lat = (lat - 53.178469) / 0.00001 * 0.12179047095976932582726898256213;
        double z = lat;

        return (float)z;
    }

    float lonToX(double lon)
    {

        lon = (lon - 6.503091) / 0.000001 * 0.00728553580298947812081345114627;
        double x = lon;

        return (float)x;
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

            /*        //TEST LOCALE
        List<Transform> path = new List<Transform>();

        float lat = latToZ(53.178469);
        float lon = lonToX(6.503091);
        float alt = 0;

        foreach (var geo in geospatialObjects)
        {
            lat += 3;
            lon += 2;
            alt += 4;

            path.Add(Instantiate(geo.ObjectPrefab, new Vector3(lon, alt, lat), Quaternion.identity).transform);
        }

        path.Reverse();
        for (int i = 0; i < path.Count; i++)
        {
            if (path[i] != path[path.Count - 1])
            {
                path[i + 1].LookAt(path[i]);
                path[i + 1].Rotate(0.0f, -90.0f, 0.0f, Space.Self);
            }
        }*/

            foreach (var obj in geospatialObjects)
            {
                var earthPosition = obj.EarthPosition;
                var objAnchor = ARAnchorManagerExtensions.AddAnchor(aRAnchorManager, earthPosition.Latitude, earthPosition.Longitude, earthPosition.Altitude, Quaternion.identity);
                
                float lat = latToZ(obj.EarthPosition.Latitude);
                float lon = lonToX(obj.EarthPosition.Longitude);
                float alt = (float)obj.EarthPosition.Altitude;

                path.Add(Instantiate(obj.ObjectPrefab, new Vector3(lon, alt, lat), Quaternion.identity).transform);
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
