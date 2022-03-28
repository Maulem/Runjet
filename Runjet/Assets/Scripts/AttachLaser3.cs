using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AttachLaser3 : MonoBehaviour {
    public GameObject LaserSmoke;
    public GameObject LaserParticles;
    public GameObject LaserRobot;
    private GameObject laserSmoke;
    private GameObject laserParticles;
    private GameObject laserRobot;
    private Vector3 laserSmokeCoords = new Vector3(-0.25f, -0.0f);
    private Vector3 laserParticlesCoords = new Vector3(-0.15f, -0.4f);
    private Vector3 laserRobotCoords = new Vector3(0.18f, -3.84f);

    void Start() {
        laserSmoke = Instantiate(LaserSmoke, transform.position, transform.rotation) as GameObject;
        laserSmoke.transform.parent = transform;
        laserSmoke.transform.position = (transform.position + laserSmokeCoords);
        // laserSmoke.transform.rotation = (Quaternion.Euler(0, 0, -90));
        laserParticles = Instantiate(LaserParticles, transform.position, transform.rotation) as GameObject;
        laserParticles.transform.parent = transform;
        laserParticles.transform.position = (transform.position + laserParticlesCoords);
        laserRobot = Instantiate(LaserRobot, transform.position, transform.rotation) as GameObject;
        laserRobot.transform.parent = transform;
        laserRobot.transform.position = (transform.position + laserRobotCoords);
    }

    void Update() {
        laserSmoke.transform.position = (transform.position + laserSmokeCoords);
        laserParticles.transform.position = (transform.position + laserParticlesCoords);
        laserRobot.transform.position = (transform.position + laserRobotCoords);
    }
}
