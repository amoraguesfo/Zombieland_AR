using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class balas : MonoBehaviour
{
    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Sala"))
        {
            Destroy(gameObject); // Destruye la bala si choca contra un zombie
            
        }
        else
        { 
        if (other.CompareTag("Zombie"))
        {
            Destroy(gameObject); // Si choca con cualquier cosa tambien se destruye
        }
        }
    }
}
