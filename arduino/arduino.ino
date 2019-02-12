void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
 
  
  int sensorValue = analogRead(A0);
  Serial.println("Sensor State: "+sensorValue);
  delay(1000);

  
}
