using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Monetization;

public class admanagerunity : MonoBehaviour
{
    public static admanagerunity instance;

    private string storeid = "3943005";

    private string rewardvid = "rewardedVideo";
    private string rewardvid2 = "Rvideo";
    private string rewardvid3 = "Erewardvideo";


    private void Awake()
    {
        if (instance != null)
        {
            Destroy(gameObject);
        }
        else
        {
            instance = this;
            DontDestroyOnLoad(gameObject);
        }
    }
    // Start is called before the first frame update
    void Start()
    {
        Monetization.Initialize(storeid, true);
        
    }

    // Update is called once per frame

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

    IEnumerator timereward5()
    {
        yield return new WaitForSeconds(3f);

        Debug.Log("Continuing Game");
        respawnafterad.number1 = 1;
        GameManager.hearttext += 1;
    }
}
