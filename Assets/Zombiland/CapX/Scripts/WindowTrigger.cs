using UnityEngine;

public class WindowTrigger : MonoBehaviour
{
    private bool isObjectOnWindow = false;

    // Check if the object is on the window
    public bool IsObjectOnWindow(GameObject obj)
    {
        return isObjectOnWindow;
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Tablon"))
        {
            isObjectOnWindow = true;
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.CompareTag("Tablon"))
        {
            isObjectOnWindow = false;
        }
    }
}
