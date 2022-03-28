using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ForegroundSpawner : MonoBehaviour {
    public GameObject foreground1;
    public GameObject foreground2;
    public GameObject foreground3;
    public GameObject foreground4;
    public GameObject player;
    private GameObject fore;
    private bool spawned = false;
    private Vector3 position;

    void Start() {
        position = new Vector3(24.0f, 0.0f);
        fore = Instantiate(foreground2, position, transform.rotation);
        fore.transform.parent = transform;

        position = new Vector3(48.0f, 0.0f);
        fore = Instantiate(foreground4, position, transform.rotation);
        fore.transform.parent = transform;
    }

    void Update() {
        // print(transform.position.x);

        if ((int)player.transform.position.x % 24 == 0 && spawned) {
            spawned = false;
        }

        else if ((int)player.transform.position.x % 12 == 0 && !spawned && (int)player.transform.position.x != 0 && !((int)player.transform.position.x % 24 == 0)) {
            spawnforeground();
            spawned = true;
        }
    }

    void spawnforeground() {
        int choose = Random.Range(1, 5);
        position = new Vector3(player.transform.position.x + 48.0f, 0.0f);

        switch (choose) {
            case 1:
                fore = Instantiate(foreground1, position, transform.rotation);
                break;
            case 2:
                fore = Instantiate(foreground2, position, transform.rotation);
                break;
            case 3:
                fore = Instantiate(foreground3, position, transform.rotation);
                break;
            case 4:
                fore = Instantiate(foreground4, position, transform.rotation);
                break;
        }
        
        fore.transform.parent = transform;
    }
}
