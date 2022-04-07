using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Touchtorestart : MonoBehaviour
{
    public void restartbutton()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
        MainScoreController.mainscore = 0;
        respawnafterad.number1 = 0;
        GameManager.hearttext = 0;
    }
}
