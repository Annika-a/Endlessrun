using UnityEngine;
using System.Collections;

public class bgmove : MonoBehaviour {

	public float speed = 3;

	void Start(){

	}

	void Update () {
		transform.Translate(Time.deltaTime*speed*-1, 0, 0);

		if (this.transform.position.x < -38){
			transform.position = new Vector3(276, -12, 38);
		}
	}


}
