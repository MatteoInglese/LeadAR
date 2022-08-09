using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EarthPosition
{
    [SerializeField] public double Latitude { get; set; }
    [SerializeField] public double Longitude { get; set; }
    [SerializeField] public double Altitude { get; set; }

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    //constructors
    public EarthPosition(double lat, double lon, double alt)
    {
        Latitude = lat;
        Longitude = lon;
        Altitude = alt;
    }

/*    //getters
    public double getLat()
    {
        return Latitude;
    }

    public double getLon()
    {
        return Longitude;
    }

    public double getAlt()
    {
        return Altitude;
    }

    //setters
    public void setLat(double lat)
    {
        Latitude = lat;
    }

    public void setLon(double lon)
    {
        Longitude = lon;
    }

    public void setAlt(double alt)
    {
        Altitude = alt;
    }*/
}
