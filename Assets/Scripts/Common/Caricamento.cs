using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Caricamento : MonoBehaviour
{
    public GameObject caricamento;
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

        if (MenuIniziale.userPosition.Altitude == 0)
        {
            caricamento.SetActive(true);
            MenuIniziale.userPosition = User.GetUserPosition();
        }
        else
        {
            caricamento.SetActive(false);
            enabled = false;
        }
        
    }
}
