using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameControlScript : MonoBehaviour
{
    

    public GameObject head1, head2, head3, gameOver;
    public static int health;
    public static int coins;

    

    void Start ()
    {
        
        Time.timeScale = 1;
        gameOver.gameObject.SetActive(false);

    }

    void Update ()
    {
       

        if (health > 3)
            health = 3;

        switch (health)
        {
            case 3:
                head1.gameObject.SetActive(true);
                head2.gameObject.SetActive(true);
                head3.gameObject.SetActive(true);
                break;
            case 2:
                head1.gameObject.SetActive(true);
                head2.gameObject.SetActive(true);
                head3.gameObject.SetActive(false);
                break;
            case 1:
                head1.gameObject.SetActive(true);
                head2.gameObject.SetActive(false);
                head3.gameObject.SetActive(false);
                break;
            case 0:
                head1.gameObject.SetActive(false);
                head2.gameObject.SetActive(false);
                head3.gameObject.SetActive(false);
                gameOver.gameObject.SetActive(true);
                Time.timeScale = 0;
                break;

        }
    }

    
  

   
}
