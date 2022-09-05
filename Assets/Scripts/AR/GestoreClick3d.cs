using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class GestoreClick3d : MonoBehaviour
{
    public Interest interest; //informazioni del punto di interesse

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame

    /*
     * qui viene gestita l'interazione con il punto di interesse,
     * se viene cliccato lo schermo, viene controllato se è stata cliccata
     * l'hitbox dell'oggetto;
     * quindi se la descrizione è attiva, viene disattivata
     * altrimenti viene attivata e all'interno vengono scritte le informazioni 
     * presenti nell'attributo interest
    */
    void Update()
    {
        if (Input.GetMouseButtonDown(0)) //controlla se viene viene cliccato lo schermo
        {
            
            Ray raycast = Camera.main.ScreenPointToRay(Input.GetTouch(0).position);
            RaycastHit raycastHit;

            if (Physics.Raycast(raycast, out raycastHit))
            {
                if (raycastHit.collider.transform == this.transform)   //controlla se il click è fatto sull'hitbox dell'oggetto
                {
                    if (this.transform.GetChild(0).gameObject.activeInHierarchy)
                    {
                        this.transform.GetChild(0).gameObject.SetActive(false);

                    }
                    else
                    {
                        this.transform.GetChild(0).gameObject.SetActive(true);

                        TMPro.TextMeshPro[] texts = this.transform.GetChild(0).gameObject.GetComponentsInChildren<TMPro.TextMeshPro>();
                        texts[0].text = interest.Nome;
                        texts[1].text = interest.Text;
                        texts[2].text = interest.Nome;
                        texts[3].text = interest.Text;
                    }
                }
            }
        }
    }
}
