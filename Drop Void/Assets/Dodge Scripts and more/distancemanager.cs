using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class distancemanager : MonoBehaviour
{
    [SerializeField]
    private Transform checkpoint;

    [SerializeField]
    private Transform playerpoint;

    [SerializeField]
    private Text distancetext;

    private float distance;

    private void Update()
    {
        distance = (checkpoint.transform.position - playerpoint.transform.position).magnitude;

        distancetext.text = distance.ToString("F0") + "m";
    }
}
