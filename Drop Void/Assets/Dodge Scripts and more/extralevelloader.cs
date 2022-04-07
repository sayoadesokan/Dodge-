using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class extralevelloader : MonoBehaviour
{
    public Slidercontroller slidecontrol;

    private void OnCollisionEnter(Collision collision)
    {
        if(collision.collider.tag == "Player")
        {
            slidecontrol.morelevels();
            Destroy(this.gameObject);
        }
    }
}
