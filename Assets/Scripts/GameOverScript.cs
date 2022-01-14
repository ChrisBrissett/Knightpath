using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameOverScript : MonoBehaviour
{

    
    
    // Start is called before the first frame update
    public void Restart()
    {
        ScoreTextScript.coinAmount = 0;
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);

    }

    public void Resume()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
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
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
    }
}
