SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);
// setup() runs once, when the device is first turned on.
void setup() {
  // Put initialization like pinMode and begin functions here.

}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
pinMode(D5,OUTPUT);
delay(1000);
digitalWrite(D5, HIGH);
delay(1000);
digitalWrite(D5,LOW);

}