using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.Experimental.XR;
using System;
using UnityEngine.XR.ARSubsystems;

[RequireComponent(typeof(ARRaycastManager))]
public class ARTapToPlaceObject : MonoBehaviour
{
    public GameObject objectToPlace;
    public GameObject placementIndicator;
    private GameObject spawnedObject;
    private ARRaycastManager arOrigin;
    private Pose placementPose;
    private bool placementPoseIsValid = false;
    void Start()
    {
        arOrigin = GetComponent<ARRaycastManager>();
        
    }

    void Update()
    {
        UpdatePlacementPose();
        UpdatePlacementIndicator();
        if(placementPoseIsValid && Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began)
        {
            TapToPlaceObject();
        }
    }

    private void TapToPlaceObject()
    {
        //if (spawnedObject == null)
        //{
           spawnedObject = Instantiate(objectToPlace, placementPose.position, placementPose.rotation);
        //}
        //else
        //{
        //    spawnedObject.transform.position = placementPose.position;
        //}
    }

    private void UpdatePlacementIndicator()
    {
        if (placementPoseIsValid)
        {
            placementIndicator.SetActive(true);
            placementIndicator.transform.SetPositionAndRotation(placementPose.position, placementPose.rotation);    
        }
        else
        {
            placementIndicator.SetActive(false);
        }
    }

    private void UpdatePlacementPose()
    {
        var screenCenter = Camera.current.ViewportToScreenPoint(new Vector3(0.5f, 0.5f));
        var hits = new List<ARRaycastHit>();
        arOrigin.Raycast(screenCenter, hits, TrackableType.Planes);

        placementPoseIsValid = hits.Count > 0;
        if( placementPoseIsValid)
        {
            placementPose = hits[0].pose;
        }
    } 
}
