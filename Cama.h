#ifndef _CAMA_H
#define _CAMA_H
#include"Pabellon.h"
class Pabellon;
class Paciente;
class Cama {
private:
	int estado;//0=libre,1=ocupada
	string numeroCama;
	Paciente* paciente;

public:
	Cama();
	//Constructor sin parametros

	Cama(int);
	//Constructor con parametros, recibe un entero

        ~Cama();
		//Destructor

	void setEstado(int);
	//Permite modificar el estado de una cama, si esta ocupada o libre
	//Recibe un valor entero

	void setPaciente(Paciente*);
	//Modifica a Paciente recibiendo por puntero a Paciente

	void setNumeroCama(char);
	//Modifica el numero de cama y recibe un valor char

	string getNumeroCama();
	//Obtiene el numero de cama

	Paciente* getPaciente();
	//Obtiene los datos de pacientes almacenados en la clase Paciente
	int getEstado();
	//Obtiene el estado de la cama

	void ingresarPaciente(Paciente*);
	//Permite ingresar a un paciente
	//Recibe el puntero a Paciente

	void liberarCama();
	//Libera las camas

};
#endif
