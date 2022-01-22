using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MainMenu : MonoBehaviour
{
 
    public int health;

    public void newGame()
    {
        GameControlScript.health += 3;
        SecCoinScript.coins = 0;
        PlayerData player = SaveManager.Delete();
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);

    }
    
    public void resumeGame()
    {
        
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
    }

    public void quit()
    {
        Debug.Log("Quit");
        Application.Quit();
    }

}
