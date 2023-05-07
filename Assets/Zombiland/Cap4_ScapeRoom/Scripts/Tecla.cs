using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Tecla : MonoBehaviour
{
    [SerializeField] private Teclado teclado;
    [SerializeField] private int valorTecla;


    public void InsertarTecla()
    {
        teclado.NuevaTecla(valorTecla);
    }

}
