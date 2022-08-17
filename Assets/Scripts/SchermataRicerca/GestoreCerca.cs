using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Newtonsoft.Json;

public class GestoreCerca : MonoBehaviour
{

    public GameObject luogoPrefab;
    public GameObject guraPrefab;
    public Transform genitoreLuogo;

    // Start is called before the first frame update
    void Start()
    {
        MenuIniziale.userPosition = User.GetUserPosition();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void Ricerca(string stringa)
    {
        double distanza = 0;

        foreach (Transform interest in genitoreLuogo)
        {
            Destroy(interest.gameObject);
        }

        foreach (var interest in GestoreDestinazioni.interests)
        {
            EarthPosition position = new EarthPosition(interest.Latitude, interest.Longitude, interest.Altitude);
            distanza = MenuIniziale.userPosition.Distance(MenuIniziale.userPosition, position);

            if (interest.Nome.ToLower().Contains(stringa.ToLower()))
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


}
