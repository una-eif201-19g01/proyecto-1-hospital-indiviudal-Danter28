#pragma once
#include "Paciente.h"
#include "ContenedorDoctores.h"
#include "ContenedorPacientes.h"
#include"ContenedorCamas.h"

class ContenedorPacientes
{
private:
	Paciente **vec;
	int cant, tam;
public:
	ContenedorPacientes();
	~ContenedorPacientes();
	int getCant();
	void ingresar(Paciente*);
	void visualizar();
	void eliminar();
	Paciente* devuelve(int);
	void buscarPaciente();
	void modificar(ContenedorCamas*, ContenedorDoctores* );

};

