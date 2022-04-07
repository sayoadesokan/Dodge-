using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
 
public class sensitivityslider : MonoBehaviour
{
    public Slider slider;
    public Slider slider2;

    void Start()
    {
        slider.value = PlayerPrefs.GetFloat("sliderflow1", Playerdropmove.sforce);
        slider2.value = PlayerPrefs.GetFloat("sliderflow", Playerdropmove.sforce2);
    }

    public void adjustspeed(float sliderforce)
    {
        Playerdropmove.sforce = sliderforce;
        PlayerPrefs.SetFloat("sliderflow1", Playerdropmove.sforce);
        PlayerPrefs.Save();
    }

    public void adjustspeedjoy(float sliderforce2)
    {
        Playerdropmove.sforce2 = sliderforce2;
        PlayerPrefs.SetFloat("sliderflow", Playerdropmove.sforce2);
        PlayerPrefs.Save();

    }
}
