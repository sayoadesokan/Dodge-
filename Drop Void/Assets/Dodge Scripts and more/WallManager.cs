using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WallManager : MonoBehaviour
{
    public GameObject[] wallprefabs;
    public float zspawn;
    public float walllength;
    public int numberofwalls;
    private List<GameObject> activewalls = new List<GameObject>();
    public Transform playertransform;

    void Start()
    {
        for(int i = 0; i < numberofwalls; i++)
        {
            if(i <= 5)
            {
                spawnwall(0);
                spawnwall(0);
                spawnwall(1);
                //spawnwall(1);
                //spawnwall(2);
            }
            else
            {
                spawnwall(Random.Range(0, wallprefabs.Length));
            }

            if(i >= 30)
            {
                walllength = 16;
            }

            if (i >= 40)
            {
                walllength = 18;
            }

            if (i >= 50)
            {
                walllength = 20;
            }

            if (i >= 60)
            {
                walllength = 22;
            }

            if (i >= 70)
            {
                walllength = 24;
            }
        }
    }

    void Update()
    {
        if(-playertransform.position.y - 3 > zspawn - (numberofwalls * walllength))
        {
            spawnwall(Random.Range(0, wallprefabs.Length));
            DeleteWall();
        }
    }

    public void spawnwall(int wallindex)
    {
        GameObject go = Instantiate(wallprefabs[wallindex], -transform.up * zspawn, transform.rotation);
        activewalls.Add(go);
        zspawn += walllength;
    }

    public void DeleteWall()
    {
        Destroy(activewalls[0]);
        activewalls.RemoveAt(0);
    }
}
