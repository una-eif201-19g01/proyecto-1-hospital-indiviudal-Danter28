#include "Pabellon.h"

Pabellon::Pabellon():cantidad(0),genero(genero), sector(sector), tamannoPabellon(tamannoPabellon) {}

Pabellon::Pabellon(char sector, char genero, int tamannoPabellon) : genero(genero), sector(sector), tamannoPabellon(tamannoPabellon) {
	cantidad = 0;
	Cama* cama=NULL;
	for (int contador = 0; contador < tamannoPabellon; contador++) {
		cama = new Cama(contador);
		camas[contador] = cama;
		camas[contador]->setNumeroCama(getSectorPabellon());
		delete cama;
	}
	
}


char Pabellon::getSectorPabellon() {
	return sector;
}

char Pabellon::getGeneroPabellon() {
	return genero;
}

void Pabellon::setGeneroPabellon(char&) {
}

void Pabellon::setSectorPabellon(char&) {
}

void Pabellon::ingresarPaciente(Paciente* paciente) {
	camas[cantidad]->ingresarPaciente(paciente);
	cantidad++;
}

void Pabellon::liberarCama(int numero) {
	camas[numero]->liberarCama();
	for (int fila = numero; fila < cantidad; fila++) {
		camas[fila] = camas[fila + 1];
	}
	cantidad--;
}

string Pabellon::imprimePabellon() {
	string reporte;
	reporte += "Sector de Pabellon: " + std::to_string(getSectorPabellon()) +
		"\nGenero de Pabellon: " + std::to_string(getGeneroPabellon()) +
		"\nCamas\t";
	for (int recorrido = 0; recorrido <= tamannoPabellon; recorrido++) {
		reporte += (camas[recorrido]->getEstado() == 0) ? "[_]" : "[X]";
	}
	return reporte;
}