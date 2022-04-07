using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class tutcontroller : MonoBehaviour
{
    public GameObject tut1;
    public GameObject tut2;
    void Start()
    {
        StartCoroutine(waitforfive());
    }

    private void OnTriggerEnter(Collider other)
    {
        if(other.tag == "Player")
        {
            tut1.SetActive(false);
            tut2.SetActive(true);
        }
    }

    IEnumerator waitforfive()
    {
        yield return new WaitForSeconds(4f);

        tut1.SetActive(true);
    }
}
