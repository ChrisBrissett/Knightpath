using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PauseLive : MonoBehaviour
{
    public GameObject pauseMenu;

    void Start()
    {
        Time.timeScale = 1;
        pauseMenu.gameObject.SetActive(true);
    }
    
    void OnClick()
    {


        Time.timeScale = 0;
        pauseMenu.gameObject.SetActive(true);
        Debug.Log("Button Clicked");
    }
}
