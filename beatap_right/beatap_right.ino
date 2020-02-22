#include "Keyboard.h"

void setup() {
  // put your setup code here, to run once:
  Keyboard.begin();
  Serial.begin(9600);
}


void loop() {
  static bool ko_flag = false, kusuri_flag = false, oya_flag = false, hitosasi_flag = false, naka_flag = false;
  float koyubi = analogRead(A7);
  float kusuriyubi = analogRead(A9);
  float oyayubi = analogRead(A2);
  float hitosasiyubi = analogRead(A3);
  float nakayubi = analogRead(A1);

 if(ko_flag == false && koyubi > 100){
     ko_flag = true;
     Keyboard.press('p');
  }else if(ko_flag == true && koyubi <= 100){
    ko_flag = false;
    Keyboard.release('p');
  }

  if(kusuri_flag == false && kusuriyubi > 100){
     kusuri_flag = true;
     Keyboard.press('o');
  }else if(kusuri_flag == true && kusuriyubi <= 100){
    kusuri_flag = false;
    Keyboard.release('o');
  }

  if(naka_flag == false && nakayubi > 100){
     naka_flag = true;
     Keyboard.press('i');
  }else if(naka_flag == true && nakayubi <= 100){
    naka_flag = false;
    Keyboard.release('i');
  }

  if(hitosasi_flag == false && hitosasiyubi > 100){
     hitosasi_flag = true;
     Keyboard.press('u');
  }else if(hitosasi_flag == true && hitosasiyubi <= 100){
    hitosasi_flag = false;
    Keyboard.release('u');
  }

  if(oya_flag == false && oyayubi > 100){
     oya_flag = true;
     Keyboard.press('y');
  }else if(oya_flag == true && oyayubi <= 100){
    oya_flag = false;
    Keyboard.release('y');
  }

  
}
