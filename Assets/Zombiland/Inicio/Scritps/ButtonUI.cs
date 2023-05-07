using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
public class ButtonUI : MonoBehaviour
{
    public void LoadCap1()
    {
        SceneManager.LoadScene("");
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
        SceneManager.LoadScene("GameVR");
    }
    public void LoadCap5()
    {
        SceneManager.LoadScene("");

    }
}