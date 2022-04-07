using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BlinkAnim : MonoBehaviour
{
    public Animator playeranim;
    public Animator scoreanim;

    public void playerblink()
    {
        playeranim.SetTrigger("Blink");
    }

    public void scoreanimation()
    {
        scoreanim.SetTrigger("score");
    }
}
