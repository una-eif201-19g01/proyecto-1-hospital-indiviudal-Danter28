#ifndef _PACIENTE_H
#define _PACIENTE_H
#include<iostream>
#include<string>
#include "Doctor.h"
#include"Pabellon.h"
using std::string;
class Cama;
class Doctor;
class Paciente {
private:
	string cedula;
	string nombre;
	string apellido;
	string direccion;
	string patologia;
	string tipoCirugia;
	string genero;
	int estado;//0=de alta, 1=internado
	string prioridad;
	string fechaCirugia;
	Cama* cama;
	Doctor* doctor;

public:
	Paciente();
	//Constructor sin parametros

	Paciente(string&, string&, string&, string&, string&, string&, string&, int, string&, string&, Doctor*);
	//Constructor por referencia que recibe valores por referencia de tipo string, enteros y puntero a Doctor

        ~Paciente();
		//Destructor

	void setCedula(string&);
	//Modifica la identificacion y recibe un valor por referencia de tipo string

	void setNombre(string&);
	//Modifica el nombre del paciente y recibe un valor por referencia de tipo string

	void setApellido(string&);
	//Modifica el apellido del paciente y recibe un valor por referencia de tipo string

	void setDireccion(string&);
	//Modifica la direccion y recibe un valor por referencia de tipo string

	void setPatologia(string&);
	//Modifica la patologia del paciente y recibe un valor por referencia de tipo string

	void setTipoCirugia(string&);
	//Modifica el tipo de cirugia y recibe un valor por referencia de tipo string

	void setEstado();
	//Modifica el estado del paciente

	void setPrioridad(string&);
	//Modifica la prioridad del paciente y recibe un valor por referencia de tipo string
	void setFechaCirugia(string&);
	//Modifica la fecha de cirugia y recibe un valor por referencia de tipo string

	void setCama(Cama*);
	//Modifica la cama, y recibe un puntero a Cama

	void setDoctor(Doctor*);
	//Modifica al doctor y recibe un puntero a Doctor

	void setGenero(string&);
	//Modifica el genero del paciente y recibe un valor por referencia de tipo string

	string getCedula();
	//Obtiene la cedula del paciente

	string getGenero();
	//Obtiene el nombre del paciente

	string getNombre();
	//Obtiene el nombre del paciente

	string getApellido();
	//Obtiene el apellido del paciente

	string getDireccion();
	//Obtiene la direccion del paciente

	string getPatologia();
	//Obtiene la patologia del paciente

	string getTipoCirugia();
	//Obtiene el tipo de cirugia del paciente

	int getEstado();
	//Obtiene el estado del paciente

	string getPrioridad();
	//Obtiene la prioridad del paciente

	string getFechaCirugia();
	//Obtiene la fecha de la cirugia del paciente

	string  getCama();
	//Obtiene la cama del paciente

	string getDoctor();
	//Obtiene el doctor

	string imprimePaciente();
	//Da formato y muestra los datos del paciente
};
#endif
