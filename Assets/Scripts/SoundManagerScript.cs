using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundManagerScript : MonoBehaviour
{
    public static AudioClip coinSound, playerSplat, playerFalling, diamondSound;
    static AudioSource audioSrc;
    // Start is called before the first frame update
    void Start()
    {
        coinSound = Resources.Load<AudioClip>("coinSound");
        playerSplat = Resources.Load<AudioClip>("playerSplat");
        playerFalling = Resources.Load<AudioClip>("playerFalling");
        diamondSound = Resources.Load<AudioClip>("diamondSound");
        audioSrc = GetComponent<AudioSource>();
    }

    // Update is called once per frame
    void Update()
    {

    }

    public static void PlaySound(string clip)
    {
        switch (clip)
        {
            case "coinSound":
                audioSrc.PlayOneShot (coinSound);
                break;
            case "playerSplat":
                audioSrc.PlayOneShot(playerSplat);
                break;
            case "playerFalling":
                audioSrc.PlayOneShot (playerFalling);
                break;
            case "diamondSound":
                audioSrc.PlayOneShot (diamondSound);
                break;
        }
    }

}
