using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class tutcontroller2 : MonoBehaviour
{
    public GameObject tut1;
    public GameObject tut2;
    private void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Player")
        {
            tut1.SetActive(false);
            tut2.SetActive(true);
        }
    }
}
