
#include "Especialidad.h"
Especialidad::Especialidad() {};
Especialidad::Especialidad(string especial) {
	especialidad = especial;
}

Especialidad::~Especialidad(){}

void Especialidad::setEspecialidad(string espe) {
	especialidad = espe;
}

string Especialidad::getEspecialidad() {
	return especialidad;
}


std::string Especialidad::imprimeEspecialidad() {
	std::string reporte;
	reporte += "Especialidad:" + getEspecialidad()+"\n";
	return reporte;
}
