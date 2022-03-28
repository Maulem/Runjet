using System;
using UnityEngine;

public class Collectable : MonoBehaviour {
    private float speed = 2.0f;
    private float xAxis = 0, yAxis = 0;
    private int graus = -90;
    private bool up = true;
    private Vector3 movingDirection;
    private Rigidbody2D rb;

    private void OnTriggerEnter2D(Collider2D other) {
        // Debug.Log("OnTriggerEnter2D");
    }

    void Start() {
        rb = GetComponent<Rigidbody2D>();
    }

    void Update() {
        yAxis = (float)Math.Cos((graus * (Math.PI)) / 180 );
        if (graus >= 180) {
            up = false;
        } else if (graus <= 0) {
            up = true;
        }
        if (up) graus++;
        else graus --;
        movingDirection = new Vector3(xAxis, yAxis);
        rb.MovePosition(transform.position + movingDirection * speed * Time.deltaTime);
    }

}