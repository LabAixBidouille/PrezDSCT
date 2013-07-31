
#include <Servo.h> 

Servo myservo;

int pos = 90;
int ledHuit = 8;
int ledNeuf = 9;
int ledDix = 10;
int Clavier = 0;

void setup()
{
	Serial.begin(9600);
	myservo.attach(2);
	myservo.write (pos);

	pinMode (ledHuit, OUTPUT);
	pinMode (ledNeuf, OUTPUT);
	pinMode (ledDix, OUTPUT);
}

void AllumerLED ()
{

	digitalWrite (ledHuit, LOW);
	delay (1024);
	digitalWrite (ledHuit, HIGH);
	digitalWrite (ledNeuf, LOW);
	delay (1024);
	digitalWrite (ledNeuf, HIGH);
	digitalWrite (ledDix, LOW);
	delay (1024);
	digitalWrite (ledDix, HIGH);


} // AllumerLED ()

boolean LireEntree ()
{

	for (;;)
	{
		if (Serial.available() > 0)
		{

			Clavier = Serial.read();

			Serial.println(Clavier);

			if (Clavier == 48)
				return false;
			else if (Clavier == 49)
				return true;
		}
	}

} // LireEntree ()

void ActionnerDrapeau (boolean AMonter)
{
	if (AMonter)
	{
		myservo.write(180);
		delay (256);
		AllumerLED ();
	}
	else
		myservo.write(90);

} // ActionnerDrapeau ()

void loop() 
{
	ActionnerDrapeau (LireEntree ());
	delay (512);
} 
