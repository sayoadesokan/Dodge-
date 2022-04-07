using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class uimanager : MonoBehaviour
{
    public Slider slider;
    public float distance;
    public Transform startingpoint;
    public int left, right; 

    void Start()
    {
        slider.value = 200;
    }
    void Update()
    {
        distance = (startingpoint.transform.position + transform.position).magnitude;

        distance = slider.value;

        if(distance >= 200)
        {
            distance = 0;
            left++;
            right++;
        }
    }
}
