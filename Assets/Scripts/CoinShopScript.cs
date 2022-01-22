using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class CoinShopScript : MonoBehaviour
{
    [SerializeField] private string homeButton = "_MenuLevelSelect";

    public void home()
    {
        SceneManager.LoadScene(homeButton);
    }
}
