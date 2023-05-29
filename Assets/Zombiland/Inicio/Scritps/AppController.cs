using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class AppController : MonoBehaviour
{
    private static AppController _instance;
    public static AppController Instance { get { return _instance; } }

    private int _totalScore = 0;

    public int TotalScore
    {
        get { return _totalScore; }
        set { _totalScore = value; }
    }

    private void Awake()
    {
        if (_instance != null && _instance != this)
        {
            Destroy(this.gameObject);
            return;
        }
        _instance = this;
        DontDestroyOnLoad(this.gameObject);
    }

    public void addScore(int score)
    {
        _totalScore += score;
    }
}
