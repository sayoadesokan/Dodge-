using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class controlmanager : MonoBehaviour
{
    public GameObject joystick;
    private void Start()
    {
        joystick.SetActive(false);

        if (PlayerPrefs.GetInt("istap") == 1001)
        {
            joystick.SetActive(true);
            Playerdropmove.sforce = 0;
            PlayerPrefs.Save();
            Debug.Log("Joystick on");
        }

        if (PlayerPrefs.GetInt("istap") == 1000)
        {
            joystick.SetActive(false);
            Playerdropmove.sforce = 80;
            PlayerPrefs.Save();
        }
    }
}
