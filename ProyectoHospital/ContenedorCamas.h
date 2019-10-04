#pragma once
#include "Cama.h"
class ContenedorCamas
{
private:
	Cama **vec;
	int cant, tam;
public:
	ContenedorCamas();
	~ContenedorCamas();
	int getCant();

	void ingresarCama(Cama*);
	void visualizar();

	void asignarPaciente(Paciente*);
	void desocuparCama(int);
	Cama* devuelve(int);
};

