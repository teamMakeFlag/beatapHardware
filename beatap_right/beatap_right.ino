#include "Keyboard.h"
#define DELAY 200
#define KANDO 30
void setup() {
  // put your setup code here, to run once:
  Keyboard.begin();
  Serial.begin(9600);
}


void loop() {
  static bool ko_flag = false, kusuri_flag = false, oya_flag = false, hitosasi_flag = false, naka_flag = false;
  static int ko_count = 0, kusuri_count = 0, oya_count = 0, hitosasi_count = 0, naka_count = 0;
  float koyubi = analogRead(A7);
  float kusuriyubi = analogRead(A9);
  float oyayubi = analogRead(A2);
  float hitosasiyubi = analogRead(A3);
  float nakayubi = analogRead(A1);

   if(ko_count < DELAY){
    ko_count++;
  }
  if(kusuri_count < DELAY){
    kusuri_count++;
  }
  if(naka_count < DELAY){
    naka_count++;
  }
  if(hitosasi_count < DELAY){
    hitosasi_count++;
  }
  if(oya_count < DELAY){
    oya_count++;
  }
 
  if(ko_flag == false && koyubi > KANDO && ko_count == DELAY){
     ko_flag = true;
     Keyboard.press('p');
  }else if(ko_flag == true && koyubi <= KANDO){
    ko_flag = false;
    ko_count = 0;
    Keyboard.release('p');
  }

  if(kusuri_flag == false && kusuriyubi > KANDO && kusuri_count == DELAY){
     kusuri_flag = true;
     Keyboard.press('o');
  }else if(kusuri_flag == true && kusuriyubi <= KANDO){
    kusuri_flag = false;
    kusuri_count = 0;
    Keyboard.release('o');
  }

  if(naka_flag == false && nakayubi > KANDO && naka_count == DELAY){
     naka_flag = true;
     Keyboard.press('i');
  }else if(naka_flag == true && nakayubi <= KANDO){
    naka_flag = false;
    naka_count = 0;
    Keyboard.release('i');
  }

  if(hitosasi_flag == false && hitosasiyubi > KANDO && hitosasi_count == DELAY){
     hitosasi_flag = true;
     Keyboard.press('u');
  }else if(hitosasi_flag == true && hitosasiyubi <= KANDO){
    hitosasi_flag = false;
    hitosasi_count = 0;
    Keyboard.release('u');
  }

  if(oya_flag == false && oyayubi > KANDO && oya_count == DELAY){
     oya_flag = true;
     Keyboard.press('y');
  }else if(oya_flag == true && oyayubi <= KANDO){
    oya_flag = false;
    oya_count = 0;
    Keyboard.release('y');
  }

  
}
