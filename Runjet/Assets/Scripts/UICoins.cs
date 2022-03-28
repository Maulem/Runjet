using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UICoins : MonoBehaviour {
    Text textComp;
    void Start() {
        textComp = GetComponent<Text>();
    }

    // Update is called once per frame
    void Update() {
        textComp.text = $"{CharacterController2D.coinsUI} coins";
    }
}
