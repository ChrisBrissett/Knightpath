using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ButtonUI : MonoBehaviour


{

    [SerializeField] private string level1Button = "Level 1";
    [SerializeField] private string level2Button = "Level 2";
    [SerializeField] private string level3Button = "Level 3";
    [SerializeField] private string level4Button = "Level 4";
    [SerializeField] private string level5Button = "Level 5";
    [SerializeField] private string level6Button = "Level 6";
    [SerializeField] private string level7Button = "Level 7";
    [SerializeField] private string level8Button = "Level 8";
    [SerializeField] private string level9Button = "Level 9";
    [SerializeField] private string level10Button = "Level 10";
    [SerializeField] private string homeButton = "_Menu";
    [SerializeField] private string coinShop = "CoinShop";

    public void level1()
    {
        SceneManager.LoadScene(level1Button);
    }

    public void level2()
    {
        SceneManager.LoadScene(level2Button);
    }

    public void level3()
    {
        SceneManager.LoadScene(level3Button);
    }

    public void level4()
    {
        SceneManager.LoadScene(level4Button);
    }

    public void level5()
    {
        SceneManager.LoadScene(level5Button);
    }

    public void level6()
    {
        SceneManager.LoadScene(level6Button);
    }

    public void level7()
    {
        SceneManager.LoadScene(level7Button);
    }

    public void level8()
    {
        SceneManager.LoadScene(level8Button);
    }

    public void level9()
    {
        SceneManager.LoadScene(level9Button);
    }

    public void level10()
    {
        SceneManager.LoadScene(level10Button);
    }

    public void mainMenu()
    {
        SceneManager.LoadScene(homeButton);
    }

    public void Coin()
    {
        SceneManager.LoadScene(coinShop);
    }

}
