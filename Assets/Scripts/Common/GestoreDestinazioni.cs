using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using Newtonsoft.Json;
using System;
using UnityEngine.Android;

public class GestoreDestinazioni : MonoBehaviour
{
    [SerializeField] public static List<Interest> interests = new List<Interest>();

 /*   [SerializeField] public static EarthPosition userPosition = new EarthPosition();

    public GameObject luogoPrefab;
    public GameObject guraPrefab;
    public Transform genitoreLuogo;
    private bool isUpdating; */

    // Start is called before the first frame update
    void Start()
    {
        interests = JsonConvert.DeserializeObject<List<Interest>>(Resources.Load<TextAsset>("JSON/Interest").ToString());
    }

    // Update is called once per frame
    /*
    
        private void Update()
        {
            if (!isUpdating)
            {
                StartCoroutine(GetLocation());
                isUpdating = !isUpdating;

            }
        }

        IEnumerator GetLocation()
        {
            if (!Permission.HasUserAuthorizedPermission(Permission.FineLocation))
            {
                Permission.RequestUserPermission(Permission.FineLocation);
                Permission.RequestUserPermission(Permission.CoarseLocation);
            }
            // First, check if user has location service enabled
            if (!Input.location.isEnabledByUser)
                yield return new WaitForSeconds(10);

            // Start service before querying location
            Input.location.Start();

            // Wait until service initializes
            int maxWait = 10;
            while (Input.location.status == LocationServiceStatus.Initializing && maxWait > 0)
            {
                yield return new WaitForSeconds(1);
                maxWait--;
            }

            // Service didn't initialize in 20 seconds
            if (maxWait < 1)
            {
                yield break;
            }

            // Connection has failed
            if (Input.location.status == LocationServiceStatus.Failed)
            {
                yield break;
            }
            else
            {
                userPosition.Latitude = Input.location.lastData.latitude;
                userPosition.Longitude = Input.location.lastData.longitude;
                userPosition.Altitude = Input.location.lastData.altitude;
                AggiornaListaConDistanza();
                SpawnBottoni();
            }

            // Stop service if there is no need to query location updates continuously
            isUpdating = !isUpdating;
            Input.location.Stop();
        }



    public void SpawnBottoni()
    {
        //int distanza = 90;              // inutile variabile momentanea

        foreach (var interest in GestoreDestinazioni.interests)
        {
            EarthPosition position = new EarthPosition(interest.Latitude, interest.Longitude, interest.Altitude);
            //           if (distanza < SchermataImpostazioni.setting)
            //           {                                                                                     // qui al posto di "distanza" va l'effetiva distanza

            if (interest.HasPath)
            {
                GameObject newGo = Instantiate(luogoPrefab, genitoreLuogo);
                Text[] texts = newGo.GetComponentsInChildren<Text>();
                texts[0].text = GestoreDestinazioni.Truncate(interest.Nome, 21);
                texts[1].text = GestoreDestinazioni.Arrotonda(800);                          // Qui andra passata la distanza, questo è il numerino nel
                                                                                             // quadratino verde di ogni bottone
            }
            else
            {
                GameObject newGura = Instantiate(guraPrefab, genitoreLuogo);
                Text[] texts = newGura.GetComponentsInChildren<Text>();
                texts[0].text = GestoreDestinazioni.Truncate(interest.Nome, 21);
                texts[1].text = GestoreDestinazioni.Arrotonda(GestoreDestinazioni.userPosition.Distance(GestoreDestinazioni.userPosition, position));                         // Qui andra passata la distanza
            }
            //           }
        }
    }

    

    public static void AggiornaListaConDistanza()
    {    
           interests = JsonConvert.DeserializeObject<List<Interest>>(Resources.Load<TextAsset>("JSON/Interest").ToString());
           foreach(var interest in interests)
           {
                EarthPosition position = new EarthPosition(interest.Latitude,interest.Longitude,interest.Altitude);
                if(VPSManager.userPosition.Distance(VPSManager.userPosition, position) > SchermataImpostazioni.setting)
                {
                    interests.Remove(interest);
                }
           }       
    }
*/
    public static string Truncate(string value, int maxChars)
    {
        return value.Length <= maxChars ? value : value.Substring(0, maxChars) + "...";
    }

    public static string Arrotonda(double distanza)
    {
        string num = "";
        switch (distanza)
        {
            case < 50 :
                num = "-50m";
                break;

            case > 50 and < 250:
                num = "100m";
                break;

            case >= 250 and < 750:
                num = "500m";
                break;

            case >= 750 and < 2000:
                num = "1000m";
                break;

            case >= 2000:
                num = "+ 2 km";
                break;
        }
        return num;
    }

}
