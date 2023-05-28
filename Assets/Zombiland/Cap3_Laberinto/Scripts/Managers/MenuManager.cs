using Google.XR.Cardboard;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MenuManager : MonoBehaviour
{


    private void Awake()
    {
        CardboardController.Instance.StartCardboard();

    }
    public void goToGame()
    {
        SceneManager.LoadScene("Cap3");
    }
    public void goToEnd()
    {
       
        SceneManager.LoadScene("Cap3_end");
    }
    public void goToMenu()
    {
        CardboardController.Instance.StopCardboard();
        SceneManager.LoadScene("MainMenu");
    }

}
