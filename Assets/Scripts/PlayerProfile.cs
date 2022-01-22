using System.Collections;
using System.Collections.Generic;
using UnityEngine;


[System.Serializable]
public class PlayerData
{
    public int health;
    public int coins;
    public int gems;

    
    

  public PlayerData (Player player)
    {
      
        coins = player.coins;
        health = player.health;
        gems = player.gems;

       
        Debug.Log("Data Saved");

    }
}
