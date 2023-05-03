using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
public class ButtonUI : MonoBehaviour
{
    [SerializeField] private string vr_game = "AR-test";
    [SerializeField] private string ar_game = "AR-test";

    public void LoadSceneVR()
    {
        SceneManager.LoadScene(vr_game);
    }
    public void LoadSceneAR()
    {
        SceneManager.LoadScene(ar_game);
    }

}
