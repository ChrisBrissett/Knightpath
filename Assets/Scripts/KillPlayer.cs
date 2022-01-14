using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class KillPlayer : MonoBehaviour
{
    [SerializeField] Transform spawnPoint;
    public int health;

    void Start()
    {
        health = PlayerPrefs.GetInt("PlayerCurrentLives");
    }

    void OnTriggerEnter2D(Collider2D other)
    {

        if (other.gameObject.CompareTag("Player"))
        {
            other.transform.position = spawnPoint.position;
            SoundManagerScript.PlaySound("playerSplat");
            LifeLost();
            Debug.Log("Death Occured");
        }
        
    }

    private void LifeLost()
    {
        health -= 1;
        PlayerPrefs.SetInt("PlayerCurrentLives", health);
    }



}
