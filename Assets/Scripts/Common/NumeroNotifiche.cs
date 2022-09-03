using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class NumeroNotifiche : MonoBehaviour
{
    
    // Start is called before the first frame update
    void Start()
    {
        AggiornaNotifiche();
    }

    // Update is called once per frame
    void Update()
    {
        AggiornaNotifiche();
    }

    public void AggiornaNotifiche()
    {
        int i = 0;
        double distanza;
        GameObject obj = GameObject.Find("Canvas/BottoneDestinazioni/notifiche");
        GameObject num = GameObject.Find("Canvas/BottoneDestinazioni/notifiche/NumeroNotifiche");

        foreach (var interest in GestoreDestinazioni.interests)
        {
            EarthPosition position = new EarthPosition(interest.Latitude, interest.Longitude, interest.Altitude);
            distanza = MenuIniziale.userPosition.Distance(MenuIniziale.userPosition, position);
            if (distanza < SchermataImpostazioni.setting)
            {
                i++;
            }
        }
        if (i > 0)
        {   
            obj.SetActive(true);
            Text Numero = num.GetComponent<Text>();
            Numero.text = i.ToString();
        }
        else if(i <= 0 && obj.activeInHierarchy)
        {
            obj.SetActive(false);
        }
        
    }
}
