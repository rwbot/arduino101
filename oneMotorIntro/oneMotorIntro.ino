/***
 * oneMotorIntro
 * Tutorial on using one motor with a DFRobot Romeo arduino
 * @rwbot
 * v1.1
 */
 
//Motor pin configuration
int directionPin = 4;       //Pin controlling Left motor direction
int speedPin = 5;           //Pin controlling Left motor speed

void setup() {
  //Declaring the directin pin as an output
  pinMode(directionPin, OUTPUT);

  //Declaring the directin pin as an output
  pinMode(speedPin, OUTPUT);

  //The direction pin takes only 2 values, HIGH or LOW
  //This pin controls the rotation of the motor
  //HIGH can mean clockwise, while LOW is counter-clockwise
  //Or vise versa, depending on how your motor is wired
  //Assigning HIGH to the direction pin
  digitalWrite(directionPin, HIGH);
  
  //Assigning LOW to the speed pin cuts off the power
  //and without power, the motor cannot turn
  //Toggling between HIGH/LOW is how we can control
  //when we want a motor should spin and when not to.
  digitalWrite(speedPin, LOW);
}

void loop() {
  //until now, we've used digitalWrite()
  //digitalWrite() is used for digital pins
  //digital pins have only two states, either HIGH or LOW
  //analog pins have a range of values (0-255 or 0-1024)
  //the speedPin ranges from 0-255
  analogWrite(speedPin, 100);
}
