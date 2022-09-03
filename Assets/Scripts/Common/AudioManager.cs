using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class AudioManager : MonoBehaviour
{
    private AudioSource audioSource;

    [SerializeField] public static List<string> tmp1 = new List<string>();
    [SerializeField] public static List<string> tmp3 = new List<string>();
    public static bool AudioBool = false;

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        suona();

    }

    public void updateTmp1() // questo modo di aggiornare la lista l'ho fatto solo perche questo ero sicuro funzionasse
    {
        bool audio = true;   // variabile locale
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