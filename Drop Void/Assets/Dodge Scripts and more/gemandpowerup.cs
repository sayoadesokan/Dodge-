﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class gemandpowerup : MonoBehaviour
{
    public GameObject[] objectPool;
    private int currentIndex = 0;

    void Start()
    {
        int newIndex = Random.Range(0, objectPool.Length);
        // Deactivate old gameobject
        objectPool[currentIndex].SetActive(false);
        // Activate new gameobject
        currentIndex = newIndex;
        objectPool[currentIndex].SetActive(true);
    }
}
