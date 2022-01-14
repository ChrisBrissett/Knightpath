using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FallTrigger : MonoBehaviour
{
    void OnTriggerEnter2D(Collider2D other)
    {
        if (other.transform.CompareTag("Player"))
            SoundManagerScript.PlaySound("playerFalling");

    }
}
