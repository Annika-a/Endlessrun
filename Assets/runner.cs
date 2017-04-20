using UnityEngine;
using System.Collections;

public class runner : MonoBehaviour {
	public bool grounded = true;
	public float jumpPower = 3000;
	private bool hasJumped = false;
	private bool doublejump = false;
	bool gameover = false;

	void Star(){

	}

	void Update () {



		if(!grounded && this.transform.position.y < -1.20) {
			grounded = true;
			doublejump = false;
		}

		if (Input.GetButtonDown("Jump") && grounded == true && !gameover) {
			hasJumped = true;
		}

		if (!gameover && Input.GetButtonDown("Jump") && grounded == false && doublejump == false && GetComponent<Rigidbody>().velocity.y < -0.1) {
			hasJumped = true;
			doublejump = true;
		}


	}



	void FixedUpdate (){
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
			Debug.Log ("Bomb hit");
			gameover = true;

			GameObject gos = GameObject.FindGameObjectWithTag("MainCamera");
	
			CreateGround Scriptt = gos.GetComponent<CreateGround>();
			Scriptt.Gameover();

			Destroy (gameObject);
			}
		}

}