using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class gemtutcoinshow : MonoBehaviour
{
    public Text gemtext;

    private void Start()
    {
        //skipbutton.SetActive(false);
        gemtext.text = Playercollision.gemint.ToString();
        Playercollision.gemint = PlayerPrefs.GetInt("gemmoves");
        PlayerPrefs.Save();
    }
    void Update()
    {
        StartCoroutine(skiptime());
        gemtext.text = Playercollision.gemint.ToString();
        PlayerPrefs.SetInt("gemmoves", Playercollision.gemint);
        PlayerPrefs.Save();
    }

    IEnumerator skiptime()
    {
        yield return new WaitForSeconds(6f);

        //skipbutton.SetActive(true);
    }
}
