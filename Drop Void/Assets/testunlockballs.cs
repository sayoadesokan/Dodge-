using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class testunlockballs : MonoBehaviour
{
    public Shopmanager shopmanager;
    public void selectball1234()
    {
        PlayerPrefs.SetInt("unlockallballs", 567);
        PlayerPrefs.Save();
        shopmanager.unlockballselect();
    }
}
