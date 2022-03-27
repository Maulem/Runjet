using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Rigidbody2D))]
public class CharacterController2D : MonoBehaviour {
    public int coins = 0;
    public float speed = 60.0f;
    public GameObject Fire;
    private GameObject jetfire;
    private bool onGround = false;
    private bool flying = false;
    private bool gameOn = true;
    private float jump = 0.0f;
    private float vAxis = 0;
    private GameObject raycastTarget;
    private Rigidbody2D rb;
    private Vector3 movingDirection;
    private Vector3 jetfireLeftCoords = new Vector3(-0.56f, -0.4f);
    private Vector3 jetfireRightCoords = new Vector3(0.14f, -0.4f);
    private Animator animator;



    private void FixedUpdate() {
        LayerMask mascara = LayerMask.GetMask("Collectable");
        RaycastHit2D hit = Physics2D.Raycast(transform.position, transform.up, 1.4f, mascara);
        //Se houve colisão
            if (hit.collider != null) {
               print("Hit!");
               raycastTarget = hit.collider.gameObject;
            }
            else { //Quando o raycast para de atingir o objeto limpo a referência.
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
    }
    
    private void OnTriggerExit2D(Collider2D col) {
        if (col.gameObject.tag == "Ground") {
            onGround = false;
        }
    }

    void Start() {
        rb = GetComponent<Rigidbody2D>();
        animator = GetComponent<Animator>();
        raycastTarget = null;
        setFire();
    }

    void Update() {
        HandleMovement();
        HandleAnimation();
        HandleInteractions();
    }

    private void HandleMovement() {
        float hAxis = Input.GetAxis("Horizontal");
        flying = false;
        vAxis = 0;

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
        if (Input.GetKey(KeyCode.Space)) {
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
        // Refresh the player movement
        movingDirection = new Vector3(hAxis, vAxis);
        rb.MovePosition(transform.position + movingDirection * speed * Time.deltaTime);
    }

    private void HandleInteractions() {
        if (raycastTarget) {
            // Fuel
            if (Input.GetAxis("Interaction") != 0) {
                GameObject temp = raycastTarget;
                raycastTarget = null;
                Destroy(temp);
            }

            // Coins
            if (gameOn) {
                coins += 1;
                GameObject temp = raycastTarget;
                raycastTarget = null;
                Destroy(temp);
            }
        }
    }

    private void HandleAnimation() {
        if (onGround && Input.GetAxis("Horizontal") != 0) {
            animator.SetBool("isMoving", true);
        }
        else {
            animator.SetBool("isMoving", false);
        }

        if (!onGround && flying) {
            animator.SetBool("isFlying", true);
            jetfire.GetComponent<Renderer>().enabled = true;
        }
        else if (!onGround && !flying) {
            animator.SetBool("isFlying", false);
            animator.SetBool("isFalling", true);
            jetfire.GetComponent<Renderer>().enabled = false;
        }
        else {
            animator.SetBool("isFlying", false);
            animator.SetBool("isFalling", false);
            jetfire.GetComponent<Renderer>().enabled = false;
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
