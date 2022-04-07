using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class imagecolorchanger : MonoBehaviour
{
    public Color red = Color.red;
    public Color blue = Color.blue;
    public Color green = Color.green;
    Image infinity;
    int numbercountdown;
    public Color[] colorcombo;

    void Start()
    {
        infinity = FindObjectOfType<Image>();
    }

    void Update()
    {
        numbercountdown++;

        if(numbercountdown == 100)
        {
            infinity.color = red;
        }
        else if (numbercountdown == 200)
        {
            infinity.color = blue;
        }
        else if (numbercountdown == 300)
        {
            infinity.color = green;
            numbercountdown -= 300;
        }
        return;
    }
}
