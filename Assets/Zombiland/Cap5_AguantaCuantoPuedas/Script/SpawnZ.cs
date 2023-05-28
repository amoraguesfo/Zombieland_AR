using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnZ : MonoBehaviour
{
    public GameObject zombie;
    public Transform[] spawnPoints; // Array de las 3 posiciones
    public int oleadas = 5; // Total de oleadas de enemigos
    public float tiempoentreolas = 10f; // Tiempo entre oleadas en segundos

    private int oleadaActual = 0; // Oleada actual
    private bool isCreando = false; // Indicador de si se está generando una oleada

    private void Start()
    {
        Inicio();
    }

    private void Inicio()
    {
        isCreando = true;
        oleadaActual = 0;

        // Iniciar la generación de oleadas en un intervalo de tiempo
        StartCoroutine(CrearOlas());
    }

    private System.Collections.IEnumerator CrearOlas()
    {
        while (oleadaActual < oleadas)
        {
            GeneraZombies();

            yield return new WaitForSeconds(tiempoentreolas);

            oleadaActual++;
        }

        isCreando = false;
    }

    private void GeneraZombies()
    {
        for (int i = 0; i < spawnPoints.Length; i++)
        {
            // Instanciar un nuevo enemigo en la posición de generación correspondiente
            GameObject enemy = Instantiate(zombie, spawnPoints[i].position, spawnPoints[i].rotation);
        }
    }
}
