using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GestoreClick3d : MonoBehaviour
{

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
                    }
                }
            }
        }
    }
}
