using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerWalk : MonoBehaviour
{
    private CharacterController controller;
    public int speed;
    //Gravedad
    Vector3 velocity;
    public float gravity = -15f;

    public Transform groundCheck;
    float radius = 0.1f;
    bool isGrounded = false;
    void Start()
    {
        controller = GetComponent<CharacterController>();
    }

    // Update is called once per frame
    void Update()
    {
        isGrounded = Physics.CheckSphere(groundCheck.position, radius);

        if (isGrounded && velocity.y < 0)
        {
            velocity.y = gravity;
        }

        if (Input.GetButton("Fire1"))
        {
            // Calculate the direction to move based on the camera's forward vector
            Vector3 direction = Camera.main.transform.forward;
            direction.y = 0;
            direction.Normalize();

            // Move the character controller in the calculated direction
            Vector3 movement = direction * speed * Time.deltaTime;
            controller.Move(movement);
        }
        velocity.y += gravity * Time.deltaTime;
        controller.Move(velocity * Time.deltaTime);

    }
}
