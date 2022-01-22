using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{

    public int health;
    public int coins;
    public int gems;

    public void Start()
    {
        health = GameControlScript.health;
        coins = SecCoinScript.coins;
    }

    public void Update()
    {
        health = GameControlScript.health;
        coins = SecCoinScript.coins;
    }


    public void SavePlayer()
    {
        
        SaveManager.SavePlayer(this);
        Debug.Log("Save Succesful");
    }

    public void LoadPlayer()
    {
        PlayerData data = SaveManager.LoadPlayer();
        SecCoinScript.coins = data.coins;
        GameControlScript.health = data.health;
        gems = data.gems;

      
    }

    

}
