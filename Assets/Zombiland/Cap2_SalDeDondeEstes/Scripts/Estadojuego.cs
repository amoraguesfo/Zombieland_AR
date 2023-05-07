using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Estadojuego : MonoBehaviour
{
    public static Estadojuego Instance;
    [SerializeField] public float puntos;

    void Awake()
    {
        if (Estadojuego.Instance == null)
        {
            Estadojuego.Instance = this;
            DontDestroyOnLoad(this.gameObject);
        }
        else
        {
            Destroy(gameObject);
        }
    }
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
