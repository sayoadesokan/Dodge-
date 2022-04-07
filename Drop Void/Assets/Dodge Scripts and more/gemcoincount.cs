using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class gemcoincount : MonoBehaviour
{
    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            Playercollision.gemint += 1;
            Destroy(gameObject);
        }
    }
}
