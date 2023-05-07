using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class PlaceManager : MonoBehaviour
{


    /*
        private PlaceInd placeIndicator;
        public GameObject objectToPlace;
        private GameObject nuevoObjeto;
        public bool ObColocado = false;// Controlamos si esta colocado

        // Start is called before the first frame update
        void Start()
        {
            placeIndicator = FindObjectOfType<PlaceInd>();

        }

        public void ColocarObjeto(){

            if (!ObColocado)
            {
                nuevoObjeto = Instantiate(objectToPlace, placeIndicator.transform.position, placeIndicator.transform.rotation);
                nuevoObjeto.transform.parent = placeIndicator.transform;
                ObColocado = true;
                placeIndicator.gameObject.SetActive(false);
            }



        }
        // Update is called once per frame
        void Update()
        {

        }

        */

    private ARSessionOrigin sessionOrigin;
    private PlaceInd placeIndicator;
    public GameObject objectToPlace;
    private GameObject nuevoObjeto;
    private bool objetoColocado = false;

    void Start()
    {
        sessionOrigin = FindObjectOfType<ARSessionOrigin>();
        placeIndicator = FindObjectOfType<PlaceInd>();
    }

    public void ColocarObjeto()
    {
        if (!objetoColocado)
        {
            nuevoObjeto = Instantiate(objectToPlace, placeIndicator.transform.position, placeIndicator.transform.rotation);
            ARAnchor nuevaAncla = sessionOrigin.trackablesParent.gameObject.AddComponent<ARAnchor>();
            sessionOrigin.MakeContentAppearAt(nuevoObjeto.transform, placeIndicator.transform.position, placeIndicator.transform.rotation);
            nuevoObjeto.transform.parent = nuevaAncla.transform;
            objetoColocado = true;
            placeIndicator.gameObject.SetActive(false);
        }
    }

    void Update()
    {
    }

}
