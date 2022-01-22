using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LevelClearedScript : MonoBehaviour
{ 
    public GameObject levelCleared;


    // Start is called before the first frame update
    void Start()
    {
        levelCleared.gameObject.SetActive(false);
    }

    void OnTriggerEnter2D(Collider2D other)
    {
        if (other.CompareTag("Player"))
        {
            Time.timeScale = 0;
            levelCleared.gameObject.SetActive(true);
            
        }
        
    }


}
