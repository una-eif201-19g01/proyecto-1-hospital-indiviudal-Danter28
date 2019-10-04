#pragma once
#include "Pabellon.h"
#include"ContenedorCamas.h"
class ContenedorPabellones
{
private:
	Pabellon **vec;
	ContenedorCamas* contenedorCamas;
	int cant, tam;
public:
	ContenedorPabellones();
	void ingresar(Pabellon*);
	void visualizar();
	~ContenedorPabellones();
	int getCant();
	ContenedorCamas* getContenedorCamas();
	   	//Camas
	void ingresarCama(Cama*);
	void visualizarCamas();
	void asignarPacienteCama(Paciente* paciente);
	void desocuparPacienteCama(int);
};

