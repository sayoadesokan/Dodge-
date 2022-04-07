using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
    //public GameObject powerupobj;
    public Text heart;
    public static int hearttext;
    public static int powerupno;
    public Text poweruotext;
    public GameObject alarm; 

    private void Start()
    {
        hearttext = PlayerPrefs.GetInt("hearttext");
        PlayerPrefs.Save();
        if (hearttext <= 1)
        {
            hearttext = 1;
        }
        else if (hearttext >= 3)
        {
            hearttext += 0;
        }
    }
    
    /*public void powerupstuff()
    {
        powerupobj.SetActive(true);
    }*/
    /*public void endscene()
    {
        gameoverui.SetActive(true);
    }*/

    private void Update()
    {
        poweruotext.text = powerupno.ToString(); 
        heart.text = hearttext.ToString();
        PlayerPrefs.SetInt("hearttext", hearttext);
        PlayerPrefs.Save();
    }
}
