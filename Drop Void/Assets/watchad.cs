using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Monetization;

public class watchad : MonoBehaviour
{
    public static watchad instance;

    private string storeid = "3943005";
    private string rewardvid3 = "Erewardvideo";

    private void Awake()
    {
        if (instance != null)
        {
            //Destroy(gameObject);
        }
        else
        {
            instance = this;
            //DontDestroyOnLoad(gameObject);
        }
    }

    void Start()
    {
        Monetization.Initialize(storeid, true);
        Monetization.IsReady(rewardvid3);
    }

    public void ShowRewardorInstantiate3()
    {
        if (Monetization.IsReady(rewardvid3))
        {
            ShowAdPlacementContent ad = null;
            ad = Monetization.GetPlacementContent(rewardvid3) as ShowAdPlacementContent;

            if (ad != null)
            {
                ad.Show();
                StartCoroutine(timereward5());
            }
        }
    }

    IEnumerator timereward5()
    {
        yield return new WaitForSeconds(3f);

        Debug.Log("Continuing Game");
        respawnafterad.number1 = 1;
        GameManager.hearttext += 1;
    }
}
