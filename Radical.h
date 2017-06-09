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
        string tipo;
        
    public:
        Radical(int,int,int);
        Radical();
        int getCoeficiente();
        void setCoeficiente(int);

        int getIndice();
        void setIndice(int);

        int getRadicando();
        void setRadicando(int);

        string getTipo();

        string operator +(Radical &r1){
            string respuesta="";
            int indice,radicando,coeficiente;
            if (this->getRadicando()==r1.getRadicando()&&this->getIndice()==r1.getIndice()){
                respuesta+='('+to_string(this->getCoeficiente()+r1.getCoeficiente())+')'+'('+to_string(this->getRadicando())
                +")^(1/"+to_string(this->getIndice())+')';
            }else{
                respuesta+=
                '('+to_string(this->getCoeficiente())+")("+to_string(this->getRadicando())+")^(1/"+to_string(this->getIndice())+')'+'+'+
                '('+to_string(r1.getCoeficiente())+")("+to_string(r1.getRadicando())+")^(1/"+to_string(r1.getIndice())+')';
            }
            return respuesta;
        }

        string operator -(Radical &r1){
            string respuesta="";
            int indice,radicando,coeficiente;
            if (this->getRadicando()==r1.getRadicando()&&this->getIndice()==r1.getIndice()){
                respuesta+='('+to_string(this->getCoeficiente()-r1.getCoeficiente())+')'+'('+to_string(this->getRadicando())
                +")^(1/"+to_string(this->getIndice())+')';
            }else{
                respuesta+=
                '('+to_string(this->getCoeficiente())+")("+to_string(this->getRadicando())+")^(1/"+to_string(this->getIndice())+')'+'-'+
                '('+to_string(r1.getCoeficiente())+")("+to_string(r1.getRadicando())+")^(1/"+to_string(r1.getIndice())+')';
            }
            return respuesta;
        }        

        string operator *(Radical &r1){
            string respuesta="";
            if (this->getRadicando()==r1.getRadicando()){
                respuesta+='('+to_string(this->getCoeficiente()*r1.getCoeficiente())+")("+
                to_string(this->getRadicando())+")^(1/"+to_string(this->getIndice()*r1.getIndice())+')';
            }else{
                respuesta+='('+to_string(this->getCoeficiente()*r1.getCoeficiente())+")(("+to_string(this->getRadicando())+
                ")^(1/"+to_string(this->getRadicando())+"))(("+to_string(r1.getCoeficiente())+")^(1/"+to_string(r1.getIndice())+"))";
            }
            return respuesta;
        }

        string operator /(Radical &r1){
            string respuesta="";
            int denom=this->getIndice()*r1.getIndice();
            string indice=to_string(this->getIndice()/denom+r1.getIndice()/denom);
            if (this->getRadicando()==r1.getRadicando()){
                respuesta+='('+to_string(this->getCoeficiente())+'/'+to_string(r1.getCoeficiente())+')'+
                '('+to_string(this->getRadicando())+")^("+indice+')';
            }else{
                respuesta+="(("+to_string(this->getCoeficiente)+")("+to_string(this->getRadicando())+")^(1/"+to_string(this->getIndice())+"))"+'/'+
                "(("+to_string(r1.getCoeficiente)+")("+to_string(r1.getRadicando())+")^(1/"+to_string(r1.getIndice())+"))";
            }
            return respuesta;
        }
};

#endif