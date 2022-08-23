using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GestoreAudio : MonoBehaviour
{
    public GameObject AudioOn;
    public GameObject AudioOff;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void SetAudioOnOff()
    {
        if(AudioOn.activeInHierarchy== true)
        {
            AudioOn.SetActive(false);
            AudioOff.SetActive(true);
        } else
        {
            AudioOn.SetActive(true);
            AudioOff.SetActive(false);
        }
    }
}
