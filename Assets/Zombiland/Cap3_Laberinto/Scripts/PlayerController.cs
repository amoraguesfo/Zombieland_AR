using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class PlayerController : MonoBehaviour
{

    public GameObject GotHitScreen;

    private void OnCollisionEnter(Collision collision)

    {

    }
    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Finish"))
        {
            SceneManager.LoadScene("Cap3_end");
        }
    }


    // Update is called once per frame
    void Update()
    {
        
    }
}
