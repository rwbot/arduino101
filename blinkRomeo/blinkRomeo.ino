/*Blink - Turns on an LED on for one second, 
then off for one second, repeatedly. */

// Pin 13 has an LED connected; Here we declare it as a variable
// int refers to the type of variable, ie. integer
int led = 13;

// the setup function runs ONCE the board is powered/restarted: 
void setup() {
// initialize the pin to be used for output signals
  pinMode(led, OUTPUT); 
}

// the loop routine runs over and over again forever: 
void loop() {

  // HIGH, LOW are terms used to describe a pin's state
  // HIGH means the pin is given 5V and is being used
  digitalWrite(led, HIGH); // turn the LED
  
  // the delay function tell's the board to pause all processes
  // for the given time in milliseconds 
  // 1000ms = 1s
  delay(1000); 

  // turn the LED off by making the voltage LOW
  // LOW means the pin receives 0V
  digitalWrite(led, LOW);  
  
  delay(1000); // wait for a second
}
