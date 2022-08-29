using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AudioManager : MonoBehaviour
{
    private AudioSource audioSource;

    private static List<Interest> tmp = new List<Interest>();


    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        audioSource = GetComponent<AudioSource>();
        if ((!audioSource.isPlaying) && (tmp != ListOfInterests.listOfInterests) && (GestoreDestinazioni.interests.Count > 0))
        {
            audioSource = GetComponent<AudioSource>();
            audioSource.PlayOneShot(audioSource.clip);
            tmp = ListOfInterests.listOfInterests;
        }
        StartCoroutine(soundDelay());
    }

    IEnumerator soundDelay()
    {
        yield return new WaitForSeconds(audioSource.clip.length);
    }
}

/*if (SchermataImpostazioni.Audio)
{
    if ((tmp != GestoreDestinazioni.interests) && (GestoreDestinazioni.interests.Count > 0))
    {
        audioSource = GetComponent<AudioSource>();
        audioSource.Play();
        tmp = GestoreDestinazioni.UpdateInterests();
    }
}*/

/*void Update()
{
    if (switchedOn == true && speaker.isPlaying == false)
    {
        speaker.Play();
    }
    else if (switchedOn == false && speaker.isPlaying == true)
    {
        speaker.Stop();
    }
}*/