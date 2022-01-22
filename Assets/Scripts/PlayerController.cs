using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityStandardAssets.CrossPlatformInput;

public class PlayerController : MonoBehaviour
{

    public float speed;
    public float jumpForce;
    private float moveInput;

    private Rigidbody2D rb;

    private bool facingRight = true;

    private bool isGrounded;
    public Transform groundCheck;
    public float checkRadius;
    public LayerMask whatIsGround;

    private int extraJumps;
    public int extraJumpsValue;

    private Animator anim;

    
    void Start()
    {
        anim = GetComponent<Animator>();
        extraJumps = extraJumpsValue;
        rb = GetComponent<Rigidbody2D>();
      
    }

    void FixedUpdate()
    {

        isGrounded = Physics2D.OverlapCircle(groundCheck.position, checkRadius, whatIsGround);



        moveInput = CrossPlatformInputManager.GetAxis("Horizontal");
        rb.velocity = new Vector2(moveInput * speed, rb.velocity.y);

        if (facingRight == false && moveInput > 0)
        {
            Flip();
        } else if(facingRight == true && moveInput < 0) {
            Flip();
        }
    }

    void Update()
    {

        if (moveInput == 0)
        {
            anim.SetBool("isRunning", false);

        } else
        {
            anim.SetBool("isRunning", true);
        }

        if(isGrounded == true)
        {

            anim.SetBool("isJumping", false);
            extraJumps = extraJumpsValue;
        } else
        {
           
            anim.SetBool("isJumping", true);
        }
        if (CrossPlatformInputManager.GetButtonDown("Jump") && extraJumps > 0)
        {
            anim.SetTrigger("takeOff");
            rb.velocity = Vector2.up * jumpForce;
            extraJumps--;
        } else if (CrossPlatformInputManager.GetButtonDown("Jump") && extraJumps == 0 && isGrounded == true) {
            rb.velocity = Vector2.up * jumpForce;
          
            
        }
    }

    private void OnTriggerEnter2D(Collider2D other)
    {
        if (other.gameObject.CompareTag("Coin"))
        {
            SoundManagerScript.PlaySound("coinSound");
            Destroy(other.gameObject);
        }
        if (other.gameObject.CompareTag("Sapphire"))
        {
            SoundManagerScript.PlaySound("diamondSound");
            Destroy(other.gameObject);
        }
        if (other.gameObject.CompareTag("Life"))
        {
            Destroy(other.gameObject);
        }
    }

    void Flip()
    {
        facingRight = !facingRight;
        Vector3 Scaler = transform.localScale;
        Scaler.x *= -1;
        transform.localScale = Scaler;
    }

    void OnCollisionEnter2D(Collision2D other)
    {
        
        if (other.gameObject.CompareTag("MGround"))
        {
            this.transform.parent = other.transform;
        }
    }

    void OnCollisionExit2D(Collision2D other)
    {
       
        if (other.gameObject.CompareTag("MGround"))
        {
            this.transform.parent = null;
        }

    }

   

   

   
}
