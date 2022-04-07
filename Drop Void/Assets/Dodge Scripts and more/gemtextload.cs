using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class gemtextload : MonoBehaviour
{
    public Text gemtext;
    public Text hearttext;

    private void Start()
    {
        GameManager.hearttext = PlayerPrefs.GetInt("hearttext");
        PlayerPrefs.Save();
        gemtext.text = Playercollision.gemint.ToString();
        Playercollision.gemint = PlayerPrefs.GetInt("gemmoves");
        PlayerPrefs.Save();
    }
    void Update()
    {
        gemtext.text = Playercollision.gemint.ToString();
        PlayerPrefs.SetInt("gemmoves", Playercollision.gemint);
        PlayerPrefs.Save();
        hearttext.text = GameManager.hearttext.ToString();
        PlayerPrefs.SetInt("hearttext", GameManager.hearttext);
        PlayerPrefs.Save();


    }
}
