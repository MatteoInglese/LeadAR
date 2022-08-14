using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GestoreCerca : MonoBehaviour
{
    public GameObject inputfield;
    public GameObject impostazioni;
    public GameObject destinazioni;
    public GameObject esplora;
    public GameObject cerca2;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void tastoCerca(GameObject cerca)
    {
        inputfield.SetActive(true);
        impostazioni.SetActive(false);
        esplora.SetActive(false);
        destinazioni.SetActive(false);
        cerca.SetActive(true);
        cerca2.SetActive(false);
    }

    public void backtominimenu(GameObject cerca)
    {
        inputfield.SetActive(false);
        impostazioni.SetActive(true);
        esplora.SetActive(true);
        destinazioni.SetActive(true);
        cerca.SetActive(false);
        cerca2.SetActive(true);
    }

}
