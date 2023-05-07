using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CharacterControlller : MonoBehaviour
{
    public float xMin;
    public float xMax;
    public float zMin;
    public float zMax;

    public float sensitivityX;


    // Update is called once per frame
    void Update()
    {

        Movimiento();
        CheckPosicion();

        Rotacion();
        
    }


    private void Movimiento()
    {
        if (Input.GetKey(KeyCode.LeftArrow) || Input.GetKey(KeyCode.A))
        {
            this.transform.Translate(new Vector3(-10f, 0f, 0f) * Time.deltaTime, Space.Self);
        }
        else if (Input.GetKey(KeyCode.RightArrow) || Input.GetKey(KeyCode.D))
        {
            this.transform.Translate(new Vector3(10f, 0f, 0f) * Time.deltaTime, Space.Self);
        }
        else if (Input.GetKey(KeyCode.UpArrow) || Input.GetKey(KeyCode.W))
        {
            this.transform.Translate(new Vector3(0f, 0f, 10f) * Time.deltaTime, Space.Self);
        }
        else if (Input.GetKey(KeyCode.DownArrow) || Input.GetKey(KeyCode.S))
        {
            this.transform.Translate(new Vector3(0f, 0f, -10f) * Time.deltaTime, Space.Self);
        }
    }

    private void CheckPosicion()
    {
        if (transform.position.x > xMax) transform.position = new Vector3(xMax, transform.position.y, transform.position.z);
        else if(transform.position.x < xMin) transform.position = new Vector3(xMin, transform.position.y, transform.position.z);

        if (transform.position.z > zMax) transform.position = new Vector3(transform.position.x, transform.position.y, zMax);
        else if (transform.position.z < zMin) transform.position = new Vector3(transform.position.x, transform.position.y, zMin);
    }

    private void Rotacion()
    {
        transform.Rotate(0, Input.GetAxis("Mouse X") * sensitivityX, 0);
    }


}
