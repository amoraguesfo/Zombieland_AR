using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class Teclado : MonoBehaviour
{
    [SerializeField] public List<int> combinacionCorrecta;
    [SerializeField] public TextMeshProUGUI textoCombinacionActual;
    [SerializeField] public Image indicadorResultado;

    List<int> combinacionActual;
    bool combinacionDescubierta;

    private void Start()
    {
        combinacionActual = new List<int>();
    }

    // Start is called before the first frame update
    public void NuevaTecla(int nuevaTecla)
    {
        if (!combinacionDescubierta)
        {
            if (combinacionActual.Count == 0)
                textoCombinacionActual.text = string.Empty;

            combinacionActual.Add(nuevaTecla);

            if (combinacionCorrecta.Count == combinacionActual.Count)
            {
                CompararCombinaciones();
            }
            else
            {
                indicadorResultado.color = Color.white;
            }
            textoCombinacionActual.text = textoCombinacionActual.text + nuevaTecla.ToString();
        }


    }

    void CompararCombinaciones()
    {
        for (int i = 0; i < combinacionCorrecta.Count; i++)
        {
            if(combinacionCorrecta[i] != combinacionActual[i])
            {
                //MOstrar indicador de combinacion incorrecta
                indicadorResultado.color = Color.red;
                combinacionActual.Clear();
                return;
            }
        }

        //Mostrar indicador de combinacion correcta
        indicadorResultado.color = Color.green;
        combinacionDescubierta = true;
    }

    
}
