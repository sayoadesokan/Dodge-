using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class activateplusone : MonoBehaviour
{
    public GameObject[] textstuff;
    private int rand; 

    /*private void OnCollisionEnter(Collision collision)
    {
        if(collision.collider.tag == "Inv")
        {
            rand = Random.Range(0, textstuff.Length);
            textstuff[rand].SetActive(true);
        }
    }*/

    private void OnTriggerEnter(Collider other)
    {
        if(other.tag == "Inv")
        {
            rand = Random.Range(0, textstuff.Length);
            textstuff[rand].SetActive(true);
            StartCoroutine(disable());
        }
    }

    IEnumerator disable()
    {
        yield return new WaitForSeconds(1.2f);

        textstuff[0].SetActive(false);
        textstuff[1].SetActive(false);
        textstuff[2].SetActive(false);
        textstuff[3].SetActive(false);
    }
}
