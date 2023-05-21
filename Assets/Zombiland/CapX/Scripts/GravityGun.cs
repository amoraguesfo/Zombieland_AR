using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class GravityGun : MonoBehaviour
{
    //AR tap to place
    public GameObject objectToPlace;
    public GameObject placementIndicator;
    private GameObject spawnedObject;
    private ARRaycastManager arOrigin;
    private Pose placementPose;
    private bool placementPoseIsValid = false;

    //Logica de los tablones 
    [SerializeField]
    private GameObject welcomePanel;

    [SerializeField]
    private Button dismissButton;
    [SerializeField]
    private Camera arCamera;

    [SerializeField] float maxGrabDistance = 10f, throwForce = 20f, lerpSpeed = 10f;
    [SerializeField] Transform objectHolder;

    [SerializeField]
    private GameObject selector;
    [SerializeField] private TextMeshProUGUI TextNumTablas;

    Rigidbody grabbedRB;

    private GameObject windowObject;
    private WindowTrigger windowTrigger;

    private int numTablas = 3;
    private void Dismiss() => welcomePanel.SetActive(false);
    private void Awake()
    {
        dismissButton.onClick.AddListener(Dismiss);
        Dismiss();
    }

    private void Start()
    {
        arOrigin = GetComponent<ARRaycastManager>();
        TextNumTablas.text = "Tablas " + numTablas;
    }
    void Update()
    {
        UpdatePlacementPose();
        UpdatePlacementIndicator();
        if (placementPoseIsValid && Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began)
        {
            TapToPlaceObject();
        }

        if (welcomePanel.activeSelf)
            return;

        if (grabbedRB)
        {
            // Reset the position and rotation of the grabbed object
            grabbedRB.MovePosition(Vector3.Lerp(grabbedRB.position, objectHolder.transform.position, Time.deltaTime * lerpSpeed));
            // Get the horizontal rotation from objectHolder's rotation
            Quaternion horizontalRotation = Quaternion.Euler(90f, objectHolder.rotation.eulerAngles.y, 0f);

            if (windowTrigger && windowTrigger.IsObjectOnWindow(grabbedRB.gameObject))
            {
                // Aplicar tonalidad rojiza suave al objeto sobre el trigger
                Renderer grabbedRenderer = grabbedRB.gameObject.GetComponent<Renderer>();
                Color redTint = new Color(1f, 0.5f, 0.5f, 1f); // Tonalidad rojiza suave (ajusta los valores según tu preferencia)
                grabbedRenderer.material.color = redTint;
            }
            else
            {
                // Restablecer el color del objeto a su estado original
                Renderer grabbedRenderer = grabbedRB.gameObject.GetComponent<Renderer>();
                grabbedRenderer.material.color = Color.white;
            }

        }

        if (Input.touchCount > 0)
        {
            Touch touch = Input.GetTouch(0);

            if (touch.phase == TouchPhase.Began)
            {

                if (grabbedRB)
                {
                    if (windowTrigger.IsObjectOnWindow(grabbedRB.gameObject))
                    {
                        grabbedRB.isKinematic = true;
                        grabbedRB = null;
                        TextNumTablas.text = "Tablas " + numTablas--;

                    }

                        grabbedRB.isKinematic = false;
                        grabbedRB = null;
                    

                }
                else
                {
                    RaycastHit hit;
                    Ray ray = arCamera.ScreenPointToRay(selector.transform.position);
                    if (Physics.Raycast(ray, out hit, maxGrabDistance))
                    {
                        grabbedRB = hit.collider.gameObject.GetComponent<Rigidbody>();
                        if (grabbedRB)
                        {
                            grabbedRB.MoveRotation(Quaternion.Euler(90f, 0f, 0f));
                            grabbedRB.isKinematic = true;
                        }
                    }
                }
            }
        }
    }

    private void TapToPlaceObject()
    {
        if (spawnedObject == null)
        {
            spawnedObject = Instantiate(objectToPlace, placementPose.position, placementPose.rotation);          
            placementIndicator.SetActive(false);
            // Busca el objeto de la ventana por su nombre
            windowObject = GameObject.Find("Window");
            // Si necesitas acceder a un componente WindowTrigger adjunto al objeto de la ventana, puedes obtener la referencia también
            windowTrigger = windowObject.GetComponent<WindowTrigger>();
        }

    }

    private void UpdatePlacementIndicator()
    {
        if (placementPoseIsValid && spawnedObject == null)
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
        if (placementPoseIsValid)
        {
            placementPose = hits[0].pose;
        }
    }
}