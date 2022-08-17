using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Caricamento : MonoBehaviour
{
    public GameObject caricamento;
    public GameObject iconarotante;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        AttesaPosizione();
    }

    void AttesaPosizione()
    {

        if (MenuIniziale.userPosition.Latitude == 0 && MenuIniziale.userPosition.Longitude == 0 && MenuIniziale.userPosition.Altitude == 0)
        {
            caricamento.SetActive(true);
        }
        else
        {
            caricamento.SetActive(false);
            enabled = false;
        }

        iconarotante.transform.rotation *= Quaternion.Euler(0f, 0f, 0.4f);
    }

}
