using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class scoreforinv : MonoBehaviour
{
    public static int mainscore;
    private BlinkAnim score;

    private void Start()
    {
        score = GameObject.FindGameObjectWithTag("blinkanim").GetComponent<BlinkAnim>();
    }
    private void OnTriggerEnter(Collider other)
    {
        if(other.tag == "Player")
        {
            MainScoreController.mainscore += 1;
            score.scoreanimation();
            FindObjectOfType<AudioManager>().Play("Pothing");
        }
    }
}
