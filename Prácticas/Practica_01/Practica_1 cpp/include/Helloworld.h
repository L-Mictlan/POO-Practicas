#ifndef HELLOWORLD_H
#define HELLOWORLD_H

#include <iostream>
using namespace std;

class Helloworld
{
	private:
		string Nombre;
	public:
		//constructor
		Helloworld();
		//metodos publicos
		void PedirNombre();
		void Saludar()const;
		
		//destructor
		~Helloworld();
	protected:
};

#endif