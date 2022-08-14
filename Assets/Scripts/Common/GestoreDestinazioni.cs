using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using Newtonsoft.Json;
using System;

public class GestoreDestinazioni : MonoBehaviour
{
    [SerializeField] public static List<Interest> interests = new List<Interest>();
    public GameObject luogoPrefab;
    public GameObject guraPrefab;
    public Transform genitoreLuogo;

    // Start is called before the first frame update
    void Start()
    {
        interests = JsonConvert.DeserializeObject<List<Interest>>(Resources.Load<TextAsset>("JSON/Interest").ToString());
        foreach (var interest in interests)
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

    private static string Truncate(string value, int maxChars)
    {
        return value.Length <= maxChars ? value : value.Substring(0, maxChars) + "...";
    }

}
