using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MenuControler : MonoBehaviour
{

    public void goToGame()
    {
        SceneManager.LoadScene("Cap2 juego");
    }
    public void goToEnd()
    {
        SceneManager.LoadScene("Final cap2");
    }
    public void goToMenu()
    {
        SceneManager.LoadScene("MainMenu");
    }
  
}
