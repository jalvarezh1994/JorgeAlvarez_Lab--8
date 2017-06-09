#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Real.h"
#include "Racional.h"
#include "Radical.h"

using namespace std;

int main(){
	vector<Racional> vRacional;
	vector<Radical> vRadical;
	int opcMenu;
	do{
		cout<<"Menú"<<endl;
		cout<<"1. Agregar"<<endl;
		cout<<"2. Listar"<<endl;
		cout<<"8. Salir"<<endl;
		cout<<"Ingrese opción: "<<endl;
		cin>>opcMenu;
		switch(opcMenu){
			case 1:{
				cout<<"Menú agregar"<<endl;
				cout<<"1. Racional"<<endl;
				cout<<"2. Radical"<<endl;
				int opcAgregar;
				cout<<"Ingrese la opción: ";
				cin>>opcAgregar;
				switch(opcAgregar){
					case 1:{
						int numerador;
						cout<<"Ingrese numerador: ";
						cin>>numerador;
						int denominador;
						cout<<"Ingrese denominador: ";
						cin>>denominador;
						Racional temporal(numerador,denominador);
						vRacional.push_back(temporal);
						break;
					}
					case 2:{
						int coeficiente;
						cout<<"Ingrese coeficiente: ";
						cin>>coeficiente;
						int indice;
						cout<<"Ingrese indice: ";
						cin>>indice;
						int radicando;
						cout<<"Ingrese radicando: ";
						cin>>radicando;
						Radical temporal(coeficiente,indice,radicando);
						vRadical.push_back(temporal);
						break;
					}
				}
				break;
			}
			case 2:
			{
				cout<<"Menú listar"<<endl;
				cout<<"1. Racional"<<endl;
				cout<<"2. Radical"<<endl;
				int opcListar;
				cout<<"Ingrese la opción: ";
				cin>>opcListar;
				switch(opcListar){
					case 1:{
						for(int i=0;i<vRacional.size();i++){
							cout<<i<<".-"<<endl;
							cout<<"Numerador"<<" = "<<vRacional[i].getNumerador()<<endl;
							cout<<"Denominador"<<" = "<<vRacional[i].getDenominador()<<endl;
							cout<<endl;
						}
						break;
					}
					case 2:{
						for(int i=0;i<vRadical.size();i++){
							cout<<i<<".-"<<endl;
							cout<<"Coeficiente"<<" = "<<vRadical[i].getCoeficiente()<<endl;
							cout<<"Indice"<<" = "<<vRadical[i].getIndice()<<endl;
							cout<<"Radicando"<<" = "<<vRadical[i].getRadicando()<<endl;
							cout<<endl;
						}break;
					}
				}
				break;
			}
		}
	}while(opcMenu!=8);
}