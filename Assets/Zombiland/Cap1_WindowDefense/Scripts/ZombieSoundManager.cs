using UnityEngine;

public class ZombieSoundManager : MonoBehaviour
{
    public AudioClip[] soundClips;  // Array to hold the sound clips
    public float minDelay = 1f;     // Minimum delay between replays
    public float maxDelay = 3f;     // Maximum delay between replays

    private AudioSource audioSource;
    private bool isPlaying = false;
    private float delayTimer = 0f;
    private float currentDelay = 0f;

    void Start()
    {
        audioSource = GetComponent<AudioSource>();
        SetNextDelay();
    }

    void Update()
    {
        if (!isPlaying)
        {
            delayTimer += Time.deltaTime;
            if (delayTimer >= currentDelay)
            {
                PlayRandomClip();
                SetNextDelay();
            }
        }
    }

    void SetNextDelay()
    {
        currentDelay = Random.Range(minDelay, maxDelay);
        delayTimer = 0f;
    }

    void PlayRandomClip()
    {
        if (soundClips.Length > 0)
        {
            AudioClip randomClip = soundClips[Random.Range(0, soundClips.Length)];
            audioSource.PlayOneShot(randomClip);
            isPlaying = true;
            Invoke(nameof(ResetIsPlaying), randomClip.length);
        }
    }

    void ResetIsPlaying()
    {
        isPlaying = false;
    }
}
