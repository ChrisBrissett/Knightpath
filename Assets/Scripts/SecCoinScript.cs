using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SecCoinScript : MonoBehaviour
{
    Text text;
   public static int coins;
    // Start is called before the first frame update
    void Start()
    {
        coins = PlayerPrefs.GetInt("PlayerCurrentCoins");
        text = GetComponent<Text>();
        
    }

    // Update is called once per frame
    void Update()
    {
        PlayerPrefs.GetInt("PlayerCurrentCoins", coins);
        text.text = coins.ToString();

        
    }
}
