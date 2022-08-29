using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ListOfInterests : MonoBehaviour
{
    public static List<Interest> listOfInterests = new List<Interest>();

    // Start is called before the first frame update
    void Start()
    {
        listOfInterests = GestoreDestinazioni.UpdateInterests();
    }

    // Update is called once per frame
    void Update()
    {
        listOfInterests = GestoreDestinazioni.UpdateInterests();
    }
}
