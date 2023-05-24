using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class PlayerC5 : MonoBehaviour
{

    [SerializeField] public int vidas = 10;
    [SerializeField] public int Puntos;
    public TextMeshProUGUI barravida;


    // Start is called before the first frame update
    void Start()
    {
        barravida.text = vidas.ToString();
    }

    // Update is called once per frame
    void Update()
    {
        barravida.text = vidas.ToString();
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Zombie"))
        {
            vidas--; // Resta vida del enemigo
            if (vidas <= 0)
            {
                //Destroy(gameObject); // Destruye el enemigo si su vida es igual o menor a 0
            }
        }
    }
}
