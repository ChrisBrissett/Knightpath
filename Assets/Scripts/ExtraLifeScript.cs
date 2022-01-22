using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ExtraLifeScript : MonoBehaviour
{
    [SerializeField] Transform spawnPoint;
    public int health;

    

   

    void OnTriggerEnter2D(Collider2D other)
    {

        if (other.gameObject.CompareTag("Player"))
        {

            GameControlScript.health += 1;
            Debug.Log("Extra Life");
        }

    }

   



}
