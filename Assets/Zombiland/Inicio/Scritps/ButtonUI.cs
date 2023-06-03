using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
public class ButtonUI : MonoBehaviour
{
    public TextMeshProUGUI textScore;
    private void Start()
    {
        textScore.text = "Puntos:" + AppController.Instance.TotalScore;
}
    public void LoadCap1()
    {
        SceneManager.LoadScene("Cap1");
    }
    public void LoadCap2()
    {
        SceneManager.LoadScene("Intro Cap2");
    }
    public void LoadCap3()
    {
        SceneManager.LoadScene("Cap3_intro");
    }
    public void LoadCap4()
    {
        SceneManager.LoadScene("Cap4_intro");
    }
    public void LoadCap5()
    {
        SceneManager.LoadScene("Cap5_Intro");

    }
}