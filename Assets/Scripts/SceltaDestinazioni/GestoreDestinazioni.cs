using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using Newtonsoft.Json;
using System;
using UnityEngine.Android;


/*
 * script in cui viene avvalorata la lista degli interessi globali
 * con i metodi relativi al suo utilizzo
 */
public class GestoreDestinazioni : MonoBehaviour
{
    [SerializeField] public static List<Interest> interests = new List<Interest>(); // lista dei punti di interesse globale

    [SerializeField] public static List<Interest> nearInterests = new List<Interest>(); // lista dei punti di interesse vicini

    // Start is called before the first frame update
    void Start()
    {
        interests = JsonConvert.DeserializeObject<List<Interest>>(Resources.Load<TextAsset>("JSON/Interest").ToString());
    }

    /*
     * metodo che arrotonda la distanza dal punto di interesse all'utente
     */
    public static string Arrotonda(double distanza)
    {
        string num = "";
        switch (distanza)
        {
            case <= 50:
                num = "50m";
                break;

            case <= 100:
                num = "100m";
                break;

            case <= 500:
                num = "500m";
                break;

            case <= 1000:
                num = "1000m";
                break;

            case <= 5000:
                num = "5 km";
                break;
            case > 5000:
                num = "+5 km";
                break;
        }
        return num;
    }


    /*
     * metodo che aggiorna la nearInterest con i punti di interesse vicini e la restituisce
     */
    public static List<Interest> UpdateInterests()
    {
        double distanza = 0;
        MenuIniziale.userPosition = User.GetUserPosition();

        foreach (var interest in interests)
        {
            EarthPosition position = new EarthPosition(interest.Latitude, interest.Longitude, interest.Altitude);
            distanza = MenuIniziale.userPosition.Distance(MenuIniziale.userPosition, position);

            if (distanza <= SchermataImpostazioni.setting) { nearInterests.Add(interest); }

            else
            {
                if (nearInterests.Contains(interest)) { nearInterests.Remove(interest); }
            }
        }
        return nearInterests;
    }
}