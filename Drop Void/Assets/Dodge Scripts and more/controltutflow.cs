using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class controltutflow : MonoBehaviour
{
    public GameObject[] stops;
    public GameObject joytut;
    void Awake()
    {
        if (PlayerPrefs.GetInt("istap") == 1001)
        {
            joytut.SetActive(true);
            stops[0].SetActive(false);
            stops[1].SetActive(false);
            stops[2].SetActive(false);
            stops[3].SetActive(false);
            //stops[4].SetActive(false);
        }

        if (PlayerPrefs.GetInt("istap") == 1000)
        {
            joytut.SetActive(false);
            stops[0].SetActive(true);
            stops[1].SetActive(true);
            stops[2].SetActive(true);
            stops[3].SetActive(true);
            //stops[4].SetActive(true);
        }
    }
}
