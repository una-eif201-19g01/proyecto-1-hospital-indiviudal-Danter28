
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
	Doctor(string, Especialidad*, int);
	void setNombre(string&);
	string getNombre();
	void setEspecialidad(Especialidad*);
	string getEspecialidad();
	string imprimeDoctor();
	string imprimePacientes();
	void ingresarPaciente(Paciente* paciente);

};
#endif
