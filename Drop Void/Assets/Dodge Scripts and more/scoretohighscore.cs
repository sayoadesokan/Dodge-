using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class scoretohighscore : MonoBehaviour
{
    public Text highscore;
    // Start is called before the first frame update
    void Start()
    {
        highscore.text = PlayerPrefs.GetInt("Highscore", 0).ToString();
    }

    // Update is called once per frame
    void Update()
    {
        if (MainScoreController.mainscore > PlayerPrefs.GetInt("Highscore", 0))
        {
            PlayerPrefs.SetInt("Highscore", MainScoreController.mainscore);
            highscore.text = MainScoreController.mainscore.ToString();
        }
    }
}
