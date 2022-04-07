﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class changecolorflow : MonoBehaviour
{
    public Color black = Color.black;

    public Color blue = Color.blue;

    Camera cm;

    void Start()
    {
        cm = GetComponent<Camera>();
    }

    void Update()
    {
        StartCoroutine(colorchange());
    }

    IEnumerator colorchange()
    {
        yield return new WaitForSeconds(4f);

        cm.backgroundColor = black;
    }

    /*public List<Color> colorList = new List<Color>();
    public float transitionTime = 1f;
    public bool randomColor = false;

    private int colorIndex = 0;
    private int nextColorIndex = 0;
    Camera camera1;

    //Init
    void Awake()
    {
        camera1.backgroundColor = colorList[colorIndex];

        //Sets next color index
        if (randomColor)
        {
            while (nextColorIndex == colorIndex)
            {
                nextColorIndex = Random.Range(0, colorList.Count);
            }
        }
        else
        {
            nextColorIndex += 1;
            if (nextColorIndex >= colorList.Count)
            {
                nextColorIndex = 0;
            }
        }

        //start transition if there are more than 1 colors in list
        if (colorList.Count > 1)
        {
            StartCoroutine(ColorTransition());
        }
        else
        {
            Debug.LogWarning("Not enough colors in list.", this);
        }
    }

    IEnumerator ColorTransition()
    {
        //Init color transition
        float delta = 0f;

        //color transition
        while (delta < 1f)
        {
            delta += Time.deltaTime / transitionTime;
            camera1.backgroundColor = Color.Lerp(colorList[colorIndex], colorList[nextColorIndex], delta);
            yield return new WaitForEndOfFrame();
        }
        camera1.backgroundColor = colorList[nextColorIndex];

        //Sets next color index
        colorIndex = nextColorIndex;
        if (randomColor)
        {
            while (nextColorIndex == colorIndex)
            {
                nextColorIndex = Random.Range(0, colorList.Count);
            }
        }
        else
        {
            nextColorIndex += 1;
            if (nextColorIndex >= colorList.Count)
            {
                nextColorIndex = 0;
            }
        }

        //starts a new color transition
        StartCoroutine(ColorTransition());
    }*/
}
