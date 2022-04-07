using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class clampplayer1 : MonoBehaviour
{
    void Update()
    {
        transform.position = new Vector3((transform.position.x), (transform.position.y), Mathf.Clamp(transform.position.z, -5, 7));
    }
}
