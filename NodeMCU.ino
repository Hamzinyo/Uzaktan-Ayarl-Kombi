#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <Servo.h>


char auth[] = "PSPTvQCkWsveNfRemtjwj4jqBxlOwe9B";
char ssid[] = "AirTies_Air5341";
char pass[] = "btCQ3XQhrShWCtch";

Servo servo;
Servo servo1;

void setup()
{
  
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
  servo.attach(15); 
  servo1.attach(14);
}

void loop()
{
  Blynk.run();
}
 BLYNK_WRITE(V1)
 {
  servo.write(param.asInt()); 
 }
 BLYNK_WRITE(V4)
 {
  servo1.write(param.asInt()); 
 }
 
