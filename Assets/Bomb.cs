using UnityEngine;
using System.Collections;

public class Bomb : MonoBehaviour {

	public float speed = 3;

	void Start(){

	}

	void Update () {
		transform.Translate(Time.deltaTime*speed*-1, 0, 0);

		if (this.transform.position.x < -15){
			Destroythis();
		}
	}

	void Destroythis(){
		Destroy(this.gameObject);
	}
}
