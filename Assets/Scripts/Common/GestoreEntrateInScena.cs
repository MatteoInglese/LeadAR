using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class GestoreEntrateInScena : MonoBehaviour
{
    public static int ExitImpostazioni;


    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }

    public void ApriSceltaDestinazione()
    {
        ExitManager.i = ExitManager.i + 1;
        ExitManager.SceneIndex.Add(SceneManager.GetActiveScene().buildIndex);
        SceneManager.LoadScene("SceltaDestinazione");
    }

    public void ApriEsplorazione()
    {
        ExitManager.i = ExitManager.i + 1;
        ExitManager.SceneIndex.Add(SceneManager.GetActiveScene().buildIndex);
        SceneManager.LoadScene("SampleScene");
    }

    public void ApriMenu()
    {
        ExitManager.i = ExitManager.i + 1;
        ExitManager.SceneIndex.Add(SceneManager.GetActiveScene().buildIndex);
        SceneManager.LoadScene("MenuIniziale");
    }


    public void ApriImpostazioni()
    {
        ExitManager.i = ExitManager.i + 1;
        ExitManager.SceneIndex.Add(SceneManager.GetActiveScene().buildIndex);
        SceneManager.LoadScene("Impostazioni");
    }

    public void ApriRicerca()
    {
        ExitManager.i = ExitManager.i + 1;
        ExitManager.SceneIndex.Add(SceneManager.GetActiveScene().buildIndex);
        SceneManager.LoadScene("cercadestinazione");
    }

    public void FrecciaIndietro()
    {
        if (ExitManager.SceneIndex.Count > 0)
        {

            SceneManager.LoadScene(ExitManager.SceneIndex[ExitManager.i - 1]);
            ExitManager.SceneIndex.Remove(ExitManager.i);
            ExitManager.i--;
        }
    }

}