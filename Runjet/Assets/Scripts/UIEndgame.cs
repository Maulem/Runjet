using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UIEndgame : MonoBehaviour {
    public Text message;
    private int score = 0;

    GameManager gm;
    private void OnEnable() {
        gm = GameManager.GetInstance();
        score = (int)(UIDistance.distance + 10*CharacterController2D.coins);

        
        message.text = $"{score}";
        
    }

    
    public void Voltar() {
        gm.ChangeState(GameManager.GameState.GAME);
    }
}