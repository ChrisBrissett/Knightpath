using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PauseMenu : MonoBehaviour
{
    
    public GameObject menu;
    void Start()
    {
        menu.gameObject.SetActive(false);
    }


      public void RestartButton()
    {
        Time.timeScale = 1;
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);

    }

    public void ResumeButton()
    {
        Time.timeScale = 1;
        menu.gameObject.SetActive(false);
        
    }

    public void HomeButton()
    {
        SceneManager.LoadScene("_Menu");
    }
    
    public void QuitButton()
    {
        Debug.Log("Quit");
        Application.Quit();
    }

}
