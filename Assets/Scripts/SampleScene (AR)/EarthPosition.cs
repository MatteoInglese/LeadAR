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

    public double Distance(EarthPosition e1, EarthPosition e2)
    {
        double lat1 = e1.Latitude;
        double lon1 = e1.Longitude;

        double lat2 = e2.Latitude;
        double lon2 = e2.Longitude;

        var R = 6376.5000; //Km
        lat1 = ToRad(lat1);
        lat2 = ToRad(lat2);
        lon1 = ToRad(lon1);
        lon2 = ToRad(lon2);
        var dLat = lat2 - lat1;
        var dLon = lon2 - lon1;
        var a = Math.Pow(Math.Sin(dLat / 2), 2) + (Math.Pow(Math.Sin(dLon / 2), 2) * Math.Cos(lat1) * Math.Cos(lat2));
        var c = 2 * Math.Atan2(Math.Sqrt(a), Math.Sqrt(1 - a));
        double distance = R * c * 1000;
        return Math.Truncate(distance);
    }

    public double ToRad(double degs)
    {
        return degs * (Math.PI / 180.0);
    }
}
