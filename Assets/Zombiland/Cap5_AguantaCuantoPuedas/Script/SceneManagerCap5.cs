using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;

public class SceneManagerCap5 : MonoBehaviour
{

    public int puntuacion;
    public TextMeshProUGUI final;



    public void Start()
    {
        puntuacion = 0;


    }

    private void Update()
    {
        if (final != null) puntosfinal();
    }

    public void jugar()
    {

        SceneManager.LoadScene("Cap5juego");

    }

    public void puntosfinal()
    {
        puntuacion = PlayerPrefs.GetInt("PuntosC5", 0);
        final.text = "Puntos : " + puntuacion.ToString();
    }

    public void menufinal()
    {
        SceneManager.LoadScene("MainMenu");
    }
}