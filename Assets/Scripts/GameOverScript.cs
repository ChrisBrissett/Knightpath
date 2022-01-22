using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameOverScript : MonoBehaviour
{

    public GameObject goMenu;
    public static int health;
    public static int coins;
    
    // Start is called before the first frame update
    public void Restart()
    {
       
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);

    }

    public void Resume()
    {
        Time.timeScale = 1;
        GameControlScript.health += 1;
        goMenu.gameObject.SetActive(false);
    }

    public void Home()
    {
        SceneManager.LoadScene("_Menu");
    }
    
    public void Quit()
    {
        Debug.Log("Quit");
        Application.Quit();
    }

    public void NextLevel()
    {
        health = GameControlScript.health;
        coins = SecCoinScript.coins;
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
    }
}
