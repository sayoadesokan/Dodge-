using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class pmenurotate : MonoBehaviour
{
    public float RotateSpeed;
    public float increaseby;

    void Update()
    {
        transform.Rotate(0, 0, RotateSpeed, Space.World);
    }

    private void FixedUpdate()
    {
        RotateSpeed += increaseby;
    }
}
