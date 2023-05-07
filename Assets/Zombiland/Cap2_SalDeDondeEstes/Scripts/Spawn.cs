using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Spawn : MonoBehaviour
{

    public Transform[] spawnZPoints;
    public Transform[] spawnTPoints;
    public GameObject[] zombie;
    public GameObject[] trastos;

    void Start()
    {
        for (int i = 0; i < trastos.Length; i++)
        {
            Instantiate(trastos[i], spawnTPoints[i].position, spawnTPoints[i].rotation);

        }

        InvokeRepeating("spawn", 0f, 6f); // Los zombies se inician cada 6 segundos 
        
    }

    void spawn()
     {
       
        // Spawn zombies
        for (int i = 0; i < zombie.Length; i++)
        {
            Instantiate(zombie[i], spawnZPoints[i].position, spawnZPoints[i].rotation);
            
        }

        
    }
}