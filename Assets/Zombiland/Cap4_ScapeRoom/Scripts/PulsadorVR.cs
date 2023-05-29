using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PulsadorVR : MonoBehaviour
{

    // Update is called once per frame
    void Update()
    {
        // Check for touch input instead of mouse input
        if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began)
        {
            Pulsar();
        }
    }

    void Pulsar()
    {
        RaycastHit hitInfo;

        // Use the middle point of the screen as the touch position
        Vector2 touchPosition = new Vector2(Screen.width / 2, Screen.height / 2);

        Ray rayOrigin = Camera.main.ScreenPointToRay(touchPosition);

        if (Physics.Raycast(rayOrigin, out hitInfo))
        {
            if (hitInfo.transform.GetComponent<Tecla>() != null)
            {
                hitInfo.transform.GetComponent<Tecla>().InsertarTecla();
            }
        }
    }
}


