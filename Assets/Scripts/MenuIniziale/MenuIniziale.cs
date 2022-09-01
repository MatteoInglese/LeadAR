using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MenuIniziale : MonoBehaviour
{
    public static EarthPosition userPosition = new EarthPosition();
    // Start is called before the first frame update
    void Start()
    {
        userPosition = User.GetUserPosition();
    }

    // Update is called once per frame
    void Update()
    {
        userPosition = User.GetUserPosition();
    }
}

