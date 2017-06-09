#include <iostream>
#include <string>

using namespace std;

#ifndef RACIONAL_H
#define RACIONAL_H

class Racional:public Real{
    protected:
        int Numerador;
        int Denominador;
    public:
        Racional(int,int);
        Racional();
        int getNumerador();
        void setNumerador(int);

        int getDenominador();
        void setDenominador(int);

};

#endif