using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class AudioManager : MonoBehaviour
{
    private AudioSource audioSource;

    [SerializeField] public static List<string> tmp1 = new List<string>();
    [SerializeField] public static List<string> tmp3 = new List<string>();
    public static bool a = false;

    // Start is called before the first frame update
    void Start()
    {
 //       assignNames(tmp1);
    }

    // Update is called once per frame
    void Update()
    {
        suona();
        //audioSource = GetComponent<AudioSource>();
        //assignNames(tmp1);
        //updateaudiolist();

        //if ((!audioSource.isPlaying) && (tmp1 != tmp2) && (tmp1.Count > 0))
        //{
        //    audioSource = GetComponent<AudioSource>();
        //    audioSource.PlayOneShot(audioSource.clip);

        //    tmp2 = tmp1;
        //}

        //Text posizione1 = GameObject.Find("Canvas/Text1").GetComponent<Text>();
        //posizione1.text = (tmp1 == tmp2).ToString();

        //Text posizione2 = GameObject.Find("Canvas/Text2").GetComponent<Text>();
        //posizione2.text = (tmp1.Count > 0).ToString();
    }

    //private void assignNames(List<string> l)
    //{
    //    foreach(var interest in GestoreDestinazioni.UpdateInterests())
    //    {
    //        l.Add(interest.Nome);
    //    }
    //}

    public void updateaudiolist()
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

    public void suona()
    {
        audioSource = GetComponent<AudioSource>();
        updateaudiolist();
        updateA();
        if ((!audioSource.isPlaying) && a && (tmp1.Count > 0))
        {
            audioSource = GetComponent<AudioSource>();
            audioSource.PlayOneShot(audioSource.clip);
            updatetmp3();
            a = false;
        }

        Text posizione1 = GameObject.Find("Canvas/Text1").GetComponent<Text>();
        posizione1.text = (tmp1 == tmp3).ToString();

        Text posizione2 = GameObject.Find("Canvas/Text2").GetComponent<Text>();
        posizione2.text = (tmp1.Count > 0).ToString();
    }

    public void updatetmp3()
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

    public void updateA()
    {
        foreach(string s in tmp1)
        {
            if (!tmp3.Contains(s))
            {
                a = true;
            }
        }
    }
}