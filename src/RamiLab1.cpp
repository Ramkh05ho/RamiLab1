/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "/Users/ramikhosho/RamiLab1/RamiLab1/src/RamiLab1.ino"
void setup();
void loop();
#line 1 "/Users/ramikhosho/RamiLab1/RamiLab1/src/RamiLab1.ino"
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