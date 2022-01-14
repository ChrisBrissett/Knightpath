using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MainMenu : MonoBehaviour
{
    // Start is called before the first frame update
    [SerializeField] private string newGameButton = "newGame";
    [SerializeField] private string resumeButton = "_MenuLevelSelect";
    public int playerLives;
    public int currentCoins;
    


    public void newGame()
    {
        PlayerPrefs.SetInt("PlayerCurrentCoins", currentCoins);
        PlayerPrefs.SetInt("PlayerCurrentLives", playerLives);
        SceneManager.LoadScene(newGameButton);
      
    }
    
    public void resumeGame()
    {
        PlayerPrefs.GetInt("PlayerCurrentCoins", currentCoins);
        PlayerPrefs.GetInt("PlayerCurrentLives", playerLives);
        SceneManager.LoadScene(resumeButton);
    }

    public void quit()
    {
        Debug.Log("Quit");
        Application.Quit();
    }

}
