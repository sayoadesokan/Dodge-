using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Purchasebutton : MonoBehaviour
{
    public enum Purchasetype {buyballid, buyheartid, buygemid};
    public Purchasetype purchasetype;

    public void clickpurchasebutton()
    {
        switch (purchasetype)
        {
            case Purchasetype.buyballid:
                IAPManager.instance.buyball();
                break;
            case Purchasetype.buygemid:
                IAPManager.instance.buygem();
                break;
            case Purchasetype.buyheartid:
                IAPManager.instance.buyheart();
                break;
        }
    }
}
