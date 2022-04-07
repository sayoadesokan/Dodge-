/*using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class playerslidemovement : MonoBehaviour
{
    private float speed;
    public Camera cam;
    public Rigidbody rb;
    public float pspeed;
    Vector2 pos1 = new Vector2(0f, 0f);

    bool ismoving = false; 
    Vector3 pos;
    //float screenbound;

    public float forwardSpeed;
    public float sideSpeed;
    void Start()
    {
        speed = 0.02f;
        //cam = Camera.main;
        rb = GetComponent<Rigidbody>();
        pos = rb.position;

        //screenbound = 
    }

    void Update()
    {
        Vector3 deltaPosition = transform.forward * forwardSpeed;
        if (Input.touchCount > 0)
        {
            Vector3 touchPosition = Input.GetTouch(0).position;
            if (touchPosition.x > Screen.width * 0.5f)
                deltaPosition += transform.right * sideSpeed;
            else
                deltaPosition -= transform.right * sideSpeed;
        }
        transform.position += deltaPosition * Time.deltaTime;

        if (Input.touchCount > 0)
        {
            Touch touch = Input.GetTouch(0);
            if(touch.phase == TouchPhase.Moved)
            {
                transform.position = new Vector3(transform.position.x + touch.deltaPosition.x * speed, transform.position.y, transform.position.z);
            }
        }*/

        //pos = Input.mousePosition;
        //pos = Camera.main.ScreenToWorldPoint(pos);
        //pos1 = Vector2.Lerp(transform.position, pos, speed);

        /*ismoving = Input.GetMouseButton(0);
        if (ismoving)
        {
            pos.x = cam.ScreenToWorldPoint(Input.mousePosition).x;
        }

        if (ismoving)
        {
            rb.MovePosition(Vector2.Lerp(rb.position, pos, pspeed * Time.fixedDeltaTime));
        }
        else
        {
            rb.velocity = Vector2.zero;
        }
    }

    void FixedUpdate()
    {
        //rb.MovePosition(pos1);
    }
}*/
