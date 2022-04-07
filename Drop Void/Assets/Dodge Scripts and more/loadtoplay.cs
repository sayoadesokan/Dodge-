using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class loadtoplay : MonoBehaviour
{
    public GameObject playbutton1;
    public GameObject playbuttonreal;
    public GameObject controlpopup;


    private void Awake()
    {
        controlpopup.SetActive(true);

        if (PlayerPrefs.GetInt("playbutton") == 13)
        {
            playbuttonreal.SetActive(true);
            playbutton1.SetActive(false);
            controlpopup.SetActive(false);
        }
    }
    public void taptoplay()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
    }

    public void taptoplayreal()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 2);
    }
}
