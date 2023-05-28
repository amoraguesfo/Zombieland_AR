using Managers;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class PlayerController : MonoBehaviour
{

    public GameObject GotHitScreen;
    

    private void Start()
    {
        
    }
    private void OnCollisionEnter(Collision collision)

    {

    }
    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Finish"))
        {
            //Añadimos los puntos del Cap1
            float tiempoFinal = GameManager.Instance.timer;
            AppController.Instance.addScore((int)Math.Round(tiempoFinal)); 
            SceneManager.LoadScene("Cap3_end");

            
        }
    }


    // Update is called once per frame
    void Update()
    {
        
    }
}
