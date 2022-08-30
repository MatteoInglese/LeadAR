using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class AudioManager : MonoBehaviour
{
    private AudioSource audioSource;

    private static List<Interest> tmp1 = new List<Interest>();
    private static List<Interest> tmp2 = new List<Interest>();


    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        audioSource = GetComponent<AudioSource>();
        tmp1 = GestoreDestinazioni.UpdateInterests();

        if ((!audioSource.isPlaying) && (tmp1 != tmp2) && (GestoreDestinazioni.UpdateInterests().Count > 0))
        {
            audioSource = GetComponent<AudioSource>();
            audioSource.PlayOneShot(audioSource.clip);

            tmp2 = tmp1;
        }
        StartCoroutine(soundDelay());
    }

    IEnumerator soundDelay()
    {
        yield return new WaitForSeconds(2);
    }
}