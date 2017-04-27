using UnityEngine;
using System.Collections;
[RequireComponent(typeof(AudioSource))]
public class runner : MonoBehaviour {
	public bool grounded = true;
	public float jumpPower = 3000;
	private bool hasJumped = false;
	private bool doublejump = false;
	bool gameover = false;

	public AudioClip audioJump;
	public AudioClip audioLand;
	public AudioClip audioNewGame;
	public AudioClip audioWalk;
	new AudioSource audio;

	void Star(){
		audio = GetComponent<AudioSource>();
		audio.PlayOneShot(audioNewGame, 1F);
	}

	void Update () {
		if(!grounded && this.transform.position.y < -1.20) {
			grounded = true;
			doublejump = false;

			PlaySound (audioLand);
		}

		if (Input.GetButtonDown("Jump") && grounded == true && !gameover) {
			hasJumped = true;
			PlaySound (audioJump);
		}

		if (!gameover && Input.GetButtonDown("Jump") && grounded == false && doublejump == false && GetComponent<Rigidbody>().velocity.y < -0.1) {
			hasJumped = true;
			doublejump = true;
		}

		audio = GetComponent<AudioSource>();
		if(!audio.isPlaying){
			PlaySound (audioWalk);
		}
	}

	void FixedUpdate ()
	{
		if(hasJumped){
			GetComponent<Rigidbody>().AddForce(transform.up*jumpPower);
			grounded = false;
			hasJumped = false;
		}
	}


	void OnCollisionEnter (Collision col)
	{
		if(col.gameObject.tag == "bomb")
		{
			gameover = true;

			GameObject gos = GameObject.FindGameObjectWithTag("MainCamera");
	
			CreateGround Scriptt = gos.GetComponent<CreateGround>();
			Scriptt.Gameover();

			Destroy (gameObject);
			}
	}

	void PlaySound(AudioClip soundname)
	{
		audio = GetComponent<AudioSource>();
		audio.PlayOneShot(soundname, 1F);
	}

}