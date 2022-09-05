using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

/*
 * script relativo alla scena del menu inziale
 */
public class MenuIniziale : MonoBehaviour
{
    public static EarthPosition userPosition = new EarthPosition(); //posizione dell'utente
    // Start is called before the first frame update
    void Start()
    {
        userPosition = User.GetUserPosition(); //aggiorna la posizione corrente
    }

    // Update is called once per frame
    void Update()
    {
        userPosition = User.GetUserPosition(); // aggiorna la posizione corrente
    }
}

