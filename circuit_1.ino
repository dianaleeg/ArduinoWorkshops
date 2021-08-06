// BLINKING LED - CIRCUIT 1

  int pin = 9; // you can change this pin to whichever pin you'd like as long as you move the wire to the same pin

void setup() {
  // put your setup code here, to run once:
  pinMode(pin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(pin, HIGH); // HIGH means ON
  delay(500); // time is in milliseconds
  digitalWrite(pin, LOW); // LOW means OFF
  delay(500);

}
