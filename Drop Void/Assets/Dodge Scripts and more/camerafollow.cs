using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class camerafollow : MonoBehaviour
{
    public Transform player;
    public Vector3 offset;

    private void Update()
    {
        transform.position = player.position + offset;
    }

    public void offsetstuff()
    {
        offset.y = 0;
    }

    public void offsetstuff2()
    {
        offset.y = 6;
    }
}
