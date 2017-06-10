#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Real.h"
#include "Racional.h"
#include "Radical.h"

using namespace std;

int main() {
	//Racional* a=new Racional(1,2);
	//Racional* b=new Racional(3,4);
	//Racional c(1,2);
	//Racional d(3,4);
	//a+b;
	//cout<<c+5<<endl;
	/*Radical a(5,2,8);
	Radical b(10,7,8);
	cout<<a/b<<endl;*/
	Radical a(1,2,3);
	ofstream archivo;
	archivo.open("prueba.txt",ios::app);
	archivo<<a;
	archivo<<endl;
	archivo<<a;
	return 0;
}