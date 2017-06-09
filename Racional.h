#include <iostream>
#include <string>
#include "Real.h"
#include "Radical.h"

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

        string operator +(Racional &r1){
            int denominador=(r1.getDenominador())*(this->getDenominador());
            int numerador=(denominador/r1.getDenominador())*r1.getNumerador()+(denominador/this->getDenominador())*this->getNumerador();
            string respuesta="";
            respuesta+=to_string(numerador)+" / "+to_string(denominador);
            return respuesta;
        }

        string operator -(Racional &r1){
            int denominador=(r1.getDenominador())*(this->getDenominador());
            int numerador=(-1)*(denominador/r1.getDenominador())*r1.getNumerador()+(denominador/this->getDenominador())*this->getNumerador();
            string respuesta="";
            respuesta+=to_string(numerador)+" / "+to_string(denominador);
            return respuesta;
        }

        string operator *(Racional &r1){
            int denominador=(r1.getDenominador())*(this->getDenominador());
            int numerador=r1.getNumerador()*this->getNumerador();
            string respuesta="";
            respuesta+=to_string(numerador)+" / "+to_string(denominador);
            return respuesta;
        }

        string operator /(Racional &r1){
            int numerador=this->getNumerador()*r1.getDenominador();
            int denominador=this->getDenominador()*r1.getNumerador();
            string respuesta="";
            respuesta+=to_string(numerador)+" / "+to_string(denominador);
            return respuesta;
        }

        string operator +(double a){
            Racional r1(a,1);
            int denominador=(r1.getDenominador())*(this->getDenominador());
            int numerador=(denominador/r1.getDenominador())*r1.getNumerador()+(denominador/this->getDenominador())*this->getNumerador();
            string respuesta="";
            respuesta+=to_string(numerador)+" / "+to_string(denominador);
            return respuesta;
        }

        string operator -(double a){
            Racional r1(a,1);
            int denominador=(r1.getDenominador())*(this->getDenominador());
            int numerador=(-1)*(denominador/r1.getDenominador())*r1.getNumerador()+(denominador/this->getDenominador())*this->getNumerador();
            string respuesta="";
            respuesta+=to_string(numerador)+" / "+to_string(denominador);
            return respuesta;
        }

        string operator *(double a){
            Racional r1(a,1);
            int denominador=(r1.getDenominador())*(this->getDenominador());
            int numerador=r1.getNumerador()*this->getNumerador();
            string respuesta="";
            respuesta+=to_string(numerador)+" / "+to_string(denominador);
            return respuesta;
        }

        string operator /(double a){
            Racional r1(a,1);
            int numerador=this->getNumerador()*r1.getDenominador();
            int denominador=this->getDenominador()*r1.getNumerador();
            string respuesta="";
            respuesta+=to_string(numerador)+" / "+to_string(denominador);
            return respuesta;
        }

};

#endif