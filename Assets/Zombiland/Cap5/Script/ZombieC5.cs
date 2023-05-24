using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;
using UnityEngine.UI;

public class ZombieC5 : MonoBehaviour
{

[SerializeField]
    private Transform Objetivo;
    public float velocidad = 2.5f;
    public NavMeshAgent IA;
    public int health = 1; // Vida del enemigo
    private float currentDist;
    public Animation caminar;
    public Animation atacar;
    public float attackDistance = 1f;
    



    private void Start()
    {
        Objetivo = GameObject.FindWithTag("Player").transform;
        IA = gameObject.GetComponent<NavMeshAgent>();



    }

    // Update is called once per frame
    void Update()
    {
        IA.speed = velocidad;
        //IA.SetDestination(Objetivo.position);

        currentDist = Vector3.Distance(transform.position, Objetivo.position);
        if (currentDist > attackDistance)
        {
            IA.SetDestination(Objetivo.transform.position);
            caminar.Play("walk");
            transform.LookAt(Objetivo);

        }
        
        if (currentDist < attackDistance)
        {

            IA.velocity = Vector3.zero;
            atacar.Play("atack1");
            
        }



    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Bala"))
        {
            health--; // Resta vida del enemigo
            if (health <= 0)
            {
                Destroy(gameObject); // Destruye el enemigo si su vida es igual o menor a 0
            } 
        }
        if (other.CompareTag("Player"))
        {
            health--; // Resta vida del enemigo
            if (health <= 0)
            {
                Destroy(gameObject); // Destruye el enemigo si su vida es igual o menor a 0
            }
        }
    }
}
