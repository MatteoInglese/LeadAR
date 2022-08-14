using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class GestoreCerca : MonoBehaviour
{
    public GameObject luogoPrefab;
    public GameObject guraPrefab;
    public Transform genitoreLuogo;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void Ricerca(string stringa)
    {

        foreach (Transform interest in genitoreLuogo)
        {
            Destroy(interest.gameObject);
        }

        foreach (var interest in GestoreDestinazioni.interests)
        {
            if (interest.Nome == stringa)
            {
                if (interest.HasPath)
                {
                    GameObject newGo = Instantiate(luogoPrefab, genitoreLuogo);
                    Text[] texts = newGo.GetComponentsInChildren<Text>();
                    texts[0].text = Truncate(interest.Nome, 21);
                }
                else
                {
                    GameObject newGura = Instantiate(guraPrefab, genitoreLuogo);
                    Text[] texts = newGura.GetComponentsInChildren<Text>();
                    texts[0].text = Truncate(interest.Nome, 21);
                }
            }
        }
    }

    private static string Truncate(string value, int maxChars)
    {
        return value.Length <= maxChars ? value : value.Substring(0, maxChars) + "...";
    }

}
