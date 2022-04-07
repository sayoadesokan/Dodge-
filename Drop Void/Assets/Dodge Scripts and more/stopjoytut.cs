using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class stopjoytut : MonoBehaviour
{
    public GameObject joytutu;
    void Start()
    {
        StartCoroutine(stopjoytutflow());
    }

    IEnumerator stopjoytutflow()
    {
        yield return new WaitForSeconds(3f);

        joytutu.SetActive(false);
    }
}
