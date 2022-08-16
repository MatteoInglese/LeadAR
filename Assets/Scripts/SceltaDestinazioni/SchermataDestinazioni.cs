using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Newtonsoft.Json;

public class SchermataDestinazioni : MonoBehaviour
{
    public GameObject oopsie;
    public GameObject luogoPrefab;
    public GameObject guraPrefab;
    public Transform genitoreLuogo;

    // Start is called before the first frame update
    void Start()
    {
        double distanza = 69;                  // variabile con assegnato un valore momentaneo (in teoria uno di default, just in case)
        foreach (var interest in GestoreDestinazioni.interests)
        {
            EarthPosition position = new EarthPosition(interest.Latitude, interest.Longitude, interest.Altitude);
            distanza = MenuIniziale.userPosition.Distance(MenuIniziale.userPosition, position);

            if (distanza < SchermataImpostazioni.setting)
            {
                if (interest.HasPath)
                {
                    GameObject newGo = Instantiate(luogoPrefab, genitoreLuogo);
                    Text[] texts = newGo.GetComponentsInChildren<Text>();
                    texts[0].text = GestoreDestinazioni.Truncate(interest.Nome, 21);
                    texts[1].text = GestoreDestinazioni.Arrotonda(distanza);                          
                                                                                                 
                }
                else
                {
                    GameObject newGura = Instantiate(guraPrefab, genitoreLuogo);
                    Text[] texts = newGura.GetComponentsInChildren<Text>();
                    texts[0].text = GestoreDestinazioni.Truncate(interest.Nome, 21);
                    texts[1].text = GestoreDestinazioni.Arrotonda(distanza);                         
                }
            }
        }
    }
    // Update is called once per frame
    void Update()
    {
        MenuIniziale.userPosition = User.GetUserPosition();
    }


    public void oopsieWoopsie()
    {
        GameObject gura = Instantiate(oopsie, GameObject.Find("Canvas").transform);
        gura.SetActive(true);

    }
}
