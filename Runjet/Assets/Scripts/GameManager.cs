using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager {

    public enum GameState {MENU, GAME, PAUSE, ENDGAME};

    public GameState gameState {get; private set;}
    private static GameManager _instance;

    public delegate void ChangeStateDelegate();
    public static ChangeStateDelegate changeStateDelegate;

    public static GameManager GetInstance() {

        if(_instance == null) {
            _instance = new GameManager();
        }
        return _instance;
    }

    private GameManager() {
        gameState = GameState.MENU;
    }

    public void ChangeState(GameState nextState) {
        if (gameState == GameState.ENDGAME && nextState == GameState.GAME) Reset();
        if (gameState == GameState.MENU && nextState == GameState.GAME) Reset();
        gameState = nextState;
        changeStateDelegate();
    }

    private void Reset() {
        CharacterController2D.coins = -1;
        CharacterController2D.coinsUI = 0;
        CharacterController2D.dead = false;
        CharacterController2D.restart = 2;
        UIDistance.reset = true;
    }
}
