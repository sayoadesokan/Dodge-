using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ToMainMenu : MonoBehaviour
{
  public void MainMove()
    {
        SceneManager.LoadScene(0);
        MainScoreController.mainscore = 0;
        respawnafterad.number1 = 0;
        Time.timeScale = 1;
    }
}
