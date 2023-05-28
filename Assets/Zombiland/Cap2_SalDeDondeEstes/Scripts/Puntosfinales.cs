using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using System;

public class Puntosfinales : MonoBehaviour
{
    [SerializeField] private float PuntosPlaypref;
    [SerializeField] private float puntos;
    private TextMeshProUGUI puntuaje;

    // Start is called before the first frame update
    void Start()
    {
        puntos = PlayerPrefs.GetFloat("PuntosPlaypref",0f);
        puntuaje = GameObject.Find("puntos").GetComponent<TextMeshProUGUI>();
        puntuaje.text = "Tus puntuación: " + puntos.ToString() + " pnts";
        //Añadimos los puntos del Cap2
        AppController.Instance.addScore((int)Math.Round(puntos));
    }
    
}
