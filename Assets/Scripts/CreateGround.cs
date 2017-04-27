using UnityEngine;
using System.Collections;

public class CreateGround : MonoBehaviour {
	
	float gameTime = 0;
	public GameObject groundpart;
	public GameObject bombObject;
	public GameObject gameOver;
	public GameObject gameRunner;
	public GameObject explosion;
	public GameObject background;

	public GUIStyle gstyle;
	float lastgametime = 0;
	float speedChangeDif = 0;
	float lastTileTime = 0;
	float Speed = 2;
	float bgSpeed = 1;

	public AudioClip audioDie;
	new AudioSource audio;

	public bool gameoverb = false;

	void Start () {
		speedChangeDif = 15;

		GameObject[] gos;
		gos = GameObject.FindGameObjectsWithTag("ground");
		foreach (GameObject go in gos)
		{
			GroundPart Scriptt = go.GetComponent<GroundPart>();
			Scriptt.speed = Speed;
		}

		GameObject[] gos2;
		gos2 = GameObject.FindGameObjectsWithTag("background");
		foreach (GameObject go2 in gos2)
		{
			bgmove Scriptt2 = go2.GetComponent<bgmove>();
			Scriptt2.speed = bgSpeed;
		}
	}

	void Update () {
		
		if (Input.GetKeyDown(KeyCode.R) && gameoverb) {
			Gamerestart ();
			gameoverb = false;
			speedChangeDif = 15;

			GameObject[] gos;
			gos = GameObject.FindGameObjectsWithTag("ground");
			foreach (GameObject go in gos)
			{
				GroundPart Scriptt = go.GetComponent<GroundPart>();
				Scriptt.speed = Speed;
			}

			GameObject[] gos2;
			gos2 = GameObject.FindGameObjectsWithTag("background");
			foreach (GameObject go2 in gos2)
			{
				bgmove Scriptt2 = go2.GetComponent<bgmove>();
				Scriptt2.speed = bgSpeed;
			}
		}

		if (!gameoverb) {
			gameTime += Time.deltaTime;

		if (gameTime - lastgametime > speedChangeDif ){
			lastgametime = gameTime;
			

			speedChangeDif = speedChangeDif/1.2f;
			Speed *= 1.2f;
				bgSpeed = Speed / 2;

			GameObject[] gos;
			gos = GameObject.FindGameObjectsWithTag("ground" );
			foreach (GameObject go in gos)
			{
				GroundPart Scriptt = go.GetComponent<GroundPart>();
				Scriptt.speed = Speed;
			}

			GameObject[] gos2;
			gos2 = GameObject.FindGameObjectsWithTag("bomb" );
			foreach (GameObject gof in gos2)
			{
				Bomb Scripttf = gof.GetComponent<Bomb>();
				Scripttf.speed = Speed;
			}

				GameObject[] gos3;
				gos3 = GameObject.FindGameObjectsWithTag("background");
				foreach (GameObject go3 in gos3)
				{
					bgmove Scriptt3 = go3.GetComponent<bgmove>();
					Scriptt3.speed = bgSpeed;
				}
		}

		if (gameTime - lastTileTime > 7f/Speed){
		
			lastTileTime = gameTime;
			newground ();
		}

	}
}

	void newground(){
	
		GameObject clone = Instantiate(groundpart);
		GroundPart Scriptt = clone.GetComponent<GroundPart>();
		Scriptt.speed = Speed;

		if(Random.Range(0,4) < 3 ){
			GameObject bclone = Instantiate(bombObject);
			Bomb Scripttb = bclone.GetComponent<Bomb>();
			Scripttb.speed = Speed;
		}
	}

	void OnGUI() {

		float seconds = gameTime;
		GUI.Label(new Rect(40,40,450,400), " " + Mathf.RoundToInt(seconds), gstyle);
	}

	public void Gameover (){

		if (!gameoverb) {
			audio = GetComponent<AudioSource>();
			audio.PlayOneShot(audioDie, 1F);

			Instantiate(gameOver);
			Instantiate(explosion);
			gameoverb = true;
			GameObject[] gos;
			gos = GameObject.FindGameObjectsWithTag("ground" );
				foreach (GameObject go in gos)
				{
					GroundPart Scriptt = go.GetComponent<GroundPart>();
					Scriptt.speed = 0;
				}

				GameObject[] gos2;
				gos2 = GameObject.FindGameObjectsWithTag("bomb" );
				foreach (GameObject gof in gos2)
				{
					Bomb Scripttf = gof.GetComponent<Bomb>();
					Scripttf.speed = 0;
				}
				GameObject[] gos3;
				gos3 = GameObject.FindGameObjectsWithTag("background");
				foreach (GameObject go3 in gos3)
				{
					bgmove Scriptt3 = go3.GetComponent<bgmove>();
					Scriptt3.speed = 0;
				}
		}
	}

	public void Gamerestart (){

		GameObject[] gos2;
		gos2 = GameObject.FindGameObjectsWithTag("bomb" );
		foreach (GameObject gof in gos2)
		{
			Destroy (gof);
		}

		GameObject[] gosr;
		gosr = GameObject.FindGameObjectsWithTag("Player" );
		foreach (GameObject gof in gosr)
		{
			Destroy (gof);
		}

		Instantiate(gameRunner);
		gameTime = 0;
		lastgametime = 0;
		speedChangeDif = 20;
		lastTileTime = 0;
		Speed = 2;

		Destroy (GameObject.FindWithTag("goscreen"));
		Destroy (GameObject.FindWithTag("explosi"));
	}
}
