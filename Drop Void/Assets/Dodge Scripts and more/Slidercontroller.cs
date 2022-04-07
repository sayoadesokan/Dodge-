using System.Collections;
using System.Collections.Generic;
using UnityEngine;using UnityEngine.UI;

public class Slidercontroller : MonoBehaviour
{
    public Transform player;
    public GameObject endline;
    public Slider slide;
    public GameObject nextlevel;
    public float zspawn;

    float maxdistance;
    // Start is called before the first frame update
    void Start()
    {
        Instantiate(nextlevel, transform.position, Quaternion.identity);
        maxdistance = getdistance();
       // endline = GameObject.FindGameObjectWithTag("move");
    }

    // Update is called once per frame
    void Update()
    {
        endline = GameObject.FindGameObjectWithTag("move");

        if (player.position.y <= maxdistance && player.position.y >= endline.transform.position.y)
        {
            float distance = 1 - (getdistance() / maxdistance);
            setprogress(distance);
        }
    }

    float getdistance()
    {
        return Vector3.Distance(player.position, endline.transform.position);
    }

    void setprogress(float p)
    {
        slide.value = p;
    }

    public void morelevels()
    {
        Instantiate(nextlevel, -transform.up * zspawn, transform.rotation);
    }
}