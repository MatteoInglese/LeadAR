using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SchermataImpostazioni : MonoBehaviour
{
    public GameObject m100;
    public GameObject m500;
    public GameObject m1000;
    public GameObject m5000;
    public static int setting = 0;

    // Start is called before the first frame update
    void Start()
    {
        if(setting == 1)
        {
            this.Set100();
        }
        else if(setting == 2) 
        {
            this.Set500();
        }
        else if (setting == 3)
        {
            this.Set1000();
        }
        else if (setting == 4)
        {
            this.Set5000();
        }


    }



    public void Set100()
    {
        setting = 1;
        m100.SetActive(true);
        m500.SetActive(false);
        m1000.SetActive(false);
        m5000.SetActive(false);
    }

    public void Set500()
    {
        setting= 2;
        m100.SetActive(false);
        m500.SetActive(true);
        m1000.SetActive(false);
        m5000.SetActive(false);
    }

    public void Set1000()
    {
        setting = 3;
        m100.SetActive(false);
        m500.SetActive(false);
        m1000.SetActive(true);
        m5000.SetActive(false);
    }

    public void Set5000()
    {
        setting = 4;
        m100.SetActive(false);
        m500.SetActive(false);
        m1000.SetActive(false);
        m5000.SetActive(true);
    }

}
