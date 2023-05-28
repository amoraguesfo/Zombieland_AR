using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SelectionFromCameraOrigin : MonoBehaviour
{
    [SerializeField]
    private GameObject welcomePanel;
    [SerializeField]
    private PlacementObject[] placedObjects;
    [SerializeField]
    private Color activeColor = Color.red;
    [SerializeField]
    private Color inactiveColor = Color.gray;
    [SerializeField]
    private Button dismissButton;
    [SerializeField]
    private Camera arCamera;

    private Vector2 touchPosition = default;


    [SerializeField]
    private float rayDistanceFromCamera = 10.0f;
    [SerializeField]
    private float generateRayAfterSeconds = 2.0f;

    private float rayTimer = 0;

    [SerializeField]
    private GameObject selector;

    private void Dismiss() => welcomePanel.SetActive(false);

    private void Awake()
    {
        dismissButton.onClick.AddListener(Dismiss);
    }

    private void Start()
    {
        ChangeSelectedObject(placedObjects[0]);

    }



    private void Update()
    {
        if (welcomePanel.activeSelf)
            return;
        //if ( rayTimer >= generateRayAfterSeconds)
        if (Input.touchCount > 0)
        {
            Touch touch = Input.GetTouch(0);

            if (touch.phase == TouchPhase.Began)
            {
                Ray ray = arCamera.ScreenPointToRay(selector.transform.position);
                RaycastHit hitObject;
                if (Physics.Raycast(ray, out hitObject, rayDistanceFromCamera))
                {
                    PlacementObject placementObject = hitObject.transform.GetComponent<PlacementObject>();
                    if (placementObject != null)
                    {
                        ChangeSelectedObject(placementObject);
                    }
                }
                else
                {
                    ChangeSelectedObject();
                }
            }
        }
        
    }

    private void ChangeSelectedObject(PlacementObject selected = null)
    {
       foreach(PlacementObject current in placedObjects)
        {
            MeshRenderer meshRenderer = current.GetComponent<MeshRenderer>();
            if(selected != current)
            {
                current.isSelected = false;
                meshRenderer.material.color = inactiveColor;
            }
            else
            {
                current.isSelected = true;
                meshRenderer.material.color = activeColor;
            }

        }
    }
}
