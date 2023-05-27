using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class ARAnchorManagerExample : MonoBehaviour
{
    [SerializeField]
    private ARRaycastManager raycastManager;

    [SerializeField]
    private ARAnchorManager anchorManager;

    [SerializeField]
    private GameObject prefabToInstantiate;

    private List<ARRaycastHit> hitResults = new List<ARRaycastHit>();

    void Update()
    {
        // Check for a touch on the screen
        if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began)
        {
            // Perform a raycast from the touch position
            Ray ray = Camera.main.ScreenPointToRay(Input.GetTouch(0).position);

            if (raycastManager.Raycast(ray, hitResults, TrackableType.PlaneWithinPolygon))
            {
                // Instantiate the prefab at the hit pose
                Pose hitPose = hitResults[0].pose;
                ARAnchor anchor = anchorManager.AddAnchor(hitPose);
                Instantiate(prefabToInstantiate, anchor.transform.position, anchor.transform.rotation);
            }
        }
    }
}
