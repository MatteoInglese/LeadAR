using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ExitManager : MonoBehaviour
{
    public static List<int> SceneIndex = new List<int>();
    public static int i = 0;

    // Start is called before the first frame update
    void Start()
    {
 

    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            if (i > 0)
            {
                SceneManager.LoadScene(SceneIndex[i - 1]);
                SceneIndex.Remove(i-1);
                i--;

            }
            else { Application.Quit(); }
        }
    }

}
