using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Shopmanager : MonoBehaviour
{
    public Button[] sopbutton;
    public Button[] buybutton;
    public Button selectbuttonballs;


    private bool isbuy;
    private bool isbuy1;
    private bool isbuy2;
    private bool isbuy3;
    private bool isbuy4;
    private bool isbuy5;
    private bool isbuy6;
    private bool isbuy7;
    private bool isbuy8;
    private bool isbuy9;
    private bool isbuy10;
    private bool isbuy11;
    private bool isbuy12;

    public void unlockballselect()
    {
        if(PlayerPrefs.GetInt("unlockallballs") == 567)
        {
            selectbuttonballs.interactable = true;
            PlayerPrefs.SetInt("unlockallballsagain", 967);
            PlayerPrefs.Save();
        }
    }

    void Update()
    {
        if (PlayerPrefs.GetInt("unlockallballs") == 567)
        {
            selectbuttonballs.interactable = true;
            PlayerPrefs.SetInt("unlockallballsagain", 967);
            PlayerPrefs.Save();
        }


        /////////////////////////////
        isbuy = PlayerPrefs.GetInt("unlock") == 0;
        isbuy1 = PlayerPrefs.GetInt("unlock1") == 0;
        isbuy2 = PlayerPrefs.GetInt("unlock2") == 0;
        isbuy3 = PlayerPrefs.GetInt("unlock3") == 0;
        isbuy4 = PlayerPrefs.GetInt("unlock4") == 0;
        isbuy5 = PlayerPrefs.GetInt("unlock5") == 0;
        isbuy6 = PlayerPrefs.GetInt("unlock6") == 0;
        isbuy7 = PlayerPrefs.GetInt("unlock7") == 0;
        isbuy8 = PlayerPrefs.GetInt("unlock8") == 0;
        isbuy9 = PlayerPrefs.GetInt("unlock9") == 0;
        isbuy10 = PlayerPrefs.GetInt("unlock10") == 0;
        isbuy11 = PlayerPrefs.GetInt("unlock11") == 0;
        isbuy12 = PlayerPrefs.GetInt("unlock12") == 0;

        if (PlayerPrefs.GetInt("unlock") == 1 || PlayerPrefs.GetInt("unlockallballsagain") == 967)
        {
            sopbutton[0].interactable = true;
            buybutton[0].interactable = false;
        }

        if (PlayerPrefs.GetInt("unlock1") == 2 || PlayerPrefs.GetInt("unlockallballsagain") == 967)
        {
            sopbutton[1].interactable = true;
            buybutton[1].interactable = false;
        }

        if (PlayerPrefs.GetInt("unlock2") == 3 || PlayerPrefs.GetInt("unlockallballsagain") == 967)
        {
            sopbutton[2].interactable = true;
            buybutton[2].interactable = false;
        }

        if (PlayerPrefs.GetInt("unlock3") == 4 || PlayerPrefs.GetInt("unlockallballsagain") == 967)
        {
            sopbutton[3].interactable = true;
            buybutton[3].interactable = false;
        }

        if (PlayerPrefs.GetInt("unlock4") == 5 || PlayerPrefs.GetInt("unlockallballsagain") == 967)
        {
            sopbutton[4].interactable = true;
            buybutton[4].interactable = false;
        }

        if (PlayerPrefs.GetInt("unlock5") == 6 || PlayerPrefs.GetInt("unlockallballsagain") == 967)
        {
            sopbutton[5].interactable = true;
            buybutton[5].interactable = false;
        }

        if (PlayerPrefs.GetInt("unlock6") == 7 || PlayerPrefs.GetInt("unlockallballsagain") == 967)
        {
            sopbutton[6].interactable = true;
            buybutton[6].interactable = false;
        }

        if (PlayerPrefs.GetInt("unlock7") == 8 || PlayerPrefs.GetInt("unlockallballsagain") == 967)
        {
            sopbutton[7].interactable = true;
            buybutton[7].interactable = false;
        }

        if (PlayerPrefs.GetInt("unlock8") == 9 || PlayerPrefs.GetInt("unlockallballsagain") == 967)
        {
            sopbutton[8].interactable = true;
            buybutton[8].interactable = false;
        }

        if (PlayerPrefs.GetInt("unlock9") == 10 || PlayerPrefs.GetInt("unlockallballsagain") == 967)
        {
            sopbutton[9].interactable = true;
            buybutton[9].interactable = false;
        }

        if (PlayerPrefs.GetInt("unlock10") == 11 || PlayerPrefs.GetInt("unlockallballsagain") == 967)
        {
            sopbutton[10].interactable = true;
            buybutton[10].interactable = false;
        }

        if (PlayerPrefs.GetInt("unlock11") == 12 || PlayerPrefs.GetInt("unlockallballsagain") == 967)
        {
            sopbutton[11].interactable = true;
            buybutton[11].interactable = false;
        }

        if (PlayerPrefs.GetInt("unlock12") == 13 || PlayerPrefs.GetInt("unlockallballsagain") == 967)
        {
            sopbutton[12].interactable = true;
            buybutton[12].interactable = false;
        }

        if (PlayerPrefs.GetInt("unlockallballsagain") == 967)
        {
            sopbutton[0].interactable = true;
            sopbutton[1].interactable = true;
            sopbutton[2].interactable = true;
            sopbutton[3].interactable = true;
            sopbutton[4].interactable = true;
            sopbutton[5].interactable = true;
            sopbutton[6].interactable = true;
            sopbutton[7].interactable = true;
            sopbutton[8].interactable = true;
            sopbutton[9].interactable = true;
            sopbutton[10].interactable = true;
            sopbutton[11].interactable = true;
            sopbutton[12].interactable = true;
        }
    }

    public void ballone()
    {
        if(Playercollision.gemint >= 100)
        {
            Playercollision.gemint -= 100;
            sopbutton[0].interactable = true;
            buybutton[0].interactable = false;
            PlayerPrefs.SetInt("unlock", isbuy ? 1 : 0);
            //PlayerPrefs.Save();
        }
    }

    public void balltwo()
    {
        if (Playercollision.gemint >= 100)
        {
            Playercollision.gemint -= 100;
            sopbutton[1].interactable = true;
            buybutton[1].interactable = false;
            PlayerPrefs.SetInt("unlock1", isbuy1 ? 2 : 0);
            //PlayerPrefs.Save();
        }
    }

    public void ballthree()
    {
        if (Playercollision.gemint >= 100)
        {
            Playercollision.gemint -= 100;
            sopbutton[2].interactable = true;
            buybutton[2].interactable = false;
            PlayerPrefs.SetInt("unlock2", isbuy2 ? 3 : 0);
            //PlayerPrefs.Save();
        }
    }

    public void ballfour()
    {
        if (Playercollision.gemint >= 100)
        {
            Playercollision.gemint -= 100;
            sopbutton[3].interactable = true;
            buybutton[3].interactable = false;
            PlayerPrefs.SetInt("unlock3", isbuy3 ? 4 : 0);
            //PlayerPrefs.Save();
        }
    }

    public void ballfive()
    {
        if (Playercollision.gemint >= 100)
        {
            Playercollision.gemint -= 100;
            sopbutton[4].interactable = true;
            buybutton[4].interactable = false;
            PlayerPrefs.SetInt("unlock4", isbuy4 ? 5 : 0);
            //PlayerPrefs.Save();
        }
    }

    public void ballsix()
    {
        if (Playercollision.gemint >= 100)
        {
            Playercollision.gemint -= 100;
            sopbutton[5].interactable = true;
            buybutton[5].interactable = false;
            PlayerPrefs.SetInt("unlock5", isbuy5 ? 6 : 0);
            //PlayerPrefs.Save();
        }
    }
    public void ballseven()
    {
        if (Playercollision.gemint >= 100)
        {
            Playercollision.gemint -= 100;
            sopbutton[6].interactable = true;
            buybutton[6].interactable = false;
            PlayerPrefs.SetInt("unlock6", isbuy6 ? 7 : 0);
            //PlayerPrefs.Save();
        }
    }

    public void balleight()
    {
        if (Playercollision.gemint >= 100)
        {
            Playercollision.gemint -= 100;
            sopbutton[7].interactable = true;
            buybutton[7].interactable = false;
            PlayerPrefs.SetInt("unlock7", isbuy7 ? 8 : 0);
            //PlayerPrefs.Save();
        }
    }

    public void ballnine()
    {
        if (Playercollision.gemint >= 100)
        {
            Playercollision.gemint -= 100;
            sopbutton[8].interactable = true;
            buybutton[8].interactable = false;
            PlayerPrefs.SetInt("unlock8", isbuy8 ? 9 : 0);
            //PlayerPrefs.Save();
        }
    }

    public void ballten()
    {
        if (Playercollision.gemint >= 100)
        {
            Playercollision.gemint -= 100;
            sopbutton[9].interactable = true;
            buybutton[9].interactable = false;
            PlayerPrefs.SetInt("unlock9", isbuy9 ? 10 : 0);
            //PlayerPrefs.Save();
        }
    }

    public void balleleven()
    {
        if (Playercollision.gemint >= 100)
        {
            Playercollision.gemint -= 100;
            sopbutton[10].interactable = true;
            buybutton[10].interactable = false;
            PlayerPrefs.SetInt("unlock10", isbuy10 ? 11 : 0);
            //PlayerPrefs.Save();
        }
    }

    public void balltwelve()
    {
        if (Playercollision.gemint >= 100)
        {
            Playercollision.gemint -= 100;
            sopbutton[11].interactable = true;
            buybutton[11].interactable = false;
            PlayerPrefs.SetInt("unlock11", isbuy11 ? 12 : 0);
            //PlayerPrefs.Save();
        }
    }

    public void ballthirteen()
    {
        if (Playercollision.gemint >= 100)
        {
            Playercollision.gemint -= 100;
            sopbutton[12].interactable = true;
            buybutton[12].interactable = false;
            PlayerPrefs.SetInt("unlock12", isbuy12 ? 13 : 0);
            //PlayerPrefs.Save();
        }
    }

    public void selectone()
    {
        PlayerPrefs.SetInt("one", 30);
    }

    public void selecttwo()
    {
        PlayerPrefs.SetInt("one", 31);
    }

    public void selectthree()
    {
        PlayerPrefs.SetInt("one", 32);
    }

    public void selectfour()
    {
        PlayerPrefs.SetInt("one", 33);
    }

    public void selectfive()
    {
        PlayerPrefs.SetInt("one", 34);
    }

    public void selectsix()
    {
        PlayerPrefs.SetInt("one", 35);
    }

    public void selectseven()
    {
        PlayerPrefs.SetInt("one", 36);
    }

    public void selecteight()
    {
        PlayerPrefs.SetInt("one", 37);
    }

    public void selectnine()
    {
        PlayerPrefs.SetInt("one", 38);
    }

    public void selectten()
    {
        PlayerPrefs.SetInt("one", 39);
    }

    public void selecteleven()
    {
        PlayerPrefs.SetInt("one", 40);
    }

    public void selecttwelve()
    {
        PlayerPrefs.SetInt("one", 41);
    }

    public void selectthirteen()
    {
        PlayerPrefs.SetInt("one", 42);
    }

    public void resetall()
    {
        PlayerPrefs.DeleteAll();
    }

    public void selectallballs()
    {
        if (PlayerPrefs.GetInt("unlockallballsagain") == 967)
        {
            sopbutton[0].interactable = true;
            sopbutton[1].interactable = true;
            sopbutton[2].interactable = true;
            sopbutton[3].interactable = true;
            sopbutton[4].interactable = true;
            sopbutton[5].interactable = true;
            sopbutton[6].interactable = true;
            sopbutton[7].interactable = true;
            sopbutton[8].interactable = true;
            sopbutton[9].interactable = true;
            sopbutton[10].interactable = true;
            sopbutton[11].interactable = true;
            sopbutton[12].interactable = true;
        }
    }
}
