using UnityEngine;

public class TablonTrigger : MonoBehaviour
{
    private bool isObjectOnWindow = false;
    private bool isPositioned = false;
    private Color originalColor;
    public Renderer objectRenderer; // Reference to the object's renderer component

    private void Awake()
    {
        // Store the original color of the object
        originalColor = objectRenderer.material.color;
    }

    // Check if the object is on the window
    public bool IsObjectOnWindow()
    {
        return isObjectOnWindow;
    }

    public bool IsObjectPositioned()
    {
        return isPositioned;
    }

    public void PositionObject(GameObject tablon)
    {
        tablon.transform.position = gameObject.transform.position;
        tablon.transform.rotation = gameObject.transform.rotation;
        ///tablon.GetComponent<Rigidbody>().isKinematic = true;
        Destroy(tablon.GetComponent<Rigidbody>());
        isPositioned = true;
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Tablon"))
        {
            isObjectOnWindow = true;
            // Change the object's color to green
            objectRenderer.material.color = Color.green;
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.CompareTag("Tablon"))
        {
            isObjectOnWindow = false;
            // Reset the object's color to the original color
            objectRenderer.material.color = originalColor;
        }
    }
}
