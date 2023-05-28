using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class Controlador : MonoBehaviour
{

    public TextMeshProUGUI textTimer;
    public float timer = 120f;

    // Start is called before the first frame update
    void Start()
    {
        textTimer.text = "Tiempo: " + timer.ToString("n2");
    }

    // Update is called once per frame
    void Update()
    {
        timer -= Time.deltaTime;
        textTimer.text = "Tiempo: " + timer.ToString("n2");
        if (timer < 0) textTimer.color = Color.red;
    }
}
