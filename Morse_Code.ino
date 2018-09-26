/*
  Morse Code

  Uses LED blinking to display morse code.
  Dots and pauses between a Dot or a Dash are 240ms.
  Dashes and pause beween letters are 3*240ms.
  Pause between words is 7*240ms.
  Pin 9 is used as output.

  The following code displays "SOS" in morse code through an LED.

*/

int led = 9;
int uTime = 240; //one time unit is 240ms
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin led as an output.
  pinMode(led, OUTPUT);
}

void loop() {
  digitalWrite(led, HIGH);   //start of "S"
  delay(uTime);                       
  digitalWrite(led, LOW);   
  delay(uTime);              
  digitalWrite(led, HIGH);
  delay(uTime);
  digitalWrite(led, LOW);
  delay(uTime);
  digitalWrite(led, HIGH);
  delay(uTime);
  digitalWrite(led, LOW);
  delay(3 * uTime);           //end of "S"

  digitalWrite(led, HIGH);    //start of "O"
  delay(3 * uTime);
  digitalWrite(led, LOW);
  delay(uTime);
  digitalWrite(led, HIGH);
  delay(3 * uTime);
  digitalWrite(led, LOW);
  delay(uTime);
  digitalWrite(led, HIGH);
  delay(3* uTime);
  digitalWrite(led, LOW);
  delay(3 * uTime);           //end of "O"

  digitalWrite(led, HIGH);    //start of "S
  delay(uTime);                       
  digitalWrite(led, LOW);   
  delay(uTime);              
  digitalWrite(led, HIGH);
  delay(uTime);
  digitalWrite(led, LOW);
  delay(uTime);
  digitalWrite(led, HIGH);
  delay(uTime);
  digitalWrite(led, LOW);     
  delay(7 * uTime);           //end of "S"

  
}
