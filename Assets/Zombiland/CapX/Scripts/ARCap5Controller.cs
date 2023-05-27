using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

[RequireComponent(typeof(ARRaycastManager))]
public class ARCap5Controller : MonoBehaviour
{
    //AR tap to place
    public GameObject objectToPlace;
    public GameObject placementIndicator;
    private GameObject spawnedObject;
    private ARRaycastManager arOrigin;
    private Pose placementPose;
    private ARAnchor referencePoint;
    private bool placementPoseIsValid = false;

    //Panel de start
    [SerializeField]
    private GameObject welcomePanel;

    [SerializeField]
    private Button dismissButton;

    [SerializeField]
    private Camera arCamera;

    [SerializeField] float maxGrabDistance = 4f, lerpSpeed = 10f;
    [SerializeField] Transform objectHolder;

    [SerializeField]
    private GameObject selector;
    [SerializeField] private TextMeshProUGUI TextNumTablas;

    Rigidbody grabbedRB;

    private GameObject tablonObject1;
    private GameObject tablonObject2;
    private GameObject tablonObject3;
    private TablonTrigger tablonTrigger1;
    private TablonTrigger tablonTrigger2;
    private TablonTrigger tablonTrigger3;

    private int numTablas = 3;
    private void Dismiss() => welcomePanel.SetActive(false);
    private void Awake()
    {
        dismissButton.onClick.AddListener(Dismiss);
        selector.SetActive(false);

    }

    private void Start()
    {
        arOrigin = GetComponent<ARRaycastManager>();
        TextNumTablas.text = "Tablas " + numTablas;
    }
    void Update()
    {

        if (welcomePanel.activeSelf)
            return;

        UpdatePlacementPose();
        UpdatePlacementIndicator();
        if (placementPoseIsValid && Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began)
        {
            TapToPlaceObject();
        }


        if (grabbedRB)
        {
   
            grabbedRB.MovePosition(Vector3.Lerp(grabbedRB.position, objectHolder.transform.position, Time.deltaTime * lerpSpeed));
            Quaternion horizontalRotation = Quaternion.Euler(90f, objectHolder.rotation.eulerAngles.y, 0f);
            grabbedRB.MoveRotation(horizontalRotation);

        }

        if (Input.touchCount > 0)
        {
            Touch touch = Input.GetTouch(0);

            if (touch.phase == TouchPhase.Began)
            {
                RaycastHit hit;
                Ray ray = arCamera.ScreenPointToRay(selector.transform.position);
                if (Physics.Raycast(ray, out hit, maxGrabDistance))
                {
                    grabbedRB = hit.collider.gameObject.GetComponent<Rigidbody>();
                    grabbedRB.MoveRotation(Quaternion.Euler(90f, 0f, 0f));
                    grabbedRB.isKinematic = true;
                }
            }
            if (touch.phase == TouchPhase.Ended)
            {
                if (tablonTrigger1.IsObjectOnWindow() && !tablonTrigger1.IsObjectPositioned())
                {
                    tablonTrigger1.PositionObject(grabbedRB.gameObject);
                    numTablas--;
                }
                else if (tablonTrigger2.IsObjectOnWindow() && !tablonTrigger2.IsObjectPositioned())
                {            
                    tablonTrigger2.PositionObject(grabbedRB.gameObject);
                    numTablas--;
                }
                else if (tablonTrigger3.IsObjectOnWindow() && !tablonTrigger3.IsObjectPositioned())
                {
                    tablonTrigger3.PositionObject(grabbedRB.gameObject);
                    numTablas--;
                }
                else
                {
                    grabbedRB.isKinematic = false;
                }
                TextNumTablas.text = "Tablas " + numTablas;
                grabbedRB = null;
            }

        }
    }

    private void TapToPlaceObject()
    {
        if (spawnedObject == null)
        {
            spawnedObject = Instantiate(objectToPlace, placementPose.position, placementPose.rotation);
            InitTablonesTriggers();
            placementIndicator.SetActive(false);
            selector.SetActive(true);
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

    private void InitTablonesTriggers()
    {
        // Busca el objeto de la ventana por su nombre
        tablonObject1 = GameObject.Find("TablonTrigger1");
        tablonObject2 = GameObject.Find("TablonTrigger2");
        tablonObject3 = GameObject.Find("TablonTrigger3");

        // Si necesitas acceder a un componente TablonTrigger adjunto al objeto de la ventana, puedes obtener la referencia también
        tablonTrigger1 = tablonObject1.GetComponent<TablonTrigger>();
        tablonTrigger2 = tablonObject2.GetComponent<TablonTrigger>();
        tablonTrigger3 = tablonObject3.GetComponent<TablonTrigger>();

        TextNumTablas.text = "Tablones added to scene";
    }

}
