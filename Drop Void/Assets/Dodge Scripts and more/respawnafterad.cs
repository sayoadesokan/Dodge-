using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class respawnafterad : MonoBehaviour
{
    public GameObject player;
    public GameObject gameoverui;
    public static int number1;

    void Start()
    {
        //AdmobAds.instance.loadRewardVideo2();
    }
    void Update()
    {
        //AdmobAds.instance.showVideoAd2();
        if(number1 == 1)
        {
            player.SetActive(true);
            gameoverui.SetActive(false);
            StartCoroutine(playerclonetrigger());
            number1 = 2;
        }
    }

    IEnumerator playerclonetrigger()
    {
        Playercollision col = player.GetComponent<Playercollision>();
        col.isplayer.isTrigger = true;

        yield return new WaitForSeconds(3f);
        col.isplayer.isTrigger = false;
        Debug.Log("time for respawn over");
    }
}
