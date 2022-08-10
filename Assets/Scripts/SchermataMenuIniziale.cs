using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SchermataMenuIniziale : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    public void ApriEsplorazione()
    {
        SceneManager.LoadScene("SampleScene");
    }

    public void ApriSceltaDestinazione()
    {
        SceneManager.LoadScene("SceltaDestinazione");
    }

}
