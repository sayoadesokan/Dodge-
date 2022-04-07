using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class hearttogem : MonoBehaviour
{
    public void buygem()
    {
        if(Playercollision.gemint >= 50)
        {
            GameManager.hearttext += 3;
            Playercollision.gemint -= 50;
        }
    }
}
