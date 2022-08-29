using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AudioManager : MonoBehaviour
{
    private AudioSource audioSource;
    private bool busy = false;

    private List<Interest> tmp = new List<Interest>();


    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(playSound());
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    IEnumerator playSound()
    {
        audioSource = GetComponent<AudioSource>();
        if (!audioSource.isPlaying)
        {
            audioSource.Play();
            yield return new WaitForSeconds(2);
        }
        else if (audioSource.isPlaying)
        {
            audioSource.Stop();
        }
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