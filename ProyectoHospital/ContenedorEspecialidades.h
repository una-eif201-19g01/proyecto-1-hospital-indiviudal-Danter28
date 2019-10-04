#pragma once
#include "Especialidad.h"
class ContenedorEspecialidades
{
private:
	Especialidad **vec;
	int cant, tam;
public:
	ContenedorEspecialidades();
	~ContenedorEspecialidades();
	int getCant();
	void ingresa(Especialidad*);
	void visualizar();
	Especialidad* devuele(int);
};

