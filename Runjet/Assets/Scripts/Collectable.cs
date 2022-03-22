
using UnityEngine;

public class Collectable : MonoBehaviour
{
  private void OnTriggerEnter2D(Collider2D other) {
     Debug.Log("OnTriggerEnter2D");
  }
}