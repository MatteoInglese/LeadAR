using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class AudioManager : MonoBehaviour
{
    private AudioSource audioSource;

    private static List<string> tmp1 = new List<string>();
    private static List<string> tmp2 = new List<string>();


    // Start is called before the first frame update
    void Start()
    {
        assignNames(tmp1);
    }

    // Update is called once per frame
    void Update()
    {
        audioSource = GetComponent<AudioSource>();
        assignNames(tmp1);

        if ((!audioSource.isPlaying) && (tmp1 != tmp2) && (tmp1.Count > 0))
        {
            audioSource = GetComponent<AudioSource>();
            audioSource.PlayOneShot(audioSource.clip);

            tmp2 = tmp1;
        }

        Text posizione1 = GameObject.Find("Canvas/Text1").GetComponent<Text>();
        posizione1.text = (tmp1 == tmp2).ToString();

        Text posizione2 = GameObject.Find("Canvas/Text2").GetComponent<Text>();
        posizione2.text = (tmp1.Count > 0).ToString();
    }

    private void assignNames(List<string> l)
    {
        foreach(var interest in GestoreDestinazioni.UpdateInterests())
        {
            l.Add(interest.Nome);
        }
    }
}