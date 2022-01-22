using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class KillPlayer : MonoBehaviour
{
    [SerializeField] Transform spawnPoint;
    public int health;

    

    void OnTriggerEnter2D(Collider2D other)
    {

        if (other.gameObject.CompareTag("Player"))
        {
            other.transform.position = spawnPoint.position;
            SoundManagerScript.PlaySound("playerSplat");
            GameControlScript.health -= 1;
            Debug.Log("Death Occured");
        }
        
    }




}
