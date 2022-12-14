using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Interest
{
//    [SerializeField] public EarthPosition position { get; set; }
    [SerializeField] public double Latitude { get; set; }
    [SerializeField] public double Longitude { get; set; }
    [SerializeField] public double Altitude { get; set; }
    [SerializeField] public string Nome { get; set; }
    [SerializeField] public string Text { get; set; }
    [SerializeField] public bool HasPath { get; set; }
    [SerializeField] public string iconapath { get; set; }

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public Interest(double lat, double lon, double alt, string name, string txt, bool hasPath, string iconapath)
    {
        Latitude = lat;
        Longitude = lon;
        Altitude = alt;
        Nome = name;
        Text = txt;
        HasPath = hasPath;
        this.iconapath = iconapath;
    }
}
