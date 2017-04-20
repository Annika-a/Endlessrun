using UnityEngine;
using System.Collections;

public class GroundPart : MonoBehaviour {

	public float speed = 3;

	void Start(){

	}

	void Update () {
		transform.Translate(Time.deltaTime*speed*-1, 0, 0);

		if (this.transform.position.x < -25){
			Destroythis();
		}
	}

	void Destroythis(){
		Destroy(this.gameObject);
	}
}
