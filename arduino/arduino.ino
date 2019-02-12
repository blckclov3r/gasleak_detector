void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // print out the value you read:
  Serial.println(sensorValue);
  delay(1000);
}
