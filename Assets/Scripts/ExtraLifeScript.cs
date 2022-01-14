using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ExtraLifeScript : MonoBehaviour
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
           
            ExtraLife();
            Debug.Log("Extra Life");
        }

    }

    private void ExtraLife()
    {
        health += 1;
        PlayerPrefs.SetInt("PlayerCurrentLives", health);
    }



}
