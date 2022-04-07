using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MainScoreController : MonoBehaviour
{
    public Text maintextscore;
    public static int mainscore;

    void Update()
    {
        maintextscore.text = mainscore.ToString();
    }
}
