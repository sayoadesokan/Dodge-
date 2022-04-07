using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Powerup : MonoBehaviour
{
    public float multiplier = 1.4f;
    public float multiplier2 = 4f;
    public GameObject pickupeffect;
    public float duration = 10;
    public float duration2 = 5;

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            StartCoroutine((pickup(other)));
        }
    }

    IEnumerator pickup(Collider player)
    {
        GameManager.powerupno += 2;
        if(GameManager.powerupno <= 2)
        {
            FindObjectOfType<AudioManager>().Play("PowerUp");
            //Instantiate(pickupeffect, transform.position, Quaternion.identity);
            Playercollision col = player.GetComponent<Playercollision>();
            col.isplayer.isTrigger = true;
            player.transform.localScale /= multiplier;
            Playerdropmove stats = player.GetComponent<Playerdropmove>();
            //stats.forwardforce = multiplier2;
            stats.flames.SetActive(true);

            GetComponent<MeshRenderer>().enabled = false;
            GetComponent<Collider>().enabled = false;

            yield return new WaitForSeconds(duration);

            player.transform.localScale *= multiplier;
            col.isplayer.isTrigger = false;
            //stats.forwardforce = 3;
            GameManager.powerupno = 0;
            stats.flames.SetActive(false);
            Destroy(gameObject);
        }
        if(GameManager.powerupno > 2)
        {
            FindObjectOfType<AudioManager>().Play("PowerUp");
            //Instantiate(pickupeffect, transform.position, Quaternion.identity);
            Playercollision col = player.GetComponent<Playercollision>();
            col.isplayer.isTrigger = true;
            duration += 5;
            GetComponent<MeshRenderer>().enabled = false;
            GetComponent<Collider>().enabled = false;


            yield return new WaitForSeconds(duration2);

            col.isplayer.isTrigger = false;
            GameManager.powerupno = 0;
            Destroy(gameObject);
        }
    }
}
