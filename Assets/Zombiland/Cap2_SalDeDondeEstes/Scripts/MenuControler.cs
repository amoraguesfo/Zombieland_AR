using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MenuControler : MonoBehaviour
{

    public void continuar()
    {
        //SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
        SceneManager.LoadScene("Cap2 juego");
    }
   
    public void Salir()
    {
        //Application.Quit();
        SceneManager.LoadScene("MainMenu");
    }
    
}
