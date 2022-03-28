using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AttachFire : MonoBehaviour {
    public GameObject Fire;
    private GameObject fire;
    private Vector3 fireCoords = new Vector3(0.34f, 0.4f);

    void Start() {
        fire = Instantiate(Fire, transform.position, transform.rotation) as GameObject;
        fire.transform.parent = transform;
        fire.transform.position = (transform.position + fireCoords);
        // laserSmoke.transform.rotation = (Quaternion.Euler(0, 0, -90));
    }

    void Update() {
        fire.transform.position = (transform.position + fireCoords);
        transform.position = transform.position - new Vector3(0.03f, 0, 0);
    }
}
