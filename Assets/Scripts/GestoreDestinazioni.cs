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
    public Transform genitoreLuogo;

    // Start is called before the first frame update
    void Start()
    {
        interests = JsonConvert.DeserializeObject<List<Interest>>(Resources.Load<TextAsset>("JSON/Interest").ToString());
        foreach (var interest in interests)
        {
            GameObject newGo = Instantiate(luogoPrefab, genitoreLuogo);
            Text[] texts = newGo.GetComponentsInChildren<Text>();
            texts[0].text = interest.Nome;
        }
    }

}
