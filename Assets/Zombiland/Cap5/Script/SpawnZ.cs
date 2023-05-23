using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnZ : MonoBehaviour
{
    public GameObject zombie;
    public Vector3 spawnValues;
    public float spawnWait;
    public int startWait;
    public bool parar;
 

    int randEnemy;

    void Start()
    {
        while (!parar)
        {
            waitSpawner();
        }
    }

    void Update()
    {
        
    }

    IEnumerator waitSpawner()
    {
        yield
        return new WaitForSeconds(startWait);
        
        Vector3 spawnPosition = new Vector3(Random.Range(-spawnValues.x, spawnValues.x), 1f, Random.Range(-spawnValues.z, spawnValues.z));
        for (int i = 0; i < 3; i++)
        {
            Instantiate(zombie, spawnPosition + transform.TransformPoint(0, 0, 0), gameObject.transform.rotation);
        }
        yield
        return new WaitForSeconds(spawnWait);
        
    }
}
