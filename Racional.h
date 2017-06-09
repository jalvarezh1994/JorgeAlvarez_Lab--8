#include <iostream>
#include <string>
#include "Real.h"

using namespace std;

#ifndef RACIONAL_H
#define RACIONAL_H

class Racional:public Real{
    protected:
        int Numerador;
        int Denominador;
        string tipo;
    public:
        Racional(int,int);
        Racional();
        int getNumerador();
        void setNumerador(int);

        int getDenominador();
        void setDenominador(int);

        string getTipo();
};

#endif