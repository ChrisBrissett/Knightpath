using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CoinScript : MonoBehaviour
{

    public int coins;

    
    
    void OnTriggerEnter2D(Collider2D col)
    {

        

            Debug.Log("Coin Collected!");
            SecCoinScript.coins += 1;
        
      


    }

   
}
