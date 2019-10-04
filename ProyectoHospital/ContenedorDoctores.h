#pragma once
#include "Doctor.h"
class ContenedorDoctores
{
private:
	Doctor **vec;
	int cant, tam;
public:
	ContenedorDoctores();
	~ContenedorDoctores();
	int getCant();
	void ingresarDoctor(Doctor*);
	void visualizar();
	void eliminar();
	Doctor* devuelve(int);
};

