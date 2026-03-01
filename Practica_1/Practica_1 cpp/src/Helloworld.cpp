#include "Helloworld.h"
#include<iostream>

using namespace std;

Helloworld::Helloworld()
{
	Nombre= "";
}
	void Helloworld::PedirNombre()
	{
		cout << "¿Quién eres? ";
		getline(cin, Nombre);
	}
	void Helloworld::Saludar()const
	{
		cout<< "Hola " << Nombre << "!!" << endl;
	}
Helloworld::~Helloworld()
	//Destructor no requiere logica
{
}