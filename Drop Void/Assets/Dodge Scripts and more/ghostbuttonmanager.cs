using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ghostbuttonmanager : MonoBehaviour
{
    public Button ghostbutton;
    public camerafollow camerafollow;

    public void buttonghostpress()
    {
        camerafollow.offsetstuff();
    }

    public void buttonghostcancelpress()
    {
        camerafollow.offsetstuff2();
    }
}
