#include "Keyboard.h"

void setup() {
  // put your setup code here, to run once:
  Keyboard.begin();
  Serial.begin(9600);
}


void loop() {
  static bool ko_flag = false, kusuri_flag = false, oya_flag = false, hitosasi_flag = false, naka_flag = false;
  float koyubi = analogRead(A3);
  float kusuriyubi = analogRead(A0);
  float oyayubi = analogRead(A7);
  float hitosasiyubi = analogRead(A9);
  float nakayubi = analogRead(A10);

  if(ko_flag == false && koyubi > 100){
     ko_flag = true;
     Keyboard.press('q');
  }else if(ko_flag == true && koyubi <= 100){
    ko_flag = false;
    Keyboard.release('q');
  }

  if(kusuri_flag == false && kusuriyubi > 100){
     kusuri_flag = true;
     Keyboard.press('w');
  }else if(kusuri_flag == true && kusuriyubi <= 100){
    kusuri_flag = false;
    Keyboard.release('w');
  }

  if(naka_flag == false && nakayubi > 100){
     naka_flag = true;
     Keyboard.press('e');
  }else if(naka_flag == true && nakayubi <= 100){
    naka_flag = false;
    Keyboard.release('e');
  }

  if(hitosasi_flag == false && hitosasiyubi > 100){
     hitosasi_flag = true;
     Keyboard.press('r');
  }else if(hitosasi_flag == true && hitosasiyubi <= 100){
    hitosasi_flag = false;
    Keyboard.release('r');
  }

  if(oya_flag == false && oyayubi > 100){
     oya_flag = true;
     Keyboard.press('t');
  }else if(oya_flag == true && oyayubi <= 100){
    oya_flag = false;
    Keyboard.release('t');
  }


  
}
