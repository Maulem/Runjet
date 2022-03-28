using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BackgroundSpawner : MonoBehaviour {
    public GameObject background;
    public GameObject player;
    private GameObject back;
    private bool spawned = false;
    private Vector3 position;

    void Start() {
        position = new Vector3(24.0f, 0.0f);
        back = Instantiate(background, position, transform.rotation);
        back.transform.parent = transform;
        position = new Vector3(48.0f, 0.0f);
        back = Instantiate(background, position, transform.rotation);
        back.transform.parent = transform;
    }

    void Update() {
        // print(transform.position.x);

        if ((int)player.transform.position.x % 24 == 0 && spawned) {
            spawned = false;
        }

        else if ((int)player.transform.position.x % 12 == 0 && !spawned && (int)player.transform.position.x != 0 && !((int)player.transform.position.x % 24 == 0)) {
            spawnBackground();
            spawned = true;
        }
    }

    void spawnBackground() {
        position = new Vector3(player.transform.position.x + 48.0f, 0.0f);
        back = Instantiate(background, position, transform.rotation);
        back.transform.parent = transform;
    }
}
