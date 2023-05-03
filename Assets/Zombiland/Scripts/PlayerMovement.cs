using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMovement : MonoBehaviour
{
    public CharacterController controller;
    public Transform cardboardCamera;
    public float speed = 12f;
    float x;
    float z;
    Vector3 move;
    //Gravedad
    Vector3 velocity;
    public float gravity = -15f;

    public Transform groundCheck;
    float radius = 0.4f;
    public LayerMask mask;
    bool isGrounded = false;
    public float jumpForce = 100f;

    void Start()
    {
        cardboardCamera = Camera.main.transform;
    }

    void Update()
    {
        isGrounded = Physics.CheckSphere(groundCheck.position, radius, mask);

        if (isGrounded && velocity.y < 0)
        {
            velocity.y = gravity;
        }

        // Calculate the forward direction of the cardboard camera
        Vector3 forward = cardboardCamera.forward;
        forward.y = 0;
        forward.Normalize();

        // Calculate the right direction of the cardboard camera
        Vector3 right = cardboardCamera.right;
        right.y = 0;
        right.Normalize();

        x = Input.GetAxis("Horizontal");
        z = Input.GetAxis("Vertical");
        move = (x * right + z * forward).normalized;
        controller.Move(move * speed * Time.deltaTime);

        if (Input.GetButtonDown("Jump") && isGrounded)
        {
            velocity.y = Mathf.Sqrt(jumpForce * -2 * gravity);
        }

        velocity.y += gravity * Time.deltaTime;
        controller.Move(velocity * Time.deltaTime);
    }
}
