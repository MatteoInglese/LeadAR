using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ProprietaBottoni : MonoBehaviour
{
    public GameObject oopsie;
    public bool HasPath;
    public string nome;
    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void ProssimaScena()
    {
        if (HasPath)
        {

            GestoreEntrateInScena.ApriPercorso();
  
        } else
        {
            oopsieWoopsie();
        }
    }

    private void oopsieWoopsie()
    {
        GameObject gura = Instantiate(oopsie, GameObject.Find("Canvas").transform);
        gura.SetActive(true);

    }
}
