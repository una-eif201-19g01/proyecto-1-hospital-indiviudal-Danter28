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
	Cama(int);
	void setEstado(int);
	void setPaciente(Paciente*);
	void setNumeroCama(char);
	string getNumeroCama();
	Paciente* getPaciente();
	int getEstado();
	void ingresarPaciente(Paciente*);
	void liberarCama();

};
#endif
