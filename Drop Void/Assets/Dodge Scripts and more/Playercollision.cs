using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Playercollision : MonoBehaviour
{
    public Text gemtext;
    public GameObject player;
    public GameObject playereffect;
    public GameManager gamemanager;
    public static int gemint;
    public Collider isplayer;
    public GameObject gameoverui;
    public Image infinity;
    public GameObject highscoreui;

    private BlinkAnim blink;
    void Start()
    {
        gemtext.text = gemint.ToString();
        gemint = PlayerPrefs.GetInt("gemmoves");
        PlayerPrefs.Save();
        blink = GameObject.FindGameObjectWithTag("blinkanim").GetComponent<BlinkAnim>();
        isplayer = GetComponent<Collider>();
    }

    void Update()
    {
        gemtext.text = gemint.ToString();
        PlayerPrefs.SetInt("gemmoves", gemint);
        PlayerPrefs.Save();
    }
    void OnCollisionEnter(Collision collision)
    {
        if (collision.collider.tag == "Gem")
        {
            gemint += 1;
            FindObjectOfType<AudioManager>().Play("Gem");
        }
        if (collision.collider.tag == "Obstacle" && GameManager.hearttext >= 1)
        {
            GameManager.hearttext -= 1;
            blink.playerblink();
            isplayer.isTrigger = true;
            StartCoroutine(sometime());
        }
        if (collision.collider.tag == "Obstacle" && GameManager.hearttext == 0)
        {
            gameoverui.SetActive(true);
            player.SetActive(false);
            Instantiate(playereffect, transform.position, Quaternion.identity);
            FindObjectOfType<AudioManager>().Play("GameOver");
        }
        if (collision.collider.tag == "sideend")
        {
            player.SetActive(false);
            Instantiate(playereffect, transform.position, Quaternion.identity);
            highscoreui.SetActive(true);
        }
        if (collision.collider.tag == "Obstacle" && respawnafterad.number1 >= 2)
        {
            player.SetActive(false);
            gameoverui.SetActive(false);
            Instantiate(playereffect, transform.position, Quaternion.identity);
            highscoreui.SetActive(true);
        }
    }

    IEnumerator sometime()
    {
        yield return new WaitForSeconds(3f);

        isplayer.isTrigger = false;
    }

    private void OnTriggerEnter(Collider other)
    {
        if(other.CompareTag("Obstacle") && GameManager.powerupno >= 2)
        {
            MainScoreController.mainscore += 1;
        }
    }
}
