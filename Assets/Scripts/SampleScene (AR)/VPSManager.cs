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

    [SerializeField] public static EarthPosition userPosition = new EarthPosition();
    [SerializeField] public static bool displayPath = false;


    void Update()
    {
        userPosition = User.GetUserPosition();
    }

    // Start is called before the first frame update
    void Start()
    {
        userPosition = MenuIniziale.userPosition;

        arrowsPositions = JsonConvert.DeserializeObject<List<EarthPosition>>(Resources.Load<TextAsset>("JSON/interest").ToString());
        interestsPositions = JsonConvert.DeserializeObject<List<Interest>>(Resources.Load<TextAsset>("JSON/EarthPosition").ToString());

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


/*        //TEST LOCALE
        List<Transform> path = new List<Transform>();

        float lat = 0;
        float lon = 0;
        float alt = 0;

        foreach (var geo in arrows)
        {
            lat += 3;
            lon += 2;
            alt += 4;

            path.Add(Instantiate(geo.ObjectPrefab, new Vector3(lon, alt, lat), Quaternion.identity).transform);
        }

        path.Reverse();

        Vector3 dir = path[1].position - path[0].position;
        Quaternion rot = Quaternion.LookRotation(dir);
*//*        Vector3 x = path[0].position + new Vector3(90.0f, 0.0f, 0.0f) * Mathf.Rad2Deg;
        Vector3 y = path[0].position + new Vector3(0.0f, 90.0f, 0.0f) * Mathf.Rad2Deg;
        Vector3 z = path[0].position + new Vector3(0.0f, 0.0f, 90.0f) * Mathf.Rad2Deg;

        float xAngle = (180.0f * Mathf.Rad2Deg) + Vector3.Angle(dir, x);
        float yAngle = (180.0f * Mathf.Rad2Deg) + Vector3.Angle(dir, y);
        float zAngle = (180.0f * Mathf.Rad2Deg) + Vector3.Angle(dir, z);

        Debug.DrawRay(path[0].position, dir, Color.white, 100.0f, false);
        Debug.DrawRay(path[0].position, path[0].position, Color.red, 100.0f, false);

        Debug.DrawRay(path[0].position, x, Color.green, 100.0f, false);
        Debug.DrawRay(path[0].position, y, Color.green, 100.0f, false);
        Debug.DrawRay(path[0].position, z, Color.green, 100.0f, false);*//*

        path[0].rotation = rot;
        //path[0].Rotate(xAngle, yAngle, zAngle);
        //path[0].LookAt(path[1]);
        path[0].Rotate(0.0f, -90.0f, 0.0f);*/

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

                Instantiate(obj.ObjectPrefab, objAnchor.transform);
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
            List<Transform> path = new List<Transform>();

            foreach (var obj in arrows)
            {
                var earthPosition = obj.EarthPosition;
                var objAnchor = ARAnchorManagerExtensions.AddAnchor(aRAnchorManager, earthPosition.Latitude, earthPosition.Longitude, earthPosition.Altitude, Quaternion.identity);

                path.Add(Instantiate(obj.ObjectPrefab, objAnchor.transform).transform);
            }

            /*
            float lat0 = (float)arrows[0].EarthPosition.Latitude;
            float lon0 = (float)arrows[0].EarthPosition.Longitude;
            //Vector3 xyz_vector0 = Quaternion.AngleAxis(lat0, -Vector3.right) * new Vector3(0, (float)arrows[0].EarthPosition.Altitude;, 0) * Quaternion.AngleAxis(lon0, -Vector3.up);

            Vector3 dir = path[1].position - path[0].position;
            Quaternion rot = Quaternion.LookRotation(dir);
            
            path[0].rotation = rot;
            path[0].Rotate(0.0f, -90.0f, 0.0f);*/
        }

        else if (earthManager.EarthTrackingState == TrackingState.None)
        {
            Invoke("Place Objects", 5.0f);
        }
    }

    void OnDestroy()
    {
        setDisplayPath();
    }

    public static void setDisplayPath()
    {
        displayPath = !displayPath;
    }
}
