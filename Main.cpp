#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Real.h"
#include "Racional.h"
#include "Radical.h"

using namespace std;

int main() {
	vector<Real*> numeros;
	bool seguir = true;
	while (seguir == true) {
		int resp;
		cout << "---Menu---" << endl;
		cout << "1) Crear Binario" << endl;
		cout << "2) Disyuncion" << endl;
		cout << "3) Conjuncion " << endl;
		cout << "4) Implicacion " << endl;
		cout << "5) Doble Implicacion " << endl;
		cout << "6) Disyuncion Exclusiva" << endl;
		cout << "7) Salir" << endl;
		cin >> resp;
		while (resp < 1 || resp > 7) {
			cout << "Opcion invalida! Ingrese su opcion de nuevo!" << endl;
			cin >> resp;
		}
		if ()
		{
			/* code */
		}

	}

	return 0;
}