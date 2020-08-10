/*
 * This Program takes in 10 binary characters( 1 or 0 ) 
 * from the serial monitor and outputs it as digital signals
 * to the connected LCD
 * LCD connections:
 *  EN= pin 3
 *  RS= pin 4
 *  RW= pin 5
 *  D7= pin 6
 *  D6= pin 7
 *  D5= pin 8
 *  D4= pin 9
 *  D3= pin 10
 *  D2= pin 11
 *  D1= pin 12
 *  D0= PIN 13
 *  
 * The binary string corresponds to  
 * and in the order
 * RS,RW,D7,D6,D5,D4,D3,D2,D1,D0
 * 
 * You can make upto 8 custom characters on a 16x2 display and starting from 0 to 7
 * https://maxpromer.github.io/LCD-Character-Creator/
 * you can use this visualize your character and it also gives you a neat code to print the custom character
 * 
 * https://www.tinkercad.com/things/6BfkowiID1p
 * Link to Simulation on TinkerCAD.
 * Try experimenting around with the code.
 * 
 * created by Vakesan M
 * on 08 Aug 2020
 */
String a="";
int i=0;
int l=0;
int en = 3;
int pin[]={4,5,6,7,8,9,10,11,12,13};
void setup() {

Serial.begin(9600);                // opens serial port, sets data rate to 9600 bps
pinMode(en,OUTPUT);
  digitalWrite(en,LOW);            // Since there are multiple pins initialized them using a loop
  for(i=0;i<10;i++){              
    pinMode(pin[i],OUTPUT);
    digitalWrite(pin[i],LOW);
  }
}
void command(String t){
  l=t.length();
  for(i=0;i<l;i++){
    //Serial.println(t.charAt(i)); //uncomment if value has to be output to serial monitor
    if(t.charAt(i)=='0'){
      digitalWrite(pin[i],LOW);
    }
    else{
      digitalWrite(pin[i],HIGH);
    }  
  }
  delay(100);
  digitalWrite(en,HIGH);
  delay(100);
  digitalWrite(en,LOW);
  delay(100);
}

void loop() {
if (Serial.available() > 0) {

a= Serial.readString();           // read the incoming data:

//Serial.print("I received:");    //uncomment if input has to be verified

//Serial.println(a);

command(a);} 
}
