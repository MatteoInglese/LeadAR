using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class prova : MonoBehaviour
{

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
        void Update()
        {
            if (Input.GetKeyDown(KeyCode.Escape))
            {
                if (ExitManager.i > 0)
                {

                    SceneManager.LoadScene(ExitManager.SceneIndex[ExitManager.i - 1]);
                    ExitManager.SceneIndex.Remove(ExitManager.i);
                    ExitManager.i--;

                }
                else { Application.Quit(); }
            }
        }
}
