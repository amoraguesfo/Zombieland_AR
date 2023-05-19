using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class disparo : MonoBehaviour
{

    public Transform spawnpoint;
    public GameObject bala;
    public float fuerza = 2000f;
    public float rango = 0f;
    private float tiempoentrebala = 0f;
    public float balascargador = 2f;

    public void disparar()
    {
       
            if (Time.time > tiempoentrebala)
            {

                GameObject nuevaBala;
                nuevaBala = Instantiate(bala, spawnpoint.position, spawnpoint.rotation);
                nuevaBala.GetComponent<Rigidbody>().AddForce(spawnpoint.forward * fuerza);

                tiempoentrebala = Time.time + tiempoentrebala;

                Destroy(nuevaBala, 2);
                balascargador = balascargador - 1f;

            }
        }
    
    IEnumerator wait()
    {
        yield return new WaitForSeconds(3);
    }

    void cargar()
    {
        wait();
        balascargador = balascargador + 2f;
    }

   

   
    // Update is called once per frame
    void Update()
    {
        if (Input.GetButtonDown("Fire1"))
        {
            if (balascargador != 0f)
            {
                disparar();
            }
            else
            {
                cargar();
            }
        }
        
    }
}
