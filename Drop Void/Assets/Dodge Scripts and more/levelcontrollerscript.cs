using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class levelcontrollerscript : MonoBehaviour
{
    public Text levelindicator;

    private void Awake()
    {
        if (PlayerPrefs.GetInt("Highscore", 0) >= 50)
        {
            levelindicator.text = "Amateur";
        }

        if (PlayerPrefs.GetInt("Highscore", 0) >= 100)
        {
            levelindicator.text = "Novice";
        }

        if (PlayerPrefs.GetInt("Highscore", 0) >= 150)
        {
            levelindicator.text = "Professional";
        }

        if (PlayerPrefs.GetInt("Highscore", 0) >= 200)
        {
            levelindicator.text = "Master";
        }

        if (PlayerPrefs.GetInt("Highscore", 0) >= 250)
        {
            levelindicator.text = "Dodge-King";
        }

        if (PlayerPrefs.GetInt("Highscore", 0) >=300)
        {
            levelindicator.text = "Legend";
        }
    }
}
