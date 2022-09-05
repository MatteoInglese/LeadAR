using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;



/*
 * qui viene gestito il caso l'utente usa i comandi per tornare indietro nelle scene
 */

public class ExitManager : MonoBehaviour
{
    public static List<int> SceneIndex = new List<int>();   //cronologia delle scene aperte
    public static int i = 0;    //contatore delle scene aperte
    public GameObject menu;     // riferimento al menu a scorrimento
    // Start is called before the first frame update
    void Start()
    {
 

    }

    /*
     * se viene usato il tasto indietro del telefono,
     * viene controllato se nella scena è presente il menu a scorrimento e se è attivo,
     * in caso sia attivo lo disattiva
     * altrimenti se ci sono delle scene nella cronologia carica quella precedente, altrimenti chiude l'app
     */
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            if (menu != null && menu.activeInHierarchy)
            {
                menu.SetActive(false);
            }
            else if (i > 0)
            {
                SceneManager.LoadScene(SceneIndex[i - 1]);
                SceneIndex.Remove(i - 1);
                i--;

            }
            else { Application.Quit(); }
        }
    }

}
