using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class SchermataImpostazioni : MonoBehaviour
{
    public GameObject m100; // riferimento all'icona che indica la distanza massima a 100m
    public GameObject m500; // riferimento all'icona che indica la distanza massima a 500m
    public GameObject m1000;// riferimento all'icona che indica la distanza massima a 1000m
    public GameObject m5000;// riferimento all'icona che indica la distanza massima a 5000m

    public static int setting = 100; //distanza massima corrente
    public static bool Audio = true; //booleano che indica se l'audio è attivo o disattivo

    // Start is called before the first frame update

    //In base alla distanza massima corrente attiva l'icona corrispondente
    void Start()
    {
        if(setting == 100)
        {
            this.Set100();
        }
        else if(setting == 500) 
        {
            this.Set500();
        }
        else if (setting == 1000)
        {
            this.Set1000();
        }
        else if (setting == 5000)
        {
            this.Set5000();
        }

        AttivaDisattivaAudio();
    }


    /*
     * metodo che imposta la distanza massima a 100m, 
     * attiva l'icona corrispondente e disattiva le altre
     */
    public void Set100()
    {
        setting = 100;
        m100.SetActive(true);
        m500.SetActive(false);
        m1000.SetActive(false);
        m5000.SetActive(false);
    }

    /*
     * metodo che imposta la distanza massima a 500m, 
     * attiva l'icona corrispondente e disattiva le altre
     */
    public void Set500()
    {
        setting= 500;
        m100.SetActive(false);
        m500.SetActive(true);
        m1000.SetActive(false);
        m5000.SetActive(false);
    }

    /*
     * metodo che imposta la distanza massima a 100m, 
     * attiva l'icona corrispondente e disattiva le altre
     */
    public void Set1000()
    {
        setting = 1000;
        m100.SetActive(false);
        m500.SetActive(false);
        m1000.SetActive(true);
        m5000.SetActive(false);
    }

    /*
     * metodo che imposta la distanza massima a 5000m, 
     * attiva l'icona corrispondente e disattiva le altre
     */
    public void Set5000()
    {
        setting = 5000;
        m100.SetActive(false);
        m500.SetActive(false);
        m1000.SetActive(false);
        m5000.SetActive(true);
    }

    /*
     * metodo che cambia il booleano audio se viene attivato o disattivato l'audio, e cambia
     * la scritta che lo indica
     */
    public void AttivaDisattivaAudio()
    {
        Text TestoAudio = GameObject.Find("Canvas/mask/content/AudioOption/testo").GetComponent<Text>();
        if (Audio == false)
        {
            TestoAudio.text = "Disattiva audio";
            Audio = true;
        }
        else
        {
            TestoAudio.text = "Attiva audio";
            Audio = false;
        }
    }
}
