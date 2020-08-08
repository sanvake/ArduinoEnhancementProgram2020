/*
 * This Program goes throught the 
 * intitialization sequence 
 * of an LCD
 * and then prints the character 'H'
 * 
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
int pin[]={4,5,6,7,8,9,10,11,12,13};
int en = 3;
int i = 0;
void setup() {
  pinMode(en,OUTPUT);
  digitalWrite(en,LOW);
  for(i=0;i<10;i++){
    pinMode(pin[i],OUTPUT);
    digitalWrite(pin[i],LOW);
  }
  Serial.begin(9600);
                                            //clrscr
  a="0000000001";
  for(i=0;i<10;i++){
    Serial.println(a.charAt(i));
    if(a.charAt(i)=='0'){
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
                                            //initializing 8 bit, 2 line , 5/8
  a="0000111000";
  for(i=0;i<10;i++){
    Serial.println(a.charAt(i));
    if(a.charAt(i)=='0'){
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
  
                                            // display on, cursor on, blink on
  a="0000001111";
  for(i=0;i<10;i++){
    Serial.println(a.charAt(i));
    if(a.charAt(i)=='0'){
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
 
                                            //entry mode on, increament, display scroll off
  a="0000000110";
  for(i=0;i<10;i++){
    Serial.println(a.charAt(i));
    if(a.charAt(i)=='0'){
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

                                            // initialization completed

                                            //write mode

                                            //H
  a="1001001000";
  for(i=0;i<10;i++){
    Serial.println(a.charAt(i));
    if(a.charAt(i)=='0'){
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

  
}
