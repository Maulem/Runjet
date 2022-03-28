using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectSpawner : MonoBehaviour {
    public GameObject coin1;
    public GameObject coinh;
    public GameObject coins;
    public GameObject missile;
    public GameObject laser;
    public GameObject laser2;
    public GameObject laser3;
    public GameObject laser4;
    public GameObject player;
    private GameObject spawned;
    private Vector3 position;
    private float timeOffCoin = 2;
    private float spawnTimeCoin = 0;
    private float timeOffMissile = 6;
    private float spawnTimeMissile = 0;
    private float RandomX, RandomY;
    private static bool dead;

    void Start() {
        dead = CharacterController2D.dead;
    }

    void Update() {
        transform.position = new Vector3(player.transform.position.x + 25, 0, 0);
        dead = CharacterController2D.dead;

        if (Time.time > spawnTimeCoin && player.transform.position.x > 20 && !dead) {
            spawnCoin();
            spawnTimeCoin = Time.time + timeOffCoin;
        }

        if (Time.time > spawnTimeMissile && player.transform.position.x > 50 && !dead) {
            spawnMissile();
            spawnLaser();
            spawnTimeMissile = Time.time + timeOffMissile;
        }
        
    }

    void spawnCoin() {
        RandomX = Random.Range(0, 3);
        RandomY = Random.Range(-3, 5);

        Instantiate(coin1, transform.position + new Vector3(RandomX, RandomY, 0), transform.rotation);

        RandomX = Random.Range(3, 6);
        RandomY = Random.Range(-3, 5);

        Instantiate(coinh, transform.position + new Vector3(RandomX, RandomY, 0), transform.rotation);

        RandomX = Random.Range(6, 9);
        RandomY = Random.Range(-3, 5);

        Instantiate(coins, transform.position + new Vector3(RandomX, RandomY, 0), transform.rotation);
    }

    void spawnMissile() {
        RandomY = Random.Range(-3, 5);

        Instantiate(missile, transform.position + new Vector3(4, RandomY, 0), transform.rotation);
    }

    void spawnLaser() {
        RandomX = Random.Range(-2, 3);

        float randomNum = Random.Range(1, 5);

        switch (randomNum) {
            case 1:
                Instantiate(laser, transform.position + new Vector3(RandomX, -4, 0), transform.rotation);
                break;
            case 2:
                Instantiate(laser2, transform.position + new Vector3(RandomX, -4, 0), transform.rotation);
                break;
            case 3:
                Instantiate(laser3, transform.position + new Vector3(RandomX, 4.72f, 0), transform.rotation);
                break;
            case 4:
                Instantiate(laser4, transform.position + new Vector3(RandomX, 4.72f, 0), transform.rotation);
                break;
        }

        
    }
}
