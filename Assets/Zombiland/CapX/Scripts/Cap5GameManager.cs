using UnityEngine;
using UnityEngine.SceneManagement;
using System;
using TMPro;

public class Cap5GameManager : MonoBehaviour
{

        private static Cap5GameManager _instance;

        public TextMeshProUGUI textTimer;
        public float timer = 0f;
        private bool timerStart = false;

    public static Cap5GameManager Instance
        {
            get
            {
                if (_instance == null)
                {
                    Debug.LogError("Creating GameManger");
                    _instance = new GameObject().AddComponent<Cap5GameManager>();
                }

                return _instance;
            }
        }

        private void Awake()
        {
            if (_instance != null && _instance != this)
            {
                Destroy(gameObject);
            }
            else
            {
                _instance = this;
            }
        }

        private void OnDestroy()
        {
            if (_instance == this)
            {
                _instance = null;
            }
        }


        public void startTimer()
        {
                 timerStart = true;
        }
    public void stopTimer()
    {
        timerStart = false;
    }
    private void Update()
        {
            if (timerStart)
            {
                timer += Time.deltaTime;
                textTimer.text = "Tiempo: " + timer.ToString("n2");
            }

        }
        
        public void endCap5()
    {

        stopTimer();
        textTimer.text = "ha tomar Por culo los Zombies!!!!";
    }

    
}

