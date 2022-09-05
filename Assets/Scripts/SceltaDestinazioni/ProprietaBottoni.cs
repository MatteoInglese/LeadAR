using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

/*
 * classe relativa ai bottoni dei luoghi di interesse
 */
public class ProprietaBottoni : MonoBehaviour
{

    public GameObject oopsie; //riferimento al prefab di errore

    public bool HasPath; // informazioni del punto di interesse: booleano che indica la disponibilita del percorso
    public string nome; // informazioni del punto di interesse: nome del punto di interesse
    public string path; // informazioni del punto di interesse: percorso dell'immagine



    // Start is called before the first frame update
    /*
     * viene assegnata l'immagine corrispondente a path
     * e viene assegnato al bottone il nome del punto di interesse
     */
    void Start()
    {
        Image[] sprite = this.transform.GetChild(0).gameObject.GetComponentsInChildren<Image>();
        sprite[0].sprite = Resources.Load<Sprite>(path);
        TMPro.TextMeshProUGUI[] texts = this.transform.GetChild(1).gameObject.GetComponentsInChildren<TMPro.TextMeshProUGUI>();
        texts[0].text = nome;
    }

    // Update is called once per frame
    void Update()
    {
        
    }


    /*
     * metodo che apre la scena del percorso se disponibile, altrimenti visualizza il pop up di errore
     */
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

    /*
     * metodo che apre il pop up di errore
     */
    private void oopsieWoopsie()
    {
        GameObject gura = Instantiate(oopsie, GameObject.Find("Canvas").transform);
        gura.SetActive(true);

    }
}
