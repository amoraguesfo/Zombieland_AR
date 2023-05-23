using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Linterna : MonoBehaviour
{

    public Light linterna;
    private float min = 0.1f;
    private float max = 0.3f;

    // Start is called before the first frame update
    void Start()
    {

    }

    IEnumerator activacion()
    {
        while (true)
        {
            yield return new WaitForSeconds(Random.Range(min, max));
            linterna.enabled = !linterna.enabled;
        }

    }

  
}
