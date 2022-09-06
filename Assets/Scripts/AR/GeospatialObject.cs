using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GeospatialObject
{
    [SerializeField] public GameObject ObjectPrefab;
    [SerializeField] public EarthPosition EarthPosition;

    public GeospatialObject(EarthPosition pos)
    {
        ObjectPrefab = null;
        EarthPosition = pos;
    }

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
