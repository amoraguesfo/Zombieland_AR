using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class PlaceInd : MonoBehaviour
{

    /* Se encarga de mostrar los planos y colocar un indicador que el incluido en Gamobject presente en la escena.
    * Asi despues se coge su posicion el placemanager para colocar el objeto en esa posicion.*/

        private ARRaycastManager raycastManager;// Para poder usar el rayo para colocar
        private GameObject indicador; // el indicador( gameobject)
        private List<ARRaycastHit> hits = new List<ARRaycastHit> ();

        // Start is called before the first frame update
        void Start()
        {
           raycastManager = FindObjectOfType<ARRaycastManager> ();

            // Buscamos un objeto de Raycast.

           indicador = transform.GetChild(0).gameObject;

            // Indicamos que el indicador eno esta activo
           indicador.SetActive(false);
        }

        // Update is called once per frame
        void Update()
        {

            var ray = new Vector2(Screen.width /2, Screen.height /2);
            if(raycastManager.Raycast(ray, hits, TrackableType.Planes))
            {
                Pose hitPose = hits[0].pose;

                transform.position = hitPose.position;
                transform.rotation = hitPose.rotation;

                if(!indicador.activeInHierarchy)
                {
                    indicador.SetActive(true);
                }
            }

        }

}
