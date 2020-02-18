#include "Keyboard.h"

void setup() {
  // put your setup code here, to run once:
  Keyboard.begin();
  //pinMode(6, INPUT);
 // pinMode(4, INPUT);
  Serial.begin(9600);
}


void loop() {
  static bool hoge = false, huga = false, a = false, b = false;
  // put your main code here, to run repeatedly:
  static int num = 0, moke = 0;
  float out7 = analogRead(A7);
  float out6 = analogRead(A6);
  //float out = digitalRead(A7);
  if(out7 > 50){
    hoge = true;
    //num--;
  }

  if(out6 > 50){
    a = true;
    //num--;
  }
  
  if (hoge){
    huga = true;
  }
  if(a){
    b = true;
  }
  if(num == 50){
    Serial.println(huga);
    if (huga){
      Keyboard.print('1');
    }
    if (a){
      Keyboard.print('2');
    }
    huga = false;
    hoge = false;
    num = 0;
    moke = 0;
    a = 0;
    b = 0;
  }/*else if(moke == 50){
    Serial.println(huga ? 2 : 0);
    //Keyboard.print('1');
    huga = false;
    hoge = false;
    num = 0;
    moke = 0;
  }*/
 
  num++;
  moke++;
  //Serial.println(out);
}


/*
void loop() {
  // put your main code here, to run repeatedly:
  static int num = 0, hoge = 1;
  float out = digitalRead(A7);
  if(num == 1000){
    num = 0;
    Serial.println(hoge);
    hoge = 1;
  }else{
    num++;
  }
  if(out == 0){
    hoge = 0;
  }
}*/
