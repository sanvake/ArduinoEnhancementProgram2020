/*
 * This Program is used to illustrate
 * the use of Interrupts
 * 
 * 2 buttons that are pulled down are connected to pins 5 and 2
 * 
 * Interrupt pins in Arduino UNO:
 *  pin 2,
 *  pin 3.
 *  
 * Types of Triggers:
 *  LOW - Triggered when the pin is low
 *  HIGH - Triggered when the pin is high
 *  RISING - Is triggered when the pin goes from low to high, i.e. at the rising edge
 *  FALLING - Is triggered when the pin goes from high to low, i.e. at the falling edge
 *  CHANGE - Is triggered when the pin goes either from low to high or from high to low, i.e. at the rising edge or the falling edge
 * 
 * created by Vakesan M
 * on 08 Aug 2020
 */
const byte buttonPin = 5;
const byte interruptPin = 2;
int c;
volatile int counter;   //volatile keyword tells the 
int d = 100;
void setup() {
  Serial.begin(9600);
  pinMode(buttonPin, INPUT);
  pinMode(interruptPin, INPUT);

  //interupt command 
  attachInterrupt(digitalPinToInterrupt(interruptPin), count, RISING); 
  //parameters (digitalPinToInterrupt(PIN 2 or 3), Interrupt_service_routine(nameof_flagfunction), trigger)

  
  c=0;
  counter=0;
}

void loop() {
  if(digitalRead(buttonPin)==HIGH){
    c++;
  }
  Serial.print(c);
  Serial.print(" ");
  Serial.println(counter);
  delay(d);
}

void count() {
  counter++;      //ISR
}
