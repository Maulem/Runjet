using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DestroyDistant : MonoBehaviour {

    private GameObject player;
    void Start() {
        player = GameObject.Find("MainCharacter");
    }

    void Update() {
        if (player.transform.position.x - transform.position.x > 30) {
            Destroy(this.gameObject);
        }
    }
}
