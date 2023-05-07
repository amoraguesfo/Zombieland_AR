using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FinalTextVR : MonoBehaviour
{
    int hit;
    public float points;
    // Start is called before the first frame update
    void Start()
    {
        //transform.localScale = new Vector3(0, 0, 0);
        points=(float)11;
        hit=0;
    }

    // Update is called once per frame
    void Update()
    {
        if (hit>=3 ){
            if(Input.GetButtonDown("Fire1")){
                Application.Quit();
            }
        }else{
            points=points-(float)0.001;
            if(points<0){
                points=0;
            }
            GetComponent<TextMesh>().text = "Score: "+(int)points+"\nHits: "+ hit;
        }
    }

    void OnHit(){
        hit=hit+1;
        //GetComponent<TextMesh>().text = ""+hit;
        if(hit==3){
            transform.localPosition = new Vector3(0, 0, 1);
            GetComponent<TextMesh>().characterSize=(float)0.05;
            GetComponent<TextMesh>().text = "Score: " + (int)points + "\nPulsa de nuevo para continuar.";
            GameObject objetive = GameObject.Find("Treasure");
            objetive.transform.localScale = new Vector3(0, 0, 0);
        }
    }

    void OnFinish(){
        
        //transform.localScale = new Vector3(1, 1, 1);
    }
}
