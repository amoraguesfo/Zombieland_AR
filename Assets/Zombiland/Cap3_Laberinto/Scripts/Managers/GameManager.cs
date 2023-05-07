using UnityEngine;
using UnityEngine.SceneManagement;
using System;
namespace Managers
{
    public class GameManager : MonoBehaviour
    {
        [SerializeField] private Transform player;

        private static GameManager _instance;
        public int time = 120;
        public static event Action<int> onDamage;

        public void RemoveTime()
        {

        }
        public void AddTime()
        {

        }
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

    }
}