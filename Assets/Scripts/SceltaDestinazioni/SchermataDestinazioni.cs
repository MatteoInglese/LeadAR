using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Newtonsoft.Json;

public class SchermataDestinazioni : MonoBehaviour
{
    public GameObject luogoPrefab;
    public Transform genitoreLuogo;
    private Button[] button;
    public EarthPosition PositionTemp = new EarthPosition();

    // Start is called before the first frame update
    void Start()
    {

    }
    // Update is called once per frame
    void Update()
    {
        BUTTonUpdate();
    }



    public void BUTTonUpdate()
    {
        bool crea = true;
        double distanza = 0;
        MenuIniziale.userPosition = User.GetUserPosition();

        foreach (var interest in GestoreDestinazioni.interests)
        {
            button = genitoreLuogo.gameObject.GetComponentsInChildren<Button>();
            EarthPosition position = new EarthPosition(interest.Latitude, interest.Longitude, interest.Altitude);
            distanza = MenuIniziale.userPosition.Distance(MenuIniziale.userPosition, position);

            if (distanza <= SchermataImpostazioni.setting)
            {
                for (int i = 0; i < button.Length; i++)
                {
                    if (button[i].gameObject.GetComponent<ProprietaBottoni>().nome == interest.Nome)
                    {
                        crea = false;
                    }

                }

                if (crea)
                {
                    GameObject newGo = Instantiate(luogoPrefab, genitoreLuogo);
                    TMPro.TextMeshProUGUI[] texts = newGo.GetComponentsInChildren<TMPro.TextMeshProUGUI>();
                    texts[0].text = interest.Nome;
                    texts[1].text = GestoreDestinazioni.Arrotonda(distanza);
                    newGo.GetComponent<ProprietaBottoni>().nome = interest.Nome;
                    newGo.GetComponent<ProprietaBottoni>().HasPath = interest.HasPath;
                    newGo.GetComponent<ProprietaBottoni>().path = interest.iconapath;
                }
                crea = true;
            }
            else
            {
                for (int i = 0; i < button.Length; i++)
                {
                    if (button[i].gameObject.GetComponent<ProprietaBottoni>().nome == interest.Nome)
                    {
                        crea = false;
                    }
 
                    if (!crea)
                    {
                        Destroy(button[i].gameObject);
                    }

                }
            }


        }

    }
}