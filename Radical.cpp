#include "Radical.h"

Radical::Radical(int Coeficiente,int Indice,int Radicando){
    this->Coeficiente=Coeficiente;
    this->Indice=Indice;
    this->Radicando=Radicando;
    tipo = "Radical";
}

Radical::Radical(){

}

void Radical::setCoeficiente(int Coeficiente){
   this-> Coeficiente=Coeficiente;
}

int Radical::getCoeficiente(){
   return Coeficiente;
}

void Radical::setIndice(int Indice){
   this-> Indice=Indice;
}

int Radical::getIndice(){
   return Indice;
}

void Radical::setRadicando(int Radicando){
   this-> Radicando=Radicando;
}

int Radical::getRadicando(){
   return Radicando;
}

string Radical::getTipo() {
	return tipo;
}