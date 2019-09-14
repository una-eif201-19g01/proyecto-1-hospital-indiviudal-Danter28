
#ifndef _DOCTOR_H
#define _DOCTOR_H
#include "Especialidad.h"
#include "Paciente.h"
class Paciente;
class Doctor {
private:
	string nombre;
	Especialidad* especialidad;
	Paciente** listaPaciente;
	int cantidad;
	int tamannoDoctor;
public:
	Doctor();
	//Constructor sin parametros

	Doctor(string, Especialidad*, int);
	//Constructor con parametros
	//Recibe un string, un puntero a la clase especialidad y un entero

        ~Doctor();
		//Destructor

	void setNombre(string&);
	//Modifica el nombre del doctor y recibe un string por referencia

	string getNombre();
	//obtiene el nombre del doctor

	void setEspecialidad(Especialidad*);
	//Modifica la especialidad recibiendo por puntero a Especialidad

	string getEspecialidad();
	//Obtiene la especialidad del doctor

	string imprimeDoctor();
	//Da formato para mostrar a los doctores y sus especialidades

	string imprimePacientes();
	//Da formato para mostrar a los pacientes

	void ingresarPaciente(Paciente* paciente);
	//Permite ingresar a un paciente
	//Recibe por parametro a un puntero de Paciente

};
#endif
