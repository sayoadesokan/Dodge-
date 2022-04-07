using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Monetization;
public class loadadforgemandheart : MonoBehaviour
{
    public static loadadforgemandheart instance;

    private string storeid = "3943005";
    private string rewardvid = "rewardedVideo";
    private string rewardvid2 = "Rvideo";

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
        Monetization.IsReady(rewardvid);
        Monetization.IsReady(rewardvid2);
    }

    public void ShowRewardorInstantiate()
    {
        if (Monetization.IsReady(rewardvid))
        {
            ShowAdPlacementContent ad = null;
            ad = Monetization.GetPlacementContent(rewardvid) as ShowAdPlacementContent;

            if (ad != null)
            {
                ad.Show();
                StartCoroutine(time());
            }
        }
    }

    public void ShowRewardorInstantiate2()
    {
        if (Monetization.IsReady(rewardvid2))
        {
            ShowAdPlacementContent ad = null;
            ad = Monetization.GetPlacementContent(rewardvid2) as ShowAdPlacementContent;

            if (ad != null)
            {
                ad.Show();
                StartCoroutine(timereward());
            }
        }
    }

    IEnumerator time()
    {
        yield return new WaitForSeconds(2f);

        Debug.Log("3 hearts");
        GameManager.hearttext += 3;
    }

    IEnumerator timereward()
    {
        yield return new WaitForSeconds(2f);

        Debug.Log("5 gems");
        Playercollision.gemint += 5;
    }
}
