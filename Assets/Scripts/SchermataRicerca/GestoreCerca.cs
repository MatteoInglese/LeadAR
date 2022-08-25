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
                GameObject newGo = Instantiate(luogoPrefab, genitoreLuogo);
                TMPro.TextMeshProUGUI[] texts = newGo.GetComponentsInChildren<TMPro.TextMeshProUGUI>();
                texts[0].text = interest.Nome;
                texts[1].text = GestoreDestinazioni.Arrotonda(distanza);
                newGo.GetComponent<ProprietaBottoni>().nome = interest.Nome;
                newGo.GetComponent<ProprietaBottoni>().HasPath = interest.HasPath;

            }
        }
    }


}
