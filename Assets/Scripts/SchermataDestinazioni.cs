using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SchermataDestinazioni : MonoBehaviour
{
    public GameObject oopsie;
    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void oopsieWoopsie()
    {
        GameObject gura = Instantiate(oopsie, GameObject.Find("Canvas").transform);
        gura.SetActive(true);
        //     GameObject newGo = Instantiate(luogoPrefab, genitoreLuogo);oopsieWoopsie
        //     Text[] texts = newGo.GetComponentsInChildren<Text>();
        //     texts[0].text = Truncate(interest.Nome, 21);
    }
}
