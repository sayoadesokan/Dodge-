using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class imagechanger : MonoBehaviour
{
    public Sprite black;
    public Sprite blue;
    private SpriteRenderer rend;
    private void Start()
    {
        rend = GetComponent<SpriteRenderer>();
    }
    void Update()
    {
        if (MainScoreController.mainscore >= 35)
        {
            rend.sprite = black;
        }
        if(MainScoreController.mainscore >= 50)
        {
            rend.sprite = blue;
        }
        if(MainScoreController.mainscore >= 75)
        {
            rend.sprite = black;
        }
        if (MainScoreController.mainscore >= 100)
        {
            rend.sprite = blue;
        }
        if (MainScoreController.mainscore >= 130)
        {
            rend.sprite = black;
        }
        if (MainScoreController.mainscore >= 170)
        {
            rend.sprite = blue;
        }
        if (MainScoreController.mainscore >= 201)
        {
            rend.sprite = black;
        }
        if (MainScoreController.mainscore >= 245)
        {
            rend.sprite = blue;
        }
        if (MainScoreController.mainscore >= 280)
        {
            rend.sprite = black;
        }
        if (MainScoreController.mainscore >= 300)
        {
            rend.sprite = blue;
        }
        if (MainScoreController.mainscore >= 350)
        {
            rend.sprite = black;
        }
        if (MainScoreController.mainscore >= 400)
        {
            rend.sprite = blue;
        }
        if (MainScoreController.mainscore >= 450)
        {
            rend.sprite = black;
        }
        if (MainScoreController.mainscore >= 500)
        {
            rend.sprite = blue;
        }
        if (MainScoreController.mainscore >= 600)
        {
            rend.sprite = black;
        }
        if (MainScoreController.mainscore >= 670)
        {
            rend.sprite = blue;
        }
    }
}
