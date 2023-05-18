using Managers;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;
using UnityEngine.UI;

public class ZombieController : MonoBehaviour
{
    private Transform player;
    private NavMeshAgent agent;
    Animator animator;
    private float currentDist;
    public float walkDistance = 5f;
    public float attackDistance = 1f;


    private GameObject GotHitScreen;
    private float nextHit = 0;
    private float hitDelay = 5;

    // Start is called before the first frame update
    void Start()
    {
        player = GameObject.FindWithTag("Player").transform;
        GotHitScreen = GameObject.FindWithTag("HitScreen");
        agent = gameObject.GetComponent<NavMeshAgent>();
        animator = gameObject.GetComponent<Animator>();
    }

    // Update is called once per frame
    void Update()
    {
        
        currentDist  = Vector3.Distance(transform.position, player.position);
        if (currentDist < walkDistance && currentDist > attackDistance)
        {
            agent.SetDestination(player.transform.position);
            animator.SetBool("isWalking", true);
            transform.LookAt(player);

        }
        else
        {
            agent.velocity = Vector3.zero;
            animator.SetBool("isWalking", false);
        }
        if (currentDist < attackDistance)
        {

            agent.velocity = Vector3.zero;
            animator.SetBool("isAttacking", true);
            if (Time.time > nextHit)
            {
                gotHurt();
                nextHit = Time.time + hitDelay;
            }
        }
        else {
            animator.SetBool("isAttacking", false);
        }

        if(GotHitScreen != null)
        {
            if (GotHitScreen.GetComponent<Image>().color.a > 0)
            {
                var color = GotHitScreen.GetComponent<Image>().color;
                color.a -= 0.001f;
                GotHitScreen.GetComponent<Image>().color = color;
            }
        }

    }
    private void gotHurt()
    {
        var color = GotHitScreen.GetComponent<Image>().color;
        color.a = 0.6f;
        GotHitScreen.GetComponent<Image>().color = color;
        GameManager.Instance.RemoveTime();
    }
}
