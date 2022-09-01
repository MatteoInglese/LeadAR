using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ProprietaBottoni : MonoBehaviour
{
    public GameObject oopsie;
    public bool HasPath;
    public string nome;
    public string path;
    // Start is called before the first frame update
    void Start()
    {
        Image[] sprite = this.transform.GetChild(0).gameObject.GetComponentsInChildren<Image>();
        sprite[0].sprite = Resources.Load<Sprite>(path);
        TMPro.TextMeshProUGUI[] texts = this.transform.GetChild(1).gameObject.GetComponentsInChildren<TMPro.TextMeshProUGUI>();
        texts[0].text = nome;
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void ProssimaScena()
    {
        if (HasPath)
        {

            GestoreEntrateInScena.ApriPercorso();
  
        } else
        {
            oopsieWoopsie();
        }
    }

    private void oopsieWoopsie()
    {
        GameObject gura = Instantiate(oopsie, GameObject.Find("Canvas").transform);
        gura.SetActive(true);

    }
}
