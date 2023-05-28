using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class AppController : MonoBehaviour
{
    private static AppController _instance;
    public static AppController Instance { get { return _instance; } }

    public TextMeshProUGUI textScore;
    private int totalScore = 0;

    private void Awake()
    {
        if (_instance != null && _instance != this)
        {
            _instance.totalScore += totalScore;
            _instance.textScore.text = "Puntos: " + _instance.totalScore;
            Destroy(this.gameObject);
            return;
        }
        _instance = this;
        textScore.text = "Puntos: " + totalScore;
        DontDestroyOnLoad(this.gameObject);
    }

    private void Start()
    {
        
    }
    public void addScore(int score)
    {
        totalScore += score;
        textScore.text = "Puntos: " +  totalScore;
    }
}
