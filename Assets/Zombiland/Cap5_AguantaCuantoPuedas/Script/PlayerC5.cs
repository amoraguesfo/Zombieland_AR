using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.SceneManagement;

public class PlayerC5 : MonoBehaviour
{

    [SerializeField] public int vidas;
    [SerializeField] private int Puntos;
    public TextMeshProUGUI barravida;
    public TextMeshProUGUI puntuacion;
    public TextMeshProUGUI textTimer;
    public float timer = 120f;


    // Start is called before the first frame update
    void Start()
    { 
        Puntos = vidas * 50;
        textTimer.text = "Tiempo: " + timer.ToString("n2");
        barravida.text = vidas.ToString();
        puntuacion.text = Puntos.ToString();
    }

    // Update is called once per frame
    void Update()
    {
        timer -= Time.deltaTime;
        textTimer.text = "Tiempo: " + timer.ToString("n2");

        if (timer < 0) textTimer.color = Color.red;

        barravida.text = vidas.ToString();

        puntuacion.text = "Puntos: " + Puntos.ToString();

        if(vidas < 3)
        {
            barravida.color = Color.red;
        }
        if (vidas < 1) finjuego();
        if (timer < 0) finjuego();
    }

    public void finjuego()
    {
        PlayerPrefs.SetInt("PuntosC5",Puntos);
        SceneManager.LoadScene("Cap5_end");

    }

    private void OnTriggerEnter(Collider other)// Cada contacto nos resta vida y puntos
    {
        if (other.CompareTag("Zombie"))
        {
            vidas--; // Resta vida del enemigo
            Puntos = Puntos - 50;
            
        }
    }

}
