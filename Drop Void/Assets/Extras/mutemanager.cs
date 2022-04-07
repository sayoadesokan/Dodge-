using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Audio;

public class mutemanager : MonoBehaviour
{
    private bool isMuted;
    void Start()
    {
        isMuted = PlayerPrefs.GetInt("MUTED123") == 1;
        AudioListener.pause = isMuted;
    }

    public void mutepressed()
    {
        isMuted = !isMuted;
        AudioListener.pause = isMuted;
        PlayerPrefs.SetInt("MUTED123", isMuted ? 1 : 0);
    }
}
