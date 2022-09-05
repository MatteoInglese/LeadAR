using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Newtonsoft.Json;

/*
 * script che gestisce l'istanzazione dei bottoni in base alla ricerca effettuata
 */
public class GestoreCerca : MonoBehaviour
{

    public GameObject luogoPrefab; // prefab del bottone relativo al punto di interesse
    public Transform genitoreLuogo;// riferimento al contenitore in cui verranno inseriti i bottoni
    private Button[] button;  // lista dei bottoni correnti

    // Start is called before the first frame update
    void Start()
    {
        MenuIniziale.userPosition = User.GetUserPosition();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    /*
     * 
     * metodo che istanzia i bottoni in base alla stringa passata come parametro, e gli vengono assegnate le informazioni 
     * del punto di interesse
     * 
     */
    public void Ricerca(string stringa)
    {
        double distanza = 0;
        MenuIniziale.userPosition = User.GetUserPosition();
        button = genitoreLuogo.gameObject.GetComponentsInChildren<Button>();

        for (int i = 0; i < button.Length; i++)
        {
            Destroy(button[i].gameObject);
        }

        foreach (var interest in GestoreDestinazioni.interests)
        {
            EarthPosition position = new EarthPosition(interest.Latitude, interest.Longitude, interest.Altitude);
            distanza = MenuIniziale.userPosition.Distance(MenuIniziale.userPosition, position);

            if (interest.Nome.ToLower().Contains(stringa.ToLower()))
            {
                GameObject newGo = Instantiate(luogoPrefab, genitoreLuogo);
                TMPro.TextMeshProUGUI[] texts = newGo.GetComponentsInChildren<TMPro.TextMeshProUGUI>();
                texts[1].text = GestoreDestinazioni.Arrotonda(distanza);
                newGo.GetComponent<ProprietaBottoni>().nome = interest.Nome;
                newGo.GetComponent<ProprietaBottoni>().HasPath = interest.HasPath;
                newGo.GetComponent<ProprietaBottoni>().path = interest.iconapath;

            }
        }
    }


}
