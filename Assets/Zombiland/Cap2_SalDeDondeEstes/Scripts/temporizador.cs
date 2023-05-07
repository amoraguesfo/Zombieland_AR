using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class temporizador : MonoBehaviour
{
    // Gestiona el temporizador y la puntuacion final para usar playerpref

    [SerializeField]public float tiempo = 0;
    [SerializeField] private float recuentopuntos = 0; // Almacenamos los puntos finales del script de disparo
    private TextMeshProUGUI textMesh;
    private MenuControler controlador;
    private disparoi disparoScript;
    private string PuntosPlaypref = "recuentopuntos";

    // Start is called before the first frame update
    void Start()
    {
       textMesh = GameObject.Find("Tiempo").GetComponent<TextMeshProUGUI>();
       controlador = GameObject.Find("Gamemanager").GetComponent<MenuControler>();
       disparoScript = GameObject.Find("Gamemanager").GetComponent<disparoi>();
    }

    public void cuenta() // Reduce el tiempo 
    {
        tiempo -= Time.deltaTime;
        textMesh.text = " Tiempo: " + tiempo.ToString("f1") + " s";
    }

    // Update is called once per frame
    void Update()
    {
        // Si el tiempo acaba (fija el mensaje a 0 y activa salida escena guardando puntos
        if (tiempo < 0.00f)
        {
            textMesh.text = " Tiempo finalizado: 0 s";
            recuentopuntos = disparoScript.puntuajefinal(); // Almacenamos la puntuacion
            PlayerPrefs.SetFloat("PuntosPlaypref", recuentopuntos);
            controlador.continuar();
        }
        else
        {
            cuenta();
        }
       
            
        
    }


}
