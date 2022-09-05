using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

/*
 * script che gestisce il suono e la vibrazione in caso ci sia un nuovo luogo di interesse nelle vicinanze
 */

public class AudioManager : MonoBehaviour
{
    private AudioSource audioSource;

    [SerializeField] public static List<string> tmp1 = new List<string>(); // lista dei luoghi di interesse vicini
    [SerializeField] public static List<string> tmp3 = new List<string>();

    public static bool AudioBool = false; //booleano che indica se deve è presente un nuovo luogo nelle vicinanze

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        suona();

    }
    
    /*
     * metodo che aggiorna la lista tmp1 con i luoghi di interesse nelle vicinanze
     */
    public void updateTmp1()
    {
        bool audio = true;
        double distanza = 0;
        MenuIniziale.userPosition = User.GetUserPosition();

        foreach (var interest in GestoreDestinazioni.interests)
        {
            EarthPosition position = new EarthPosition(interest.Latitude, interest.Longitude, interest.Altitude);
            distanza = MenuIniziale.userPosition.Distance(MenuIniziale.userPosition, position);

            if (distanza <= SchermataImpostazioni.setting)
            {
                foreach(string s in tmp1)
                {
                    if (s == interest.Nome)
                    {
                        audio = false;
                    }
                }
                if (audio)
                {
                    tmp1.Add(interest.Nome);
                }
                audio = true;
            }
            else
            {
                foreach (string s in tmp1)
                {
                    if (s == interest.Nome)
                    {
                        audio = false;
                    }
                    if (!audio)
                    {
                        tmp1.Remove(s);
                    }
                }

            }
        }
    }


    /*
     * metodo che aggiorna la lista tmp3 con i luoghi di interesse nelle vicinanze
     */
    public void updatetmp3()
    {
        bool audio = true; // variabile locale
        double distanza = 0;
        MenuIniziale.userPosition = User.GetUserPosition();

        foreach (var interest in GestoreDestinazioni.interests)
        {
            EarthPosition position = new EarthPosition(interest.Latitude, interest.Longitude, interest.Altitude);
            distanza = MenuIniziale.userPosition.Distance(MenuIniziale.userPosition, position);

            if (distanza <= SchermataImpostazioni.setting)
            {
                foreach (string s in tmp3)
                {
                    if (s == interest.Nome)
                    {
                        audio = false;
                    }
                }
                if (audio)
                {
                    tmp3.Add(interest.Nome);
                }
                audio = true;
            }
            else
            {
                foreach (string s in tmp3)
                {
                    if (s == interest.Nome)
                    {
                        audio = false;
                    }
                    if (!audio)
                    {
                        tmp3.Remove(s);
                    }
                }

            }
        }
    }

    /*
     * metodo che gestisce il suono e la vibrazion
     */
    public void suona()
    {
        audioSource = GetComponent<AudioSource>();
        updateTmp1();
        updateAudioBool();

        if ((!audioSource.isPlaying) && AudioBool && (tmp1.Count > 0) && SchermataImpostazioni.Audio)
        {
            audioSource = GetComponent<AudioSource>();
            audioSource.PlayOneShot(audioSource.clip);
            Handheld.Vibrate();
            updatetmp3();
            AudioBool = false;
        }

        else if(AudioBool && (tmp1.Count > 0))
        {
            Handheld.Vibrate();
            updatetmp3();
            AudioBool = false;
        }
    }

    /*
     * metodo che controlla se nella lista tmp1 è presente un nuovo punto di interesse
     * e aggiorna il booleano AudioBool di conseguenza
     */
    public void updateAudioBool()
    {
        foreach(string s in tmp1)
        {
            if (!tmp3.Contains(s))
            {
                AudioBool = true;
            }
        }
    }
}