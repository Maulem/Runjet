using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UIDistance : MonoBehaviour {
    public GameObject player;
    public static bool reset = false;
    Text textComp;
    private float playerStartX;
    public static int distance;

    void Start() {
        playerStartX = player.transform.position.x;
        textComp = GetComponent<Text>();
    }
    void Update() {
        if (reset) resetVar();

        distance = (int)(player.transform.position.x - playerStartX);
        if (distance < 10) textComp.text = $"000{distance} m";
        else if (distance < 100) textComp.text = $"00{distance} m";
        else if (distance < 1000) textComp.text = $"0{distance} m";
        else textComp.text = $"{distance} m";
    }

    private void resetVar() {
        playerStartX = player.transform.position.x;
        reset = false;
    }
}
