#define buzzer 9 //connect Buzzer to digital pin9
void setup() {                
 // initialize the digital pin9 as an output.
 pinMode(buzzer, OUTPUT);     
}
void loop() {
 digitalWrite(buzzer, HIGH);   // set the Buzzer on
 delay(500);                  // for 500ms
 digitalWrite(buzzer, LOW);   // set the Buzzer off
 delay(500);
}

