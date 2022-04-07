using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Loadrandomscenes : MonoBehaviour
{
    public void Loadrandomnextscene()
    {
        int index = Random.RandomRange(5, 8);
        SceneManager.LoadScene(index);
        Debug.Log("Scene Loaded");
    }
}
