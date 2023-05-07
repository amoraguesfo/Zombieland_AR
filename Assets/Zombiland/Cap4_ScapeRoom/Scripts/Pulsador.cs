using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Pulsador : MonoBehaviour
{

    // Update is called once per frame
    void Update()
    {
        if (Input.GetMouseButtonDown(0)) {
            Pulsar();
        }
    }


    void Pulsar()
    {
        RaycastHit hitInfo;

        Vector2 mousePosition = Input.mousePosition;

        Ray rayOrigin = Camera.main.ScreenPointToRay(mousePosition);

        if (Physics.Raycast(rayOrigin, out hitInfo))
        {

            if (hitInfo.transform.GetComponent<Tecla>() != null)
            {
                hitInfo.transform.GetComponent<Tecla>().InsertarTecla();
            }
           
        }
    }


}
