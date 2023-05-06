using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class mouseMoveEditor : MonoBehaviour
{

    //Mouse movement
    public float mouseSpeed = 500f;
    public Transform cam;

    float mouseX;
    float mouseY;
    float yReal = 0.0f;
    // Update is called once per frame
    void Update()
    {
#if UNITY_EDITOR
        mouseMovement();
#endif
    }
    private void mouseMovement()
    {
        mouseX = Input.GetAxis("Mouse X") * mouseSpeed * Time.deltaTime;
        mouseY = Input.GetAxis("Mouse Y") * mouseSpeed * Time.deltaTime;
        yReal -= mouseY;

        yReal = Mathf.Clamp(yReal, -90f, 90f);
        cam.localRotation = Quaternion.Euler(yReal, 0f, 0f);
        transform.Rotate(Vector3.up * mouseX);
    }
}
