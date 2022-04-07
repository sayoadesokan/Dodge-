using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class playerskincontroller : MonoBehaviour
{
    public Material[] material;
    private Renderer rend;
    //public Image joystickhandle;
    void Start()
    {
        rend = GetComponent<Renderer>();
        rend.enabled = true;
        rend.sharedMaterial = material[0];
        //joystickhandle = this.GetComponent<Image>();
    }

    void Update()
    {
        if (PlayerPrefs.GetInt("one") == 30)
        {
            rend.sharedMaterial = material[1];
            //joystickhandle.color = Color.blue;
        }

        if (PlayerPrefs.GetInt("one") == 31)
        {
            rend.sharedMaterial = material[2];
            //joystickhandle.color = Color.yellow;
        }

        if (PlayerPrefs.GetInt("one") == 32)
        {
            rend.sharedMaterial = material[3];
            //joystickhandle.color = Color.green;
        }

        if (PlayerPrefs.GetInt("one") == 33)
        {
            rend.sharedMaterial = material[4];
            //joystickhandle.color = Color.red;
        }

        if (PlayerPrefs.GetInt("one") == 34)
        {
            rend.sharedMaterial = material[5];
            //joystickhandle.color = Color.yellow;
        }

        if (PlayerPrefs.GetInt("one") == 35)
        {
            rend.sharedMaterial = material[6];
            //joystickhandle.color = Color.white;
            PlayerPrefs.Save();
        }

        if (PlayerPrefs.GetInt("one") == 36)
        {
            rend.sharedMaterial = material[7];
            //joystickhandle.color = Color.magenta;
        }

        if (PlayerPrefs.GetInt("one") == 37)
        {
            rend.sharedMaterial = material[8];
            //joystickhandle.color = Color.cyan;
        }

        if (PlayerPrefs.GetInt("one") == 38)
        {
            rend.sharedMaterial = material[9];
            //joystickhandle.color = Color.red;
        }

        if (PlayerPrefs.GetInt("one") == 39)
        {
            rend.sharedMaterial = material[10];
            //joystickhandle.color = Color.black;
        }

        if (PlayerPrefs.GetInt("one") == 40)
        {
            rend.sharedMaterial = material[11];
            //joystickhandle.color = Color.white;
        }

        if (PlayerPrefs.GetInt("one") == 41)
        {
            rend.sharedMaterial = material[12];
            //joystickhandle.color = Color.white;
        }

        if (PlayerPrefs.GetInt("one") == 42)
        {
            rend.sharedMaterial = material[13];
            //joystickhandle.color = Color.white;
        }
    }
}
