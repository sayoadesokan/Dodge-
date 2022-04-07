using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class getheartno : MonoBehaviour
{
    public Text hearttextmainmenu;
    void Update()
    {
        hearttextmainmenu.text = GameManager.hearttext.ToString();
        PlayerPrefs.SetInt("hearttext", GameManager.hearttext);
        PlayerPrefs.Save();
    }
}
