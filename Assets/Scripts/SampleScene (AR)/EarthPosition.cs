using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

[Serializable]
public class EarthPosition
{
    [SerializeField] public double Latitude { get; set; }
    [SerializeField] public double Longitude { get; set; }
    [SerializeField] public double Altitude { get; set; }

    //constructors
    public EarthPosition(double lat, double lon, double alt)
    {
        Latitude = lat;
        Longitude = lon;
        Altitude = alt;
    }
    public EarthPosition()
    {
        Latitude = 0;
        Longitude = 0;
        Altitude = 0;
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
