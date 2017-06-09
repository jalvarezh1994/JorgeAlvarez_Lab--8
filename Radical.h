#include <iostream>
#include <string>

using namespace std;

#ifndef RADICAL_H
#define RADICAL_H

class Radical:public Real{
    protected:
        int Coeficiente;
        int Indice;
        int Radicando;
    public:
        Radical(int,int,int);
        Radical();
        int getCoeficiente();
        void setCoeficiente(int);

        int getIndice();
        void setIndice(int);

        int getRadicando();
        void setRadicando(int);

};

#endif