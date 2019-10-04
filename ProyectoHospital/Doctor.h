
#ifndef _DOCTOR_H
#define _DOCTOR_H
#include "Especialidad.h"
#include "Paciente.h"
#include <string>
#include <sstream>
using namespace std;
class Paciente;
class Doctor {
private:
	string nombre;
	string especialidad;
public:
	
	//Constructor con parametros
	//Recibe un string, un puntero a la clase especialidad y un entero

	Doctor(string , string );

	~Doctor();
	//Destructor

	void setNombre(string);
	//Modifica el nombre del doctor y recibe un string por referencia

	string getNombre();
	//obtiene el nombre del doctor

	string getEspecialidad();
	//Obtiene la especialidad del doctor

	string imprimeDoctor();
	//Da formato para mostrar a los doctores y sus especialidades

	string imprimePacientes();
	//Da formato para mostrar a los pacientes

};
#endif
