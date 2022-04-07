using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Playbuttonaudio : MonoBehaviour
{
    public void playbuttonsong()
    {
        FindObjectOfType<AudioManager>().Play("Button");
    }
}
