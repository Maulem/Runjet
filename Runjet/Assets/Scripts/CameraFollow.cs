using UnityEngine;

public class CameraFollow : MonoBehaviour {
    public Transform target;
    private float smoothSpeed = 10.0f;
    private float xPosition = 0.0f;
    private float yPosition = 0.0f;
    private Vector3 offset = new Vector3(8, 0, -3);

    void LateUpdate() {
        xPosition = target.position.x;
        yPosition = target.position.y;
        if (yPosition < 0.0f) yPosition = 0.0f;
        if (yPosition > 2.0f) yPosition = 2.0f;

        Vector3 initialPosition = new Vector3(xPosition, yPosition, target.position.z);
        Vector3 desiredPosition = initialPosition + offset;
        Vector3 smoothedPosition = Vector3.Lerp(transform.position, desiredPosition, smoothSpeed * Time.deltaTime);
        transform.position = smoothedPosition;
    }

}
    
