using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Rigidbody2D))]
public class CharacterController2D : MonoBehaviour {
    public static int coinsUI = 0;
    public static int coins = 0;
    public AudioClip coinClip;
    public AudioClip zapClip;
    public AudioClip boomClip;
    private AudioSource AudioSource;
    private float speed = 30.0f;
    public GameObject Fire;
    private GameObject jetfire;
    private bool onGround = false;
    private bool flying = false;
    private bool gameOn = false;
    public static int restart = 0;
    public static bool dead = false;
    private float jump = 0.0f;
    private float vAxis = 0;
    private float hAxis = 0;
    private float timeOff = 2;
    private float deathTime = 0;
    private GameObject raycastTarget;
    private Rigidbody2D rb;
    private Vector3 movingDirection;
    private Vector3 jetfireLeftCoords = new Vector3(-0.56f, -0.4f);
    private Vector3 jetfireRightCoords = new Vector3(0.14f, -0.4f);
    private Animator animator;
    GameManager gm;



    private void FixedUpdate() {
        LayerMask mascara = LayerMask.GetMask("Collectable");
        RaycastHit2D hitCollectables = Physics2D.Raycast(transform.position, transform.up, 1.4f, mascara);

        //Se houve colisão
        if (hitCollectables.collider != null) {
            raycastTarget = hitCollectables.collider.gameObject;
        }
        else {
            raycastTarget = null;
        }
    }

    private void OnDrawGizmos() {
        Gizmos.DrawRay(transform.position, transform.up * 1.4f);
    }

    private void OnTriggerEnter2D(Collider2D col) {
        if (col.gameObject.tag == "Ground") {
            onGround = true;
        }

        if (col.gameObject.tag == "Enemy") {
            AudioSource.PlayClipAtPoint(zapClip, transform.position + new Vector3(8, 0, -3), 0.5f);
            dead = true;
            deathTime = Time.time + timeOff;
        }

        if (col.gameObject.tag == "Enemy2") {
            AudioSource.PlayClipAtPoint(boomClip, transform.position + new Vector3(8, 0, -3), 0.5f);
            dead = true;
            deathTime = Time.time + timeOff;
        }

    }

    private void OnTriggerStay2D(Collider2D col) {
        if (col.gameObject.tag == "Ground") {
            onGround = true;
        }
    }
    
    private void OnTriggerExit2D(Collider2D col) {
        if (col.gameObject.tag == "Ground") {
            onGround = false;
        }
    }

    void Start() {
        rb = GetComponent<Rigidbody2D>();
        animator = GetComponent<Animator>();
        gm = GameManager.GetInstance();
        raycastTarget = null;
        setFire();
    }

    void Update() {
        if (gm.gameState != GameManager.GameState.GAME) return;
        HandleMovement();
        HandleAnimation();
        HandleInteractions();
    }

    private void HandleMovement() {

        if(Input.GetKeyDown(KeyCode.Escape) && gm.gameState == GameManager.GameState.GAME) {
            gm.ChangeState(GameManager.GameState.PAUSE);
        }

        if (!dead) hAxis = Input.GetAxis("Horizontal");
        flying = false;
        vAxis = 0;

        if (gameOn) {
            if (hAxis <= 0) {
                hAxis = 0.5f;
            }
        }

        // Set sprite animation depending the direction the player is looking
        if (hAxis > 0) {
            GetComponent<SpriteRenderer>().flipX = true;
            jetfire.transform.position = (transform.position + jetfireLeftCoords);
        }
        else if (hAxis < 0) {
            GetComponent<SpriteRenderer>().flipX = false;
            jetfire.transform.position = (transform.position + jetfireRightCoords);
        }

        // Flying mechanics
        if (Input.GetKey(KeyCode.Space) && !dead) {
            if (jump < 0.0f) jump = 0.01f;
            else if (jump < 2.0f) jump += 0.01f;
            vAxis = jump;
            flying = true;
        }

        // Gravity mechanics
        else if (!onGround) {
            if (jump > -2.0f) {
                jump -= 0.01f;
            }
            vAxis = jump;
        }

        // Stopping the body when someone dies
        if (dead) {
            if (hAxis < -0.2f) {
                GetComponent<SpriteRenderer>().flipX = false;
                hAxis += 0.001f;
            }
            else if (hAxis > 0.2f) {
                GetComponent<SpriteRenderer>().flipX = false;
                hAxis -= 0.001f;
            }
            else {
                GetComponent<SpriteRenderer>().flipX = false;
                hAxis = 0;
            }
        }

        if (Time.time > deathTime && dead) {
            hAxis = 0;
            vAxis = 0;
            movingDirection = new Vector3(hAxis, vAxis);
            rb.MovePosition(transform.position + movingDirection * speed * Time.deltaTime);
            gm.ChangeState(GameManager.GameState.ENDGAME);
        }

        // Refresh the player movement
        movingDirection = new Vector3(hAxis, vAxis);
        rb.MovePosition(transform.position + movingDirection * speed * Time.deltaTime);
    }

    private void HandleInteractions() {
        if (raycastTarget) {
            // Fuel
            if (Input.GetAxis("Interaction") != 0 || !gameOn) {
                gameOn = true;
                GameObject temp = raycastTarget;
                raycastTarget = null;
                Destroy(temp);
            }

            // Coins
            else if (gameOn) {
                coins += 1;
                AudioSource.PlayClipAtPoint(coinClip, transform.position + new Vector3(8, 0, -3), 0.5f);
                GameObject temp = raycastTarget;
                raycastTarget = null;
                Destroy(temp);
            }
        }
        if (coins >= 0) coinsUI = coins;
    }

    private void HandleAnimation() {
        if (dead) {
            animator.SetBool("isMoving", false);
            animator.SetBool("isDead", true);
        }
        else if (onGround && hAxis != 0) {
            animator.SetBool("isMoving", true);
        }
        else {
            animator.SetBool("isMoving", false);
        }

        if (!onGround && flying && !dead) {
            animator.SetBool("isFlying", true);
            jetfire.GetComponent<Renderer>().enabled = true;
        }
        else if (!onGround && !flying && !dead) {
            animator.SetBool("isFlying", false);
            animator.SetBool("isFalling", true);
            jetfire.GetComponent<Renderer>().enabled = false;
        }
        else {
            animator.SetBool("isFlying", false);
            animator.SetBool("isFalling", false);
            jetfire.GetComponent<Renderer>().enabled = false;
        }

        switch (restart) {
            case 2:
                animator.SetBool("isDead", false);
                animator.SetBool("isRestart", true);
                restart--;
                break;
            case 1:
                animator.SetBool("isRestart", false);
                break;
        }
    }

    // Start the fire as a child object attached to the jetpack
    private void setFire() {
        jetfire = Instantiate(Fire, transform.position, transform.rotation) as GameObject;
        jetfire.transform.parent = transform;
        jetfire.transform.position = (transform.position + jetfireRightCoords);
        jetfire.transform.rotation = (Quaternion.Euler(0, 0, -90));
        jetfire.GetComponent<Renderer>().enabled = false;
    }
}
