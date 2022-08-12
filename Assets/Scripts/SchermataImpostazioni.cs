using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SchermataImpostazioni : MonoBehaviour
{

    public static int SceneIndex;

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    public void TornaMenu()
    {
        SceneManager.LoadScene("MenuIniziale");
    }
    
    public void SetDistanceTrue(GameObject obj)
    {
        obj.SetActive(true);
    }

    public void SetDistanceFalse(GameObject obj)
    {
        obj.SetActive(false);
    }

    public void ApriImpostazioni()
    {
        SceneIndex = SceneManager.GetActiveScene().buildIndex;
        SceneManager.LoadScene("Impostazioni");
    }

    public void TornaIndietro()
    {
        SceneManager.LoadScene(SceneIndex);
    }
}
