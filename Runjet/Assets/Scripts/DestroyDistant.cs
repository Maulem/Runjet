using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DestroyDistant : MonoBehaviour {

    private GameObject player;
    private int destroyDistance;
    void Start() {
        player = GameObject.Find("MainCharacter");
        destroyDistance = 30;
        if (gameObject.tag == "Enemy") {
            destroyDistance = 25;
        }
    }

    void Update() {
        
        if (player.transform.position.x - transform.position.x > destroyDistance) {
            Destroy(this.gameObject);
        }
    }
}
