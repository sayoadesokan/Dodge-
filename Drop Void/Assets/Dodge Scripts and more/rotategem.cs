﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class rotategem : MonoBehaviour
{
    public int RotateSpeed;

    void Update()
    {
        transform.Rotate(0, RotateSpeed, 0, Space.World);
    }
}
