using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class disparo : MonoBehaviour
{

    public GameObject bala; // Prefab de la bala
    public Transform SpawnPoint; // Punto de generación de la bala
    public int maxAmmo = 2; // Número máximo de cartuchos
    public float recarga = 3f; // Tiempo de recarga en segundos
    public float FuerzaDisparo = 10f;
    public AudioClip sonidodisparo;
    public AudioClip sonidorecarga;

    private int currentAmmo; // Cartuchos restantes
    private bool isCargando; // Indicador de si se está recargando

    public TextMeshProUGUI cargador;


    private void Start()
    {
        currentAmmo = maxAmmo; // Inicializar los cartuchos restantes

    }

    private void Update()
    {
        cargador.text = currentAmmo.ToString();

        if (isCargando)
            return;

        if (Input.GetButtonDown("Fire1"))
        {
            fuego();
            
        }

        
    }

    private void fuego()
    {
        if (currentAmmo <= 0)
            {
                StartCoroutine(Reload());
                return;
            }

        AudioSource.PlayClipAtPoint(sonidodisparo, transform.position);//Sonido Disparo
        GameObject bullet = Instantiate(bala, SpawnPoint.position, SpawnPoint.rotation);
        Rigidbody balaRigidbody = bullet.GetComponent<Rigidbody>();
        balaRigidbody.AddForce(SpawnPoint.forward * FuerzaDisparo, ForceMode.Impulse);
        currentAmmo--;

        // Destruir la bala después de cierto tiempo (si no colisiona con nada) 2s
        Destroy(bullet, 2f);
    }

    private System.Collections.IEnumerator Reload()
    {
        isCargando= true;
        AudioSource.PlayClipAtPoint(sonidorecarga, transform.position);

        yield return new WaitForSeconds(recarga);
        AudioSource.PlayClipAtPoint(sonidorecarga, transform.position);// Sonido final recarga
        currentAmmo = maxAmmo; // Recargar cartuchos
        isCargando= false;
    }
}


