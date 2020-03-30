/*
  Showing number 0-9 on a Common Anode 7-segment LED display
  Displays the numbers 0-9 on the display, with one second inbetween.
    A
   ---
F |   | B
  | G |
   ---
E |   | C
  |   |
   ---
    D
  This example code is in the public domain.
 */
#include "Arduino.h";
#include "Clock.h";
#include "Cronometro.h";

const int buttonPin = 13;
const int buttonPin2 = 1;

int pinA = 2;
int pinB = 3;
int pinC = 4;
int pinD = 5;
int pinE = 6;
int pinF = 7;
int pinG = 8;
int D1 = 9;
int D2 = 10;
int D3 = 11;
int D4 = 12;

// Cronometro //

Cronometro hi;
int cont = 0;
bool start = false;
bool stoped = true;
int cronoMode = 0;
int buttonStatus1 = 0;

// Relógio //

Clock oi;
int relog = 0;
int clockMode = 1;
int buttonStatus2 = 0;
bool startR = true;
bool stopR = false;

void setup() { 

  oi.tempoGet(7,0,8,1);
  
  pinMode(pinA, OUTPUT);     
  pinMode(pinB, OUTPUT);     
  pinMode(pinC, OUTPUT);     
  pinMode(pinD, OUTPUT);     
  pinMode(pinE, OUTPUT);     
  pinMode(pinF, OUTPUT);     
  pinMode(pinG, OUTPUT);   
  pinMode(D1, OUTPUT);  
  pinMode(D2, OUTPUT);  
  pinMode(D3, OUTPUT);  
  pinMode(D4, OUTPUT);

   
}

void loop() {

  buttonStatus1 = digitalRead(buttonPin);
  buttonStatus2 = digitalRead(buttonPin2);
  
  // Codigo para começar e parar o Cronometro //

  if(buttonStatus1 == 1 and stoped == true and clockMode == 0){

    stoped = false;
    start = true;
    cronoMode = 1;
    
  }else if(buttonStatus1 == 1 and start == true and clockMode == 0){

    stoped = true;
    start = false;
    cronoMode = 0;
    
  }

  // Fim do codigo //

  // Ligar e desligar o modo Relógio //

  if(buttonStatus2 == 1 and stopR == true){

    stopR = false;
    startR = true;
    clockMode = 1;
    
  }else if(buttonStatus2 == 1 and startR == true){

    stopR = true;
    startR = false;
    clockMode = 0;
    
  }
  

  // Fim do Codigo //

  // Displays //
  
  digitalWrite(D1, LOW);
  digitalWrite(D2, LOW);
  digitalWrite(D3, LOW);
  digitalWrite(D4, HIGH); 

    digitalWrite(pinA, oi.a1);   
    digitalWrite(pinB, oi.b1);   
    digitalWrite(pinC, oi.c1);   
    digitalWrite(pinD, oi.d1);   
    digitalWrite(pinE, oi.e1);   
    digitalWrite(pinF, oi.f1);   
    digitalWrite(pinG, oi.g1);

  delay(1);

  digitalWrite(D1, LOW);
  digitalWrite(D2, LOW);
  digitalWrite(D3, HIGH);
  digitalWrite(D4, LOW); 

    digitalWrite(pinA, oi.a2);   
    digitalWrite(pinB, oi.b2);   
    digitalWrite(pinC, oi.c2);   
    digitalWrite(pinD, oi.d2);   
    digitalWrite(pinE, oi.e2);   
    digitalWrite(pinF, oi.f2);   
    digitalWrite(pinG, oi.g2);

     
  delay(1);

  digitalWrite(D1, LOW);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, LOW);
  digitalWrite(D4, LOW); 


    digitalWrite(pinA, oi.a3);   
    digitalWrite(pinB, oi.b3);   
    digitalWrite(pinC, oi.c3);   
    digitalWrite(pinD, oi.d3);   
    digitalWrite(pinE, oi.e3);   
    digitalWrite(pinF, oi.f3);   
    digitalWrite(pinG, oi.g3);
     
  delay(1);

  digitalWrite(D1, HIGH);
  digitalWrite(D2, LOW);
  digitalWrite(D3, LOW);
  digitalWrite(D4, LOW); 

    digitalWrite(pinA, oi.a4);   
    digitalWrite(pinB, oi.b4);   
    digitalWrite(pinC, oi.c4);   
    digitalWrite(pinD, oi.d4);   
    digitalWrite(pinE, oi.e4);   
    digitalWrite(pinF, oi.f4);   
    digitalWrite(pinG, oi.g4);

  // Fim dos Displays //

    relog++;
    if(relog == 3000){
      relog = 0;
      oi.choose(clockMode, cronoMode);
    }
  
  delay(1.0);
 
}
