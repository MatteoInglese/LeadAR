using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class GestoreClick3d : MonoBehaviour
{
    public Interest interest;
    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetMouseButtonDown(0))
        {
            
            Ray raycast = Camera.main.ScreenPointToRay(Input.GetTouch(0).position);
            RaycastHit raycastHit;
            if (Physics.Raycast(raycast, out raycastHit))
            {
                if (raycastHit.collider.transform == this.transform)
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
