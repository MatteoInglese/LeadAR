using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GeospatialObject : MonoBehaviour
{
    [SerializeField] public GameObject ObjectPrefab;
    [SerializeField] public EarthPosition EarthPosition;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public GeospatialObject(EarthPosition pos)
    {
        /*        GameObject objPrefab = Resources.Load<GameObject>(path) as GameObject;
                ObjectPrefab = objPrefab;*/
        ObjectPrefab = null;
        EarthPosition = pos;
    }
}
