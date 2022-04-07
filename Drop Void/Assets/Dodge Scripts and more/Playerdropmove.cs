using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Playerdropmove : MonoBehaviour
{
    public Rigidbody rb;

    public float showforce;
    public float showforce2;
    public float forwardforce;
    public static float sforce = 80;
    public static float sforce2 = 1;
    float screenwidth;
    public GameObject flames;

    Vector2 movement;
    public Joystick joystick;
    void Start()
    {
        showforce = sforce;
        screenwidth = Screen.width / 2;
    }

    void Update()
    {
        showforce = sforce;
        showforce2 = sforce2;
        movement.x = joystick.Horizontal;
        movement.y = joystick.Vertical;
        Touchcontrol();
    }

    void FixedUpdate()
    {
        rb.AddForce(0, -forwardforce, 0 * Time.fixedDeltaTime);

        if (Input.GetKey("d"))
        {
            rb.AddForce(0, 0, sforce * Time.deltaTime, ForceMode.VelocityChange);
        }

        if (Input.GetKey("a"))
        {
            rb.AddForce(0, 0, -sforce * Time.deltaTime, ForceMode.VelocityChange);
        }

        rb.velocity = new Vector3(rb.velocity.x, rb.velocity.y, movement.x * sforce2);

        //rb.MovePosition(rb.position + movement.x * sforce * Time.fixedDeltaTime);
    }

    void Touchcontrol()
    {
        if(Input.touchCount > 0)
        {
            Touch touch = Input.GetTouch(0);
            if (touch.position.x > screenwidth)
            {
                rb.AddForce(0, 0, sforce * Time.deltaTime, ForceMode.VelocityChange);
            }
            else if (touch.position.x < screenwidth)
            {
                rb.AddForce(0, 0, -sforce * Time.deltaTime, ForceMode.VelocityChange);
            }
        }
    }
}
