#include "Racional.h"

Racional::Racional(int Numerador,int Denominador){
    this->Numerador=Numerador;
    this->Denominador=Denominador;
}

Racional::Racional(){

}

void Racional::setNumerador(int Numerador){
   this-> Numerador=Numerador;
}

int Racional::getNumerador(){
   return Numerador;
}

void Racional::setDenominador(int Denominador){
   this-> Denominador=Denominador;
}

int Racional::getDenominador(){
   return Denominador;
}
