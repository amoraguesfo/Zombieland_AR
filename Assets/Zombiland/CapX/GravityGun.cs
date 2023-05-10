using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GravityDown : MonoBehaviour
{
    [SerializeField] Camera cam;
    [SerializeField] float maxGrabDistance = 10f, throwForce = 20f, lerpSpeed = 10f;
    [SerializeField] Transform objectHolder;

    Rigidbody grabbeddRB;

    void Start()
    {
        
    }

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.E))
        {
            if (grabbeddRB)
            {
                grabbeddRB.MovePosition(objectHolder.transform.position);
            }
            if (grabbeddRB)
            {
                grabbeddRB.isKinematic = false;
                grabbeddRB = null;
            }
            else
            {
                RaycastHit hit;
                Ray ray = cam.ViewportPointToRay(new Vector3(0.5f, 0.5f));
                if(Physics.Raycast(ray, out hit, maxGrabDistance))
                {
                    grabbeddRB = hit.collider.gameObject.GetComponent<Rigidbody>();
                    if (grabbeddRB)
                    {
                        grabbeddRB.isKinematic = true;
                    }
                }
            }

        }
    }
}
