#include <iostream>
#include <string>
#include "Real.h"

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

        string operator +(Radical &r1){
            string respuesta="";
            int indice,radicando,coeficiente;
            if (this->getRadicando()==r1.getRadicando()&&this->getIndice()==r1.getIndice()){
                respuesta+='('+to_string(this->getCoeficiente()+r1.getCoeficiente())+')'+'('+to_string(this->getRadicando())
                +")^(1/"+to_string(this->getRadicando());
            }else{
                respuesta+='('+to_string(this->getCoeficiente());
            }
            return respuesta;
        }


};

#endif