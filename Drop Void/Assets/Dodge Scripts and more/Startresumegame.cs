using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Startresumegame : MonoBehaviour
{
    public GameObject[] countdown;
    public void startgame()
    {
        countdown[0].SetActive(false);
        countdown[1].SetActive(false);
    }
}
