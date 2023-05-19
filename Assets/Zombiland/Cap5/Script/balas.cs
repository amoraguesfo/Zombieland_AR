using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class balas : MonoBehaviour
{
    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("Zombie"))
        {
            Destroy(collision.gameObject);
        }
    }
}
