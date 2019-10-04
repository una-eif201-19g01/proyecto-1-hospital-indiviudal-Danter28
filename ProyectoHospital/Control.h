#ifndef _CONTROL_H
#define _CONTROL_H
#include "Interfaz.h"
#include "ContenedorDoctores.h"
#include "ContenedorEspecialidades.h"
#include "ContenedorPabellones.h"
#include "ContenedorPacientes.h"
#include"ContenedorCamas.h"

class Control
{
public:

	Interfaz *inter = new Interfaz;
	ContenedorDoctores *contDoctor = new ContenedorDoctores;
	ContenedorEspecialidades *contEspecialidad = new ContenedorEspecialidades;
	ContenedorPabellones *contPabellon = new ContenedorPabellones;
	ContenedorPacientes*contPaciente = new ContenedorPacientes;

	Control();
	void opciones();
	void opcPabellon();
	void opcEspecialidades();
	void opcDoctores();
	void opcPacientes();
	~Control();
};

#endif