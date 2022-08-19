using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using Newtonsoft.Json;
using System;
using UnityEngine.Android;

public class GestoreDestinazioni : MonoBehaviour
{
    [SerializeField] public static List<Interest> interests = new List<Interest>();

    // Start is called before the first frame update
    void Start()
    {
        interests = JsonConvert.DeserializeObject<List<Interest>>(Resources.Load<TextAsset>("JSON/Interest").ToString());
    }

    public static string Truncate(string value, int maxChars)
    {
        return value.Length <= maxChars ? value : value.Substring(0, maxChars) + "...";
    }

    public static string Arrotonda(double distanza)
    {
        string num = "";
        switch (distanza)
        {
            case <= 50 :
                num = "50m";
                break;

            case <= 100:
                num = "100m";
                break;

            case <= 500:
                num = "500m";
                break;

            case <= 1000:
                num = "1000m";
                break;

            case <= 5000:
                num = "5 km";
                break;
            case > 5000:
                num = "5 km+";
                break;
        }
        return num;
    }

}
