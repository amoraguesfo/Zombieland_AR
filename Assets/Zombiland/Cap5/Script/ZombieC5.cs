using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class ZombieC5 : MonoBehaviour
{


    public Transform Objetivo;
    public float velocidad = 2.5f;
    public NavMeshAgent IA;

    private void Start()
    {
        Objetivo = GameObject.FindWithTag("Player").transform;
        IA = gameObject.GetComponent<NavMeshAgent>();

    }

    // Update is called once per frame
    void Update()
    {
        IA.speed = velocidad;
        IA.SetDestination(Objetivo.position);
        
    }
}
