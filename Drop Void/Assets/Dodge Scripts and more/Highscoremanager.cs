using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Highscoremanager : MonoBehaviour
{
    public Text score;
    public Text highscore;
    void Start()
    {
        highscore.text = PlayerPrefs.GetInt("Highscore", 0).ToString();;
    }

    void Update()
    {
        score.text = MainScoreController.mainscore.ToString();

        if (MainScoreController.mainscore > PlayerPrefs.GetInt("Highscore", 0))
        {
            PlayerPrefs.SetInt("Highscore", MainScoreController.mainscore);
            highscore.text = MainScoreController.mainscore.ToString();
            FindObjectOfType<AudioManager>().Play("Highscore");
        }
    }
}
