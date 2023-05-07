using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class Timer : MonoBehaviour
{
    public TextMeshProUGUI Contador;
    public int ValorInicial = 10;

    private void Start()
    {
        StartCoroutine(CuentaAtras());
    }

    IEnumerator CuentaAtras()
    {
        Contador.text = ValorInicial.ToString();
        while (ValorInicial > 0)
        {
            yield return new WaitForSeconds(1);
            ValorInicial--;
            Contador.text = ValorInicial.ToString();
        }

        // Haz lo que sea
    }


}
