using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class startpause : MonoBehaviour
{
    public GameObject countdown;
    private void Awake()
    {
        countdown.SetActive(true);
    }
}
