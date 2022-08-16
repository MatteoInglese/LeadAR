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

        foreach (var position in positions)
        {
            GeospatialObject geo = new GeospatialObject(position);
            geo.ObjectPrefab = Resources.Load<GameObject>("arrow") as GameObject;
            geospatialObjects.Add(geo);
        }


/*        //TEST LOCALE
        List<Transform> path = new List<Transform>();

        float lat = 0;
        float lon = 0;
        float alt = 0;

        foreach (var geo in geospatialObjects)
        {
            lat += 3;
            lon += 2;
            alt += 4;

            path.Add(Instantiate(geo.ObjectPrefab, new Vector3(lon, alt, lat), Quaternion.identity).transform);
        }

        path.Reverse();

        Vector3 dir = path[1].position - path[0].position;
        Debug.DrawRay(path[0].position, dir, Color.white, 100.0f, false);

        geospatialObjects.Reverse();

        path[0].Rotate(0.0f, -90.0f, 0.0f);
        //Player.transform.rotation = Quaternion.Euler(view.x, view.y, view.z);*/

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

            List<Transform> path = new List<Transform>();

            foreach (var obj in geospatialObjects)
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
}
