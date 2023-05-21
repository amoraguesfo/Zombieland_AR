using System;
using UnityEngine;
using UnityEngine.UI;

public class PlacementWithSelectorsController : MonoBehaviour
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


    void Awake()
    {
        dismissButton.onClick.AddListener(Dismiss);
        ChangeSelectedObject(placedObjects[0]);          
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
                    PlacementObject placementObject = hitObject.transform.GetComponent<PlacementObject>();
                    if (placementObject != null)
                    {
                        ChangeSelectedObject(placementObject);
                    }
                }
            }
        }
    }
    private void ChangeSelectedObject(PlacementObject selected)
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

    private void Dismiss() => welcomePanel.SetActive(false);
}
