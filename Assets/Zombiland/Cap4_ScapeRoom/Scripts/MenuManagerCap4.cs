using Google.XR.Cardboard;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MenuManagerCap4 : MonoBehaviour
{


    private void Awake()
    {
        CardboardController.Instance.StartCardboard();

    }
    public void goToGame()
    {
        SceneManager.LoadScene("Cap4");
    }
    public void goToEnd()
    {
       
        SceneManager.LoadScene("Cap4_end");
    }
    public void goToMenu()
    {
        CardboardController.Instance.StopCardboard();
        SceneManager.LoadScene("MainMenu");
    }

}
