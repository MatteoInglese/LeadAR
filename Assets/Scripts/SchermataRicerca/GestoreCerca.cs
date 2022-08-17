using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Newtonsoft.Json;

public class GestoreCerca : MonoBehaviour
{

    [SerializeField] public static List<Interest> GlobalInterests = new List<Interest>();
    public GameObject luogoPrefab;
    public GameObject guraPrefab;
    public Transform genitoreLuogo;

    // Start is called before the first frame update
    void Start()
    {
        GlobalInterests = JsonConvert.DeserializeObject<List<Interest>>(Resources.Load<TextAsset>("JSON/Interest").ToString());
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void Ricerca(string stringa)
    {
        double distanza = 69;

        foreach (Transform interest in genitoreLuogo)
        {
            Destroy(interest.gameObject);
        }

        foreach (var interest in GlobalInterests)
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
