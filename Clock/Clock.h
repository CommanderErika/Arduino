#ifndef CLOCK_H_INCLUDED
#define CLOCK_H_INCLUDED

#include "Arduino.h"

class Clock {
  // Variables //
  private:
    int mU = 0; int mD = 0; int hU = 0; int hD = 0;
    int contU = 0; int contD = 0; int contC = 0; int contM = 0;
  public:
    int a1 = LOW; int b1 = LOW; int c1 = LOW; int d1 = LOW; int e1 = LOW; int f1 = LOW; int g1 = HIGH;
    int a2 = LOW; int b2 = LOW; int c2 = LOW; int d2 = LOW; int e2 = LOW; int f2 = LOW; int g2 = HIGH;
    int a3 = LOW; int b3 = LOW; int c3 = LOW; int d3 = LOW; int e3 = LOW; int f3 = LOW; int g3 = HIGH;
    int a4 = LOW; int b4 = LOW; int c4 = LOW; int d4 = LOW; int e4 = LOW; int f4 = LOW; int g4 = HIGH;
  // Methods //
  private:
    void minutoU(){

        if(mU == 0){a1 = LOW, b1 = LOW, c1 = LOW, d1 = LOW, e1 = LOW, f1 = LOW, g1 = HIGH;}
        else if(mU == 1){a1 = HIGH, b1 = LOW, c1 = LOW, d1 = HIGH, e1 = HIGH, f1 = HIGH, g1 = HIGH;}
        else if(mU == 2){a1 = LOW, b1 = LOW, c1 = HIGH, d1 = LOW, e1 = LOW, f1 = HIGH, g1 = LOW;}
        else if(mU == 3){a1 = LOW, b1 = LOW, c1 = LOW, d1 = LOW, e1 = HIGH, f1 = HIGH, g1 = LOW;}
        else if(mU == 4){a1 = HIGH, b1 = LOW, c1 = LOW, d1 = HIGH, e1 = HIGH, f1 = LOW, g1 = LOW;}
        else if(mU == 5){a1 = LOW, b1 = HIGH, c1 = LOW, d1 = LOW, e1 = HIGH, f1 = LOW, g1 = LOW;}
        else if(mU == 6){a1 = HIGH, b1 = HIGH, c1 = LOW, d1 = LOW, e1 = LOW, f1 = LOW, g1 = LOW;}
        else if(mU == 7){a1 = LOW, b1 = LOW, c1 = LOW, d1 = HIGH, e1 = HIGH, f1 = HIGH, g1 = HIGH;}
        else if(mU == 8){a1 = LOW, b1 = LOW, c1 = LOW, d1 = LOW, e1 = LOW, f1 = LOW, g1 = LOW;}
        else if(mU == 9){a1 = LOW; b1 = LOW; c1 = LOW; d1 = HIGH; e1 = HIGH; f1 = LOW; g1 = LOW;}

      };
    void minutoD(){

        if(mD == 0){a2 = LOW, b2 = LOW, c2 = LOW, d2 = LOW, e2 = LOW, f2 = LOW, g2 = HIGH;}
        else if(mD == 1){a2 = HIGH, b2 = LOW, c2 = LOW, d2 = HIGH, e2 = HIGH, f2 = HIGH, g2 = HIGH;}
        else if(mD == 2){a2 = LOW, b2 = LOW, c2 = HIGH, d2 = LOW, e2 = LOW, f2 = HIGH, g2 = LOW;}
        else if(mD == 3){a2 = LOW, b2 = LOW, c2 = LOW, d2 = LOW, e2 = HIGH, f2 = HIGH, g2 = LOW;}
        else if(mD == 4){a2 = HIGH, b2 = LOW, c2 = LOW, d2 = HIGH, e2 = HIGH, f2 = LOW, g2 = LOW;}
        else if(mD == 5){a2 = LOW, b2 = HIGH, c2 = LOW, d2 = LOW, e2 = HIGH, f2 = LOW, g2 = LOW;}
        else if(mD == 6){a2 = HIGH, b2 = HIGH, c2 = LOW, d2 = LOW, e2 = LOW, f2 = LOW, g2 = LOW;}
        else if(mD == 7){a2 = LOW, b2 = LOW, c2 = LOW, d2 = HIGH, e2 = HIGH, f2 = HIGH, g2 = HIGH;}
        else if(mD == 8){a2 = LOW, b2 = LOW, c2 = LOW, d2 = LOW, e2 = LOW, f2 = LOW, g2 = LOW;}
        else if(mD == 9){a2 = LOW; b2 = LOW; c2 = LOW; d2 = HIGH; e2 = HIGH; f2 = LOW; g2 = LOW;}

      };
    void horaU(){

        if(hU == 0){a3 = LOW, b3 = LOW, c3 = LOW, d3 = LOW, e3 = LOW, f3 = LOW, g3 = HIGH;}
        else if(hU == 1){a3 = HIGH, b3 = LOW, c3 = LOW, d3 = HIGH, e3 = HIGH, f3 = HIGH, g3 = HIGH;}
        else if(hU == 2){a3 = LOW, b3 = LOW, c3 = HIGH, d3 = LOW, e3 = LOW, f3 = HIGH, g3 = LOW;}
        else if(hU == 3){a3 = LOW, b3 = LOW, c3 = LOW, d3 = LOW, e3 = HIGH, f3 = HIGH, g3 = LOW;}
        else if(hU == 4){a3 = HIGH, b3 = LOW, c3 = LOW, d3 = HIGH, e3 = HIGH, f3 = LOW, g3 = LOW;}
        else if(hU == 5){a3 = LOW, b3 = HIGH, c3 = LOW, d3 = LOW, e3 = HIGH, f3 = LOW, g3 = LOW;}
        else if(hU == 6){a3 = HIGH, b3 = HIGH, c3 = LOW, d3 = LOW, e3 = LOW, f3 = LOW, g3 = LOW;}
        else if(hU == 7){a3 = LOW, b3 = LOW, c3 = LOW, d3 = HIGH, e3 = HIGH, f3 = HIGH, g3 = HIGH;}
        else if(hU == 8){a3 = LOW, b3 = LOW, c3 = LOW, d3 = LOW, e3 = LOW, f3 = LOW, g3 = LOW;}
        else if(hU == 9){a3 = LOW; b3 = LOW; c3 = LOW; d3 = HIGH; e3 = HIGH; f3 = LOW; g3 = LOW;}

      };
    void horaD(){

        if(hD == 0){a4 = LOW, b4 = LOW, c4 = LOW, d4 = LOW, e4 = LOW, f4 = LOW, g4 = HIGH;}
        else if(hD == 1){a4 = HIGH, b4 = LOW, c4 = LOW, d4 = HIGH, e4 = HIGH, f4 = HIGH, g4 = HIGH;}
        else if(hD == 2){a4 = LOW, b4 = LOW, c4 = HIGH, d4 = LOW, e4 = LOW, f4 = HIGH, g4 = LOW;}
        else if(hD == 3){a4 = LOW, b4 = LOW, c4 = LOW, d4 = LOW, e4 = HIGH, f4 = HIGH, g4 = LOW;}
        else if(hD == 4){a4 = HIGH, b4 = LOW, c4 = LOW, d4 = HIGH, e4 = HIGH, f4 = LOW, g4 = LOW;}
        else if(hD == 5){a4 = LOW, b4 = HIGH, c4 = LOW, d4 = LOW, e4 = HIGH, f4 = LOW, g4 = LOW;}
        else if(hD == 6){a4 = HIGH, b4 = HIGH, c4 = LOW, d4 = LOW, e4 = LOW, f4 = LOW, g4 = LOW;}
        else if(hD == 7){a4 = LOW, b4 = LOW, c4 = LOW, d4 = HIGH, e4 = HIGH, f4 = HIGH, g4 = HIGH;}
        else if(hD == 8){a4 = LOW, b4 = LOW, c4 = LOW, d4 = LOW, e4 = LOW, f4 = LOW, g4 = LOW;}
        else if(hD == 9){a4 = LOW; b4 = LOW; c4 = LOW; d4 = HIGH; e4 = HIGH; f4 = LOW; g4 = LOW;}

      };
    void cronoU(){

        if(contU == 0){a1 = LOW, b1 = LOW, c1 = LOW, d1 = LOW, e1 = LOW, f1 = LOW, g1 = HIGH;}
        else if(contU == 1){a1 = HIGH, b1 = LOW, c1 = LOW, d1 = HIGH, e1 = HIGH, f1 = HIGH, g1 = HIGH;}
        else if(contU == 2){a1 = LOW, b1 = LOW, c1 = HIGH, d1 = LOW, e1 = LOW, f1 = HIGH, g1 = LOW;}
        else if(contU == 3){a1 = LOW, b1 = LOW, c1 = LOW, d1 = LOW, e1 = HIGH, f1 = HIGH, g1 = LOW;}
        else if(contU == 4){a1 = HIGH, b1 = LOW, c1 = LOW, d1 = HIGH, e1 = HIGH, f1 = LOW, g1 = LOW;}
        else if(contU == 5){a1 = LOW, b1 = HIGH, c1 = LOW, d1 = LOW, e1 = HIGH, f1 = LOW, g1 = LOW;}
        else if(contU == 6){a1 = HIGH, b1 = HIGH, c1 = LOW, d1 = LOW, e1 = LOW, f1 = LOW, g1 = LOW;}
        else if(contU == 7){a1 = LOW, b1 = LOW, c1 = LOW, d1 = HIGH, e1 = HIGH, f1 = HIGH, g1 = HIGH;}
        else if(contU == 8){a1 = LOW, b1 = LOW, c1 = LOW, d1 = LOW, e1 = LOW, f1 = LOW, g1 = LOW;}
        else if(contU == 9){a1 = LOW; b1 = LOW; c1 = LOW; d1 = HIGH; e1 = HIGH; f1 = LOW; g1 = LOW;}

      };
    void cronoD(){

        if(contD == 0){a2 = LOW, b2 = LOW, c2 = LOW, d2 = LOW, e2 = LOW, f2 = LOW, g2 = HIGH;}
        else if(contD == 1){a2 = HIGH, b2 = LOW, c2 = LOW, d2 = HIGH, e2 = HIGH, f2 = HIGH, g2 = HIGH;}
        else if(contD == 2){a2 = LOW, b2 = LOW, c2 = HIGH, d2 = LOW, e2 = LOW, f2 = HIGH, g2 = LOW;}
        else if(contD == 3){a2 = LOW, b2 = LOW, c2 = LOW, d2 = LOW, e2 = HIGH, f2 = HIGH, g2 = LOW;}
        else if(contD == 4){a2 = HIGH, b2 = LOW, c2 = LOW, d2 = HIGH, e2 = HIGH, f2 = LOW, g2 = LOW;}
        else if(contD == 5){a2 = LOW, b2 = HIGH, c2 = LOW, d2 = LOW, e2 = HIGH, f2 = LOW, g2 = LOW;}
        else if(contD == 6){a2 = HIGH, b2 = HIGH, c2 = LOW, d2 = LOW, e2 = LOW, f2 = LOW, g2 = LOW;}
        else if(contD == 7){a2 = LOW, b2 = LOW, c2 = LOW, d2 = HIGH, e2 = HIGH, f2 = HIGH, g2 = HIGH;}
        else if(contD == 8){a2 = LOW, b2 = LOW, c2 = LOW, d2 = LOW, e2 = LOW, f2 = LOW, g2 = LOW;}
        else if(contD == 9){a2 = LOW; b2 = LOW; c2 = LOW; d2 = HIGH; e2 = HIGH; f2 = LOW; g2 = LOW;}

      };
    void cronoC(){

        if(contC == 0){a3 = LOW, b3 = LOW, c3 = LOW, d3 = LOW, e3 = LOW, f3 = LOW, g3 = HIGH;}
        else if(contC == 1){a3 = HIGH, b3 = LOW, c3 = LOW, d3 = HIGH, e3 = HIGH, f3 = HIGH, g3 = HIGH;}
        else if(contC == 2){a3 = LOW, b3 = LOW, c3 = HIGH, d3 = LOW, e3 = LOW, f3 = HIGH, g3 = LOW;}
        else if(contC == 3){a3 = LOW, b3 = LOW, c3 = LOW, d3 = LOW, e3 = HIGH, f3 = HIGH, g3 = LOW;}
        else if(contC == 4){a3 = HIGH, b3 = LOW, c3 = LOW, d3 = HIGH, e3 = HIGH, f3 = LOW, g3 = LOW;}
        else if(contC == 5){a3 = LOW, b3 = HIGH, c3 = LOW, d3 = LOW, e3 = HIGH, f3 = LOW, g3 = LOW;}
        else if(contC == 6){a3 = HIGH, b3 = HIGH, c3 = LOW, d3 = LOW, e3 = LOW, f3 = LOW, g3 = LOW;}
        else if(contC == 7){a3 = LOW, b3 = LOW, c3 = LOW, d3 = HIGH, e3 = HIGH, f3 = HIGH, g3 = HIGH;}
        else if(contC == 8){a3 = LOW, b3 = LOW, c3 = LOW, d3 = LOW, e3 = LOW, f3 = LOW, g3 = LOW;}
        else if(contC == 9){a3 = LOW; b3 = LOW; c3 = LOW; d3 = HIGH; e3 = HIGH; f3 = LOW; g3 = LOW;}

      };
    void cronoM(){

        if(contM == 0){a4 = LOW, b4 = LOW, c4 = LOW, d4 = LOW, e4 = LOW, f4 = LOW, g4 = HIGH;}
        else if(contM == 1){a4 = HIGH, b4 = LOW, c4 = LOW, d4 = HIGH, e4 = HIGH, f4 = HIGH, g4 = HIGH;}
        else if(contM == 2){a4 = LOW, b4 = LOW, c4 = HIGH, d4 = LOW, e4 = LOW, f4 = HIGH, g4 = LOW;}
        else if(contM == 3){a4 = LOW, b4 = LOW, c4 = LOW, d4 = LOW, e4 = HIGH, f4 = HIGH, g4 = LOW;}
        else if(contM == 4){a4 = HIGH, b4 = LOW, c4 = LOW, d4 = HIGH, e4 = HIGH, f4 = LOW, g4 = LOW;}
        else if(contM == 5){a4 = LOW, b4 = HIGH, c4 = LOW, d4 = LOW, e4 = HIGH, f4 = LOW, g4 = LOW;}
        else if(contM == 6){a4 = HIGH, b4 = HIGH, c4 = LOW, d4 = LOW, e4 = LOW, f4 = LOW, g4 = LOW;}
        else if(contM == 7){a4 = LOW, b4 = LOW, c4 = LOW, d4 = HIGH, e4 = HIGH, f4 = HIGH, g4 = HIGH;}
        else if(contM == 8){a4 = LOW, b4 = LOW, c4 = LOW, d4 = LOW, e4 = LOW, f4 = LOW, g4 = LOW;}
        else if(contM == 9){a4 = LOW; b4 = LOW; c4 = LOW; d4 = HIGH; e4 = HIGH; f4 = LOW; g4 = LOW;}

      };
    void crono(bool boolCrono){

      if(boolCrono == 1){
        if(contM == 5 && contC == 9 && contD == 5 && contU >9){contU = 0; contD = 0; contC = 0; contM = 0;}
        else if(contC == 9 && contD == 5 && contU >9){contU = 0; contD = 0; contC = 0; contM++;}
        else if(contD == 5 && contU > 9){contD = 0; contU = 0; contC++;}
        else if(contU > 9){contU = 0; contD++;}
        else{contU++;}
      }

      // A hora precisa ficar passando enquanto tá no modo cornometro //

      if(mU > 9){mU = 0; mD++;}
      else if(mD > 5){mD = 0; hU++;}
      else if(hU > 9){hU = 0; hD++;}
      else if(hD == 2 and hU == 4){hD = 0; hU = 0;}
      else{mU++;}

      cronoU();
      cronoD();
      cronoC();
      cronoM();


      };
    void tempo(){

      if(mU > 9){mU = 0; mD++;}
      else if(mD > 5){mD = 0; hU++;}
      else if(hU > 9){hU = 0; hD++;}
      else if(hD == 2 and hU == 4){hD = 0; hU = 0;}
      else{mU++;}

      minutoU();
      minutoD();
      horaU();
      horaD();
    }
  public:
    void choose(bool _bool, bool boolCrono){

        if(_bool == 1){
            tempo();
            contU = 0; contD = 0; contC = 0; contM = 0;
        }else{
            crono(boolCrono);
        }

    }
    void tempoGet(int _mU, int _mD, int _hU, int _hD){
        mU = _mU;
        mD = _mD;
        hU = _hU;
        hD = _hD;

    }
};

#endif // CLOCK_H_INCLUDED
