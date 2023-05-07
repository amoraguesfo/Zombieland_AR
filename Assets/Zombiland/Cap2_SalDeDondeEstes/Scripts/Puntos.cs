using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class Puntos : MonoBehaviour
{
    private float puntuaje;
    public TextMeshProUGUI textMesh;

    // Start is called before the first frame update
   private void Start()
    {
        textMesh = GetComponent<TextMeshProUGUI>();
    }

    // Update is called once per frame
    // Actualizamos el marcador
    private void Update()
    {
        textMesh.text = "Puntuacion: " + puntuaje.ToString() + "pnts";
    }
}
