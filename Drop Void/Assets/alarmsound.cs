using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class alarmsound : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        FindObjectOfType<AudioManager>().Play("Alarm");
    }

    // Update is called once per frame
    void Update()
    {
        //FindObjectOfType<AudioManager>().Play("Alarm");
    }
}
