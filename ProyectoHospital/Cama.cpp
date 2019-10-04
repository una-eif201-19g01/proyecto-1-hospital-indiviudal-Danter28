#include "Cama.h"

Cama::Cama() {}
Cama::Cama(int numeroCama) {
	paciente = NULL;
	estado = 0;
	this->numeroCama = std::to_string(numeroCama);
}

Cama::~Cama() {
	delete paciente;
}

void Cama::setEstado(int estado) { this->estado = estado; }
void Cama::setPaciente(Paciente* paciente) { this->paciente = paciente; }
void Cama::setNumeroCama(char sector) {
	this->numeroCama = std::to_string(sector) + getNumeroCama();
}

string Cama::getNumeroCama() { return numeroCama; }
Paciente* Cama::getPaciente() { return paciente; }
int Cama::getEstado() { return estado; }

void Cama::ingresarPaciente(Paciente* paciente) {
	this->paciente = paciente;
	setEstado(1);
	this->paciente->setEstado(1);
}
void Cama::liberarCama() {
	setEstado(0);
	paciente->setEstado(1);
	paciente = NULL;

}