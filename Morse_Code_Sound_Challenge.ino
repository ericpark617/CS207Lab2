/*
  Morse Code Sound

  Uses pin blinking to display morse code.
  Dots and pauses between a Dot or a Dash are 240ms.
  Dashes and pause beween letters are 3*240ms.
  Pause between words is 7*240ms.
  Pin 9 is used as output.

  The following code outputs "SOS" in morse code with sound.

*/
int pin = 9;
int uTime = 240;
unsigned int frequency = 250; //frequency of output sound

void setup() {
  // initialize digital pin pin as an output.
  pinMode(pin, OUTPUT);
}

void loop() {
  tone(pin, frequency);   //start of "S"
  delay(uTime);
  noTone(pin);
  delay(uTime);
  tone(pin, frequency);
  delay(uTime);
  noTone(pin);
  delay(uTime);
  tone(pin, frequency);
  delay(uTime);           //end of "S"
  noTone(pin);            //delay between letters
  delay(3 * uTime);
  
  tone(pin, frequency);   //start of "O"
  delay(3 * uTime);
  noTone(pin);
  delay(uTime);
  tone(pin, frequency);
  delay(3 * uTime);
  noTone(pin);
  delay(uTime);
  tone(pin, frequency);
  delay(3 * uTime);       //end of "O"
  noTone(pin);            //delay between letters
  delay(3 * uTime);

  tone(pin, frequency);   //start of "S"
  delay(uTime);
  noTone(pin);
  delay(uTime);
  tone(pin, frequency);
  delay(uTime);
  noTone(pin);
  delay(uTime);
  tone(pin, frequency);
  delay(uTime);            //end of "S"
  noTone(pin);            //delay between words
  delay(7 * uTime);
  
}
