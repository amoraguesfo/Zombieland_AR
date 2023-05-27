using UnityEngine;
using UnityEngine.SceneManagement;
using System;
using TMPro;

namespace Managers
{
    public class GameManager : MonoBehaviour
    {
        [SerializeField] private Transform player;

        private static GameManager _instance;

        public TextMeshProUGUI textTimer;
        public float timer = 120f;


        public static GameManager Instance
        {
            get
            {
                if (_instance == null)
                {
                    Debug.LogError("Creating GameManger");
                    _instance = new GameObject().AddComponent<GameManager>();
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


        public Transform GetPlayer()
        {
            return player;
        }

        private void Start()
        {

            textTimer.text = "Tiempo: " + timer.ToString("n2");
        }
        private void Update()
        {
            timer -= Time.deltaTime;
            textTimer.text = "Tiempo: " + timer.ToString("n2");
            if (timer < 0)  textTimer.color = Color.red;

        }
        public void RemoveTime()
        {
            timer -= 10f;
        }
        public void AddTime()
        {
            timer += 10f;
        }


    }
}