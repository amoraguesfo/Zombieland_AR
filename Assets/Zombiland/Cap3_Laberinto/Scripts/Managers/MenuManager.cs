using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MenuManager : MonoBehaviour
{

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
        SceneManager.LoadScene("MainMenu");
    }

}
