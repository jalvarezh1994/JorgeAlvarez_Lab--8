#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Real.h"
#include "Racional.h"
#include "Radical.h"

using namespace std;

int main(){
	vector<Real*> numeros;
	int opcMenu, cont = 1;
	do{
		cout << "Menú" << endl;
		cout << "1. Agregar Numero" << endl;
		cout << "2. Listar Banco de Numeros" << endl;
		cout << "3. Operadores" << endl;
		cout << "4. Salir" << endl;
		cout << "Ingrese opción: " << endl;
		cin >> opcMenu;
		while (opcMenu < 1 || opcMenu > 4) {
			cout << "Opcion invalida! Ingrese su opcion de nuevo!"  <<  endl;
			cin >> opcMenu;
		}
		switch(opcMenu){
			case 1:{
				cout << "Menú agregar" << endl;
				cout << "1. Racional" << endl;
				cout << "2. Radical" << endl;
				int opcAgregar;
				cout << "Ingrese la opción: ";
				cin >> opcAgregar;
				while (opcAgregar < 1 || opcAgregar > 2) {
					cout << "Opcion invalida! Ingrese su opcion de nuevo!"  <<  endl;
					cin >> opcAgregar;
				}
				switch(opcAgregar){
					case 1:{
						int numerador;
						cout << "Ingrese numerador: ";
						cin >> numerador;
						int denominador;
						cout << "Ingrese denominador: ";
						cin >> denominador;
						//Racional* temporal(numerador,denominador);
						numeros.push_back(new Racional(numerador,denominador));
						break;
					}
					case 2:{
						int coeficiente;
						cout << "Ingrese coeficiente: ";
						cin >> coeficiente;
						int indice;
						cout << "Ingrese indice: ";
						cin >> indice;
						int radicando;
						cout << "Ingrese radicando: ";
						cin >> radicando;
						//Radical temporal(coeficiente,indice,radicando);
						numeros.push_back(new Radical(coeficiente, indice, radicando));
						break;
					}
				}
				break;
			}
			case 2:
			{
				for (int i = 0; i < numeros.size(); ++i)
				{
					if (numeros[i] -> getTipo() == "Racional")
					{
						Racional* temp = dynamic_cast<Racional*>(numeros[i]);
						cout << i << ") " << temp -> getNumerador() << "/" << temp -> getDenominador() << endl;
					} else {
						Radical* temp = dynamic_cast<Radical*>(numeros[i]);
						cout << i << ") (" << temp -> getCoeficiente() << ")(" << temp -> getRadicando() << ")^(1/" << temp -> getIndice() << ")" <<  endl;
					}
				}
				break;
			}
			case 3:{
				bool seguir2 = true;
				while (seguir2 == true) {
					int resp2;
					cout << "---Menu---"  <<  endl;
					cout << "1) Sumar"  <<  endl;
					cout << "2) Restar"  <<  endl;
					cout << "3) Multiplicar"  <<  endl;
					cout << "4) Dividir"  <<  endl;
					cout << "5) Salir"  <<  endl;
					cin >> resp2;
					while (resp2 < 1 || resp2 > 5) {
						cout << "Opcion invalida! Ingrese su opcion de nuevo!"  <<  endl;
						cin >> resp2;
					}
					if (resp2 == 1)
					{
						bool escoger1 = false, escoger2 = false;
						double num2;
						cout << "Escoga el numero a sumar: " << endl;
						for (int i = 0; i < numeros.size(); ++i)
						{
							if (numeros[i] -> getTipo() == "Racional")
							{
								Racional* temp = dynamic_cast<Racional*>(numeros[i]);
								cout << i << ") " <<  temp -> getNumerador() << "/" << temp -> getDenominador() << endl;
							} else {
								Radical* temp = dynamic_cast<Radical*>(numeros[i]);
								cout << i << ") (" << temp -> getCoeficiente() << ")(" << temp -> getRadicando() << ")^(1/" << temp -> getIndice() << ")" <<  endl;
							}
						}
						int resp4;
						while (resp4 < 0 || resp4 > numeros.size()) {
							cout << "Opcion invalida! Ingrese su opcion de nuevo!"  <<  endl;
							cin >> resp4;
						}
						escoger1 = true;

						cout << "Desea escoger un numero del banco o ingresarlo?" << endl;
						cout << "1) Escoger" << endl;
						cout << "2) Ingresar" << endl;
						int resp3
						cin >> resp3;
						while (resp3 < 1 || resp3 > 2) {
							cout << "Opcion invalida! Ingrese su opcion de nuevo!"  <<  endl;
							cin >> resp3;
						}
						if (resp3 == 1)
						{
							cout << "Escoga el segundo numero: " << endl;
							for (int i = 0; i < numeros.size(); ++i)
							{
								if (numeros[i] -> getTipo() == "Racional")
								{
									Racional* temp = dynamic_cast<Racional*>(numeros[i]);
									cout << i << ") " <<  temp -> getNumerador() << "/" << temp -> getDenominador() << endl;
								} else {
									Radical* temp = dynamic_cast<Radical*>(numeros[i]);
									cout << i << ") (" << temp -> getCoeficiente() << ")(" << temp -> getRadicando() << ")^(1/" << temp -> getIndice() << ")" <<  endl;
								}
							}
							int resp5;
							while (resp5 < 0 || resp5 > numeros.size()) {
								cout << "Opcion invalida! Ingrese su opcion de nuevo!"  <<  endl;
								cin >> resp5;
							}
							escoger2 = true;
						} else {
							cout << "Ingrese el segundo numero: " << endl;
							cin >> num2;
						}

						string respF;
						if (escoger1 == true && escoger2 == true)
						{
							if (numeros[resp4] -> getTipo() == "Racional")
							{
								if (numeros[resp5] -> getTipo() == "Racional")
								{
									Racional* temp1 = dynamic_cast<Racional*>(numeros[resp4]);
									Racional* temp2 = dynamic_cast<Racional*>(numeros[resp5]);
									respF = *temp1 + temp2;
									cout << "La respuesta es: " << respF << endl;
								} else {
									Racional* temp1 = dynamic_cast<Racional*>(numeros[resp4]);
									Radical* temp2 = dynamic_cast<Radical*>(numeros[resp5]);
									respF = *temp1 + temp2;
									cout << "La respuesta es: " << respF << endl;
								}
							} else {
								if (numeros[resp5] -> getTipo() == "Radical")
								{
									Radical* temp1 = dynamic_cast<Radical*>(numeros[resp4]);
									Radical* temp2 = dynamic_cast<Radical*>(numeros[resp5]);
									respF = *temp1 + temp2;
									cout << "La respuesta es: " << respF << endl;
								} else {
									Radical* temp1 = dynamic_cast<Radical*>(numeros[resp4]);
									Racional* temp2 = dynamic_cast<Racional*>(numeros[resp5]);
									respF = *temp1 + temp2;
									cout << "La respuesta es: " << respF << endl;
								}
							}
						} else {
							if (numeros[resp4] -> getTipo() == "Racional")
							{
								Racional* temp1 = dynamic_cast<Racional*>(numeros[resp4]);
								respF = *temp1 + num2;
								cout << "La respuesta es: " << respF << endl;
							} else {
								Radical* temp1 = dynamic_cast<Radical*>(numeros[resp4]);
								respF = *temp1 + num2;
								cout << "La respuesta es: " << respF << endl;
							}
						}
					} else if (resp2 == 2)
					{
						bool escoger1 = false, escoger2 = false;
						double num2;
						cout << "Escoga el numero a restar: " << endl;
						for (int i = 0; i < numeros.size(); ++i)
						{
							if (numeros[i] -> getTipo() == "Racional")
							{
								Racional* temp = dynamic_cast<Racional*>(numeros[i]);
								cout << i << ") " <<  temp -> getNumerador() << "/" << temp -> getDenominador() << endl;
							} else {
								Radical* temp = dynamic_cast<Radical*>(numeros[i]);
								cout << i << ") (" << temp -> getCoeficiente() << ")(" << temp -> getRadicando() << ")^(1/" << temp -> getIndice() << ")" <<  endl;
							}
						}
						int resp4;
						while (resp4 < 0 || resp4 > numeros.size()) {
							cout << "Opcion invalida! Ingrese su opcion de nuevo!"  <<  endl;
							cin >> resp4;
						}
						escoger1 = true;

						cout << "Desea escoger un numero del banco o ingresarlo?" << endl;
						cout << "1) Escoger" << endl;
						cout << "2) Ingresar" << endl;
						int resp3
						cin >> resp3;
						while (resp3 < 1 || resp3 > 2) {
							cout << "Opcion invalida! Ingrese su opcion de nuevo!"  <<  endl;
							cin >> resp3;
						}
						if (resp3 == 1)
						{
							cout << "Escoga el segundo numero: " << endl;
							for (int i = 0; i < numeros.size(); ++i)
							{
								if (numeros[i] -> getTipo() == "Racional")
								{
									Racional* temp = dynamic_cast<Racional*>(numeros[i]);
									cout << i << ") " <<  temp -> getNumerador() << "/" << temp -> getDenominador() << endl;
								} else {
									Radical* temp = dynamic_cast<Radical*>(numeros[i]);
									cout << i << ") (" << temp -> getCoeficiente() << ")(" << temp -> getRadicando() << ")^(1/" << temp -> getIndice() << ")" <<  endl;
								}
							}
							int resp5;
							while (resp5 < 0 || resp5 > numeros.size()) {
								cout << "Opcion invalida! Ingrese su opcion de nuevo!"  <<  endl;
								cin >> resp5;
							}
							escoger2 = true;
						} else {
							cout << "Ingrese el segundo numero: " << endl;
							cin >> num2;
						}

						string respF;
						if (escoger1 == true && escoger2 == true)
						{
							if (numeros[resp4] -> getTipo() == "Racional")
							{
								if (numeros[resp5] -> getTipo() == "Racional")
								{
									Racional* temp1 = dynamic_cast<Racional*>(numeros[resp4]);
									Racional* temp2 = dynamic_cast<Racional*>(numeros[resp5]);
									respF = *temp1 - temp2;
									cout << "La respuesta es: " << respF << endl;
								} else {
									Racional* temp1 = dynamic_cast<Racional*>(numeros[resp4]);
									Radical* temp2 = dynamic_cast<Radical*>(numeros[resp5]);
									respF = *temp1 - temp2;
									cout << "La respuesta es: " << respF << endl;
								}
							} else {
								if (numeros[resp5] -> getTipo() == "Radical")
								{
									Radical* temp1 = dynamic_cast<Radical*>(numeros[resp4]);
									Radical* temp2 = dynamic_cast<Radical*>(numeros[resp5]);
									respF = *temp1 - temp2;
									cout << "La respuesta es: " << respF << endl;
								} else {
									Radical* temp1 = dynamic_cast<Radical*>(numeros[resp4]);
									Racional* temp2 = dynamic_cast<Racional*>(numeros[resp5]);
									respF = *temp1 - temp2;
									cout << "La respuesta es: " << respF << endl;
								}
							}
						} else {
							if (numeros[resp4] -> getTipo() == "Racional")
							{
								Racional* temp1 = dynamic_cast<Racional*>(numeros[resp4]);
								respF = *temp1 + num2;
								cout << "La respuesta es: " << respF << endl;
							} else {
								Radical* temp1 = dynamic_cast<Radical*>(numeros[resp4]);
								respF = *temp1 + num2;
								cout << "La respuesta es: " << respF << endl;
							}
						}
					} else if (resp2 == 3)
					{
						
					} else if (resp2 == 4)
					{
						
					} else {
						seguir2 = false;
					}
				}
				break;
			}
		}
	}while(opcMenu!=8);
}