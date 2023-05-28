using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;

[RequireComponent(typeof(ARRaycastManager))]
public class PlacingWithDragDrop : MonoBehaviour
{    
    [SerializeField]
    private GameObject welcomePanel;
    [SerializeField]
    private GameObject placedPrefab;

    [SerializeField]
    private Button dismissButton;
    [SerializeField]
    private Camera arCamera;


    private GameObject placedObject;

    private Vector2 touchPosition = default;

    private ARRaycastManager arRaycastManager;

    private bool onTouchHold = false;

    private static List<ARRaycastHit> hits = new List<ARRaycastHit>();

    private void Dismiss() => welcomePanel.SetActive(false);

    void Awake()
    {
        arRaycastManager = GetComponent<ARRaycastManager>();
        dismissButton.onClick.AddListener(Dismiss);
    }

    // Update is called once per frame
    void Update()
    {
        if (welcomePanel.activeSelf)
            return;

        if (Input.touchCount > 0)
        {
            Touch touch = Input.GetTouch(0);
            touchPosition = touch.position;

            if (touch.phase == TouchPhase.Began)
            {
                Ray ray = arCamera.ScreenPointToRay(touch.position);
                RaycastHit hitObject;
                if (Physics.Raycast(ray, out hitObject))
                {
                    if (hitObject.transform.name.Contains("placedObject"))
                    {
                        onTouchHold = true;
                    }
                }
            }

            if(touch.phase == TouchPhase.Ended)
            {
                onTouchHold = false;
            }
        }
        if(arRaycastManager.Raycast(touchPosition, hits, UnityEngine.XR.ARSubsystems.TrackableType.PlaneWithinPolygon))
        {
            Pose hitPose = hits[0].pose;
            if(placedObject == null)
            {
                placedObject = Instantiate(placedPrefab, hitPose.position, hitPose.rotation);

            }
            else
            {
                if (onTouchHold)
                {
                    placedObject.transform.position = hitPose.position;
                    placedObject.transform.rotation = hitPose.rotation;
                }
            }
        }
    }
 

   
}
