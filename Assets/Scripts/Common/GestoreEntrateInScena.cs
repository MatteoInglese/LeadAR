using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;


/*
 * qui sono presenti tutti i metodi per aprire la scena relativa al bottone
 * che la deve aprire
 */

public class GestoreEntrateInScena : MonoBehaviour
{
    public static int ExitImpostazioni;
    public GameObject menu; // riferimento al menu a scorrimento

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }


    /*
     * Metodo relativo al bottone che apre la scena in cui si possono scegliere i luoghi nelle vicinanze
     */
    public void ApriSceltaDestinazione()
    {
        ExitManager.i = ExitManager.i + 1;
        ExitManager.SceneIndex.Add(SceneManager.GetActiveScene().buildIndex);
        SceneManager.LoadScene("SceltaDestinazione");
    }

    /*
     *  Metodo relativo al bottone che apre la scena AR senza percorso
     */
    public void ApriEsplorazione()
    {
        VPSManager.setShowPathFalse();
        ExitManager.i = ExitManager.i + 1;
        ExitManager.SceneIndex.Add(SceneManager.GetActiveScene().buildIndex);
        SceneManager.LoadScene("SampleScene");
    }

    /*
     *  Metodo relativo al bottone che apre la scena AR in cui si segue un percorso
     */
    public static void ApriPercorso()
    {
        VPSManager.setShowPathTrue();
        ExitManager.i = ExitManager.i + 1;
        ExitManager.SceneIndex.Add(SceneManager.GetActiveScene().buildIndex);
        SceneManager.LoadScene("SampleScene");
    }

    /*
     *  Metodo relativo al bottone che apre la scena del menu iniziale
     */
    public void ApriMenu()
    {
        ExitManager.i = ExitManager.i + 1;
        ExitManager.SceneIndex.Add(SceneManager.GetActiveScene().buildIndex);
        SceneManager.LoadScene("MenuIniziale");
    }

    /*
     *  Metodo relativo al bottone che apre la scena delle impostazioni
     */
    public void ApriImpostazioni()
    {
        ExitManager.i = ExitManager.i + 1;
        ExitManager.SceneIndex.Add(SceneManager.GetActiveScene().buildIndex);
        SceneManager.LoadScene("Impostazioni");
    }

    /*
     *  Metodo relativo al bottone che apre la scena in cui si puo ricercare il punto di interesse dal nome
     */
    public void ApriRicerca()
    {
        ExitManager.i = ExitManager.i + 1;
        ExitManager.SceneIndex.Add(SceneManager.GetActiveScene().buildIndex);
        SceneManager.LoadScene("cercadestinazione");
    }


   /*
    *  Metodo relativo al bottone della freccia che porta alla scena precendente
    */
    public void FrecciaIndietro()
    {
        if (ExitManager.SceneIndex.Count > 0)
        {

            SceneManager.LoadScene(ExitManager.SceneIndex[ExitManager.i - 1]);
            ExitManager.SceneIndex.Remove(ExitManager.i - 1);
            ExitManager.i--;
        }
    }


    /*
     * metodo relativo al bottone che apre e a quello che chiude il menu a scorrimento
     */
    public void ApriChiudiMenu()
    {
        if (menu.activeInHierarchy)
        {
            menu.SetActive(false);
        }
        else
        {
            menu.SetActive(true);
        }
    }

}
