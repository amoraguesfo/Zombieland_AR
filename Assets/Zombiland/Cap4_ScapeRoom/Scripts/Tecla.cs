using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Tecla : MonoBehaviour
{
    [SerializeField] private Teclado teclado;
    [SerializeField] private int valorTecla;
    [SerializeField] private float tiempoEspera = 1f;

    private bool puedeInsertar = true;

    public void InsertarTecla()
    {
        if (puedeInsertar)
        {
            StartCoroutine(InsertarConRetraso());
        }
    }

    private IEnumerator InsertarConRetraso()
    {
        puedeInsertar = false;
        teclado.NuevaTecla(valorTecla);

        yield return new WaitForSeconds(tiempoEspera);

        puedeInsertar = true;
    }
}
