#include "Especialidad.h"

Especialidad::Especialidad(string especial) {
	especialidad = especial;
}

Especialidad::~Especialidad() {}

void Especialidad::setEspecialidad(string espe) {
	especialidad = espe;
}

string Especialidad::getEspecialidad() {
	return especialidad;
}


std::string Especialidad::imprimeEspecialidad() {
	string reporte;
	reporte = "Especialidad: " + especialidad;
		return reporte;
}
