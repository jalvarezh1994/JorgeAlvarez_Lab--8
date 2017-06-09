#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Real.h"
#include "Racional.h"
#include "Radical.h"

using namespace std;

int main(){
	vector<Real> vReal;
	vector<Racional> vRacional;
	vector<Radical> vRadical;
	int opcMenu;
	do{
		cout<<"Menú"<<endl;
		cout<<"1. Agregar"<<endl;
		cout<<"2. Listar"<<endl;
		cout<<"3. Modificar"<<endl;
		cout<<"4. Eliminar"<<endl;
		cout<<"5. Guardar en archivos de texto"<<endl;
		cout<<"6. Leer de archivos de texto"<<endl;
		cout<<"7. Guardar en binarios"<<endl;
		cout<<"7. Leer de binarios"<<endl;
		cout<<"8. Salir"<<endl;
		cout<<"Ingrese opción: "<<endl;
		cin>>opcMenu;
		switch(opcMenu){
			case 1:{
				cout<<"Menú agregar"<<endl;
				cout<<"1. Real"<<endl;
				cout<<"2. Racional"<<endl;
				cout<<"3. Radical"<<endl;
				int opcAgregar;
				cout<<"Ingrese la opción: ";
				cin>>opcAgregar;
				switch(opcAgregar){
					case 1:{
						Real temporal();
						vReal.push_back(temporal);
						break;
					}
					case 2:{
						int numerador;
						cout<<"Ingrese numerador: ";
						cin>>numerador;
						int denominador;
						cout<<"Ingrese denominador: ";
						cin>>denominador;
						Racional temporal(numeradordenominador);
						vRacional.push_back(temporal);
						break;
					}
					case 3:{
						int coeficiente;
						cout<<"Ingrese coeficiente: ";
						cin>>coeficiente;
						int indice;
						cout<<"Ingrese indice: ";
						cin>>indice;
						int radicando;
						cout<<"Ingrese radicando: ";
						cin>>radicando;
						Radical temporal(coeficienteindiceradicando);
						vRadical.push_back(temporal);
						break;
					}
				}
				break;
			}
			case 2:
			{
				cout<<"Menú listar"<<endl;
				cout<<"1. Real"<<endl;
				cout<<"2. Racional"<<endl;
				cout<<"3. Radical"<<endl;
				int opcListar;
				cout<<"Ingrese la opción: ";
				cin>>opcListar;
				switch(opcListar){
					case 1:
					for(int i=0;i<vReal.size();i++){
						cout<<endl;

					}break;
					case 2:
					for(int i=0;i<vRacional.size();i++){
						cout<<"Numerador"<<" = "<<vRacional[i].getNumerador();
						cout<<"Denominador"<<" = "<<vRacional[i].getDenominador();
						cout<<endl;

					}break;
					case 3:
					for(int i=0;i<vRadical.size();i++){
						cout<<"Coeficiente"<<" = "<<vRadical[i].getCoeficiente();
						cout<<"Indice"<<" = "<<vRadical[i].getIndice();
						cout<<"Radicando"<<" = "<<vRadical[i].getRadicando();
						cout<<endl;

					}break;
				}
				break;
			}
			case 3:{
				break;
			}
			case 4:{
				break;
			}
			case 5:{
				break;
			}
		}
	}while(opcMenu!=8);
}