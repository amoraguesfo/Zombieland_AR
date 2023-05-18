using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class GravityGun: MonoBehaviour
{
    [SerializeField] Camera cam;
    [SerializeField] float maxGrabDistance = 10f, throwForce = 20f, lerpSpeed = 10f;
    [SerializeField] Transform objectHolder;
    Rigidbody grabbeddRB;
    [SerializeField]
    [Tooltip("Instanciates this prefab on a plane at the touch location")]
    GameObject m_scene;
       /// <summary>
    /// Invoked whenever an object is placed in on a plane.
    /// </summary>
    public static event Action onPlacedObject;
    public GameObject spawnedHoop { get; private set; }
    private bool isPlaced = false;

    ARRaycastManager m_RaycastManager;

    static List<ARRaycastHit> s_Hits = new List<ARRaycastHit>();

    void Awake()
    {
        m_RaycastManager = GetComponent<ARRaycastManager>();
    }
    void Start()
    {
        
    }

    void Update()
    {
        if (grabbeddRB)
        {
            grabbeddRB.MovePosition(objectHolder.transform.position);

        }
        if (Input.touchCount > 0)
        {
            Touch touch = Input.GetTouch(0);

            if (touch.phase == TouchPhase.Began)
            {

                    if (m_RaycastManager.Raycast(touch.position, s_Hits, TrackableType.PlaneWithinPolygon))
                    {
                        Pose hitPose = s_Hits[0].pose;

                        spawnedHoop = Instantiate(m_scene, hitPose.position, Quaternion.AngleAxis(180, Vector3.up));
                        spawnedHoop.transform.parent = transform.parent;

                        isPlaced = true;
                        if (onPlacedObject != null)
                        {
                            onPlacedObject();
                        }
                    }
                }
            }
        }
    
}
