using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class disparoi : MonoBehaviour
{
   [SerializeField] private float puntuaje;
    [SerializeField] private float puntuajefin;
    private TextMeshProUGUI textMesh;
    
    public GameObject arCamera;
    public GameObject explosion;

    public void disparo()
    {
        RaycastHit hit;

        if(Physics.Raycast(arCamera.transform.position, arCamera.transform.forward,out hit))
        {
            if(hit.transform.name == "Zombie(Clone)")
            {
                Destroy(hit.transform.gameObject);
                Instantiate(explosion, hit.point, Quaternion.LookRotation(hit.normal));
                sumarpuntos();
            }
        }

    }

    public void sumarpuntos()
    {
        puntuaje = puntuaje + 10f;
    }
    // Start is called before the first frame update
    private void Start()
    {
        textMesh = GameObject.Find("Puntos").GetComponent<TextMeshProUGUI>();
        

    }
    public float puntuajefinal()
    {
        puntuajefin = puntuaje;
        PlayerPrefs.SetFloat("puntos", puntuaje);
        return puntuajefin;
    }

    // Update is called once per frame
    void Update()
    {
        textMesh.text = "Puntuación: " + puntuaje.ToString() + "pnts";
    }
}
