#include <Arduino.h>

#define LDR_PIN ***									// Datanleitung des Sensors an Pin 36 des ESPs
int sensor_value;									// Variable, in die die Sensorwerte geschrieben werden

void setup() {
	Serial.begin(***);							// Initialisieren des seriellen Monitors mit baudrate von 115200
	Serial.println("Hello! Let's go...");			// Textausgabe 
}
void loop() {
	*** = analogRead(***);						// Schreiben des Sensorwertes in die angelegte Variable 
	
	Serial.print("Value: ");					// Textausgabe im seriellen Monitor
	Serial.println(***);						// Ausgabe des Sensorwertes im seriellen Monitor


	// Abfrage in welchem Bereich der Wert liegt, um einzuordnen, wie hell es ist

	if (sensor_value >= 3072)						// Ist der gemessene Wert größer gleich 3072?
	{
		Serial.println("Sehr hell");				// Dann ist es sehr hell
	}
	else if (sensor_value >= 2048 && sensor_value < 3072)	// Liegt der Wert zwischen 2048 und 3072?
	{
		Serial.println("hell");								// Dann ist es nur hell
	}
	else if (sensor_value >= 1024 && sensor_value < 2048)	// Liegt der Wert zwischen 1024 und 2048?
	{
		Serial.println("dunkel");							// Dann ist es dunkel
	}
	else if (sensor_value < 1024)							// Ist der Wert kleiner als 1024?
	{
		Serial.println("Sehr dunkel");						// Dann ist es sehr dunkel
	}
	Serial.println();								// leere Zeile im seriellen Monitor
	delay(1000);									// Pause für 1000 Millisekunden (1 Sekunde)
}
