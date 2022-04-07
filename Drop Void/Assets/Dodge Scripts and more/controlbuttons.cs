using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class controlbuttons : MonoBehaviour
{
    public void tapone()
    {
        PlayerPrefs.SetInt("istap", 1000);
        //PlayerPrefs.Save();
    }

    public void joyone()
    {
        PlayerPrefs.SetInt("istap", 1001);
        //PlayerPrefs.Save();
    }
}
