#include "Doctor.h"

Doctor::Doctor(string nombre, string especialidad) {
	this->nombre = nombre;
	this->especialidad = especialidad;
}

Doctor::~Doctor() {
}

void Doctor::setNombre(string nombre) {
	this->nombre = nombre;
}

string Doctor::getNombre() {
	return nombre;
}

std::string Doctor::getEspecialidad() {
	return especialidad;
}

string Doctor::imprimeDoctor() {
	string reporte;
	reporte = "Nombre: " + nombre +"\nEspecialidad: " + especialidad +"\n";
	return reporte;
}
