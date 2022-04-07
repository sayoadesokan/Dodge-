using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class tutorialmanager : MonoBehaviour
{
    public GameObject[] popups;
    private int popupindex;
    //public float waittime = 2;

    void Update()
    {
        for (int i = 0; i < popups.Length; i++)
        {
            if(i == popupindex)
            {
                popups[i].SetActive(true);
            }
            else
            {
                popups[i].SetActive(false);
            }
        }
        if(popupindex == 0)
        {
            if(Input.touchCount > 0 || Input.GetKeyDown("a"))
            {
                popupindex++;
            }

            else if(popupindex == 1)
            {
                if (Input.touchCount > 1 || Input.GetKeyDown("d"))
                {
                    popupindex++;
                }
            }
            else if (popupindex == 2)
            {
                if (Input.touchCount > 2 || Input.GetKeyDown("a"))
                {
                    popupindex++;
                }
            }
        }
    }
}
