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
		cout << "1) Agregar" << endl;
		cout << "2) Listar" << endl;
		cout << "3) Operaciones" << endl;
		cout << "4) Salir" << endl;
		cin >> resp;
		while (resp < 1 || resp > 4) {
			cout << "Opcion invalida! Ingrese su opcion de nuevo!" << endl;
			cin >> resp;
		}
		if (resp == 1)
		{
			/* code */
		} else if (resp == 2)
		{
			/* code */
		} else if (resp == 3)
		{
			
		} else {
			cout << "Nos vemos!" << endl;
			seguir = false;
		}

	}

	return 0;
}