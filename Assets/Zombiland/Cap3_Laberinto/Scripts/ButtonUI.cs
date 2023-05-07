using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
public class ButtonUI : MonoBehaviour
{
    [SerializeField] private string vr_game = "VR-test";
    [SerializeField] private string ar_game = "Intro cap2";
    [SerializeField] private string cap4_game = "GameVR";

    public void LoadSceneVR()
    {
        SceneManager.LoadScene(vr_game);
    }
    public void LoadSceneAR()
    {
        SceneManager.LoadScene(ar_game);
    }
    public void LoadCap4()
    {
        SceneManager.LoadScene(cap4_game);
    }
}
