#ifndef _ESPECIALIDAD_H
#define _ESPECIALIDAD_H
#include<iostream>
#include<string>
#include<sstream>

using namespace std;
class Especialidad {
private:
	string especialidad;
public:

	Especialidad(string);
	//Constructor con parametros que recibe un string
	~Especialidad();
	//Destructor
	void setEspecialidad(string);
	//Permite modificar la especialidad
	//Recibe un valor de tipo string

	string getEspecialidad();
	//Permite obtener la especialidad

	string imprimeEspecialidad();
	//Da formato para mostrar la especialidad

};
#endif