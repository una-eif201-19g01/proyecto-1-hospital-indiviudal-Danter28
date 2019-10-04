#include "Pabellon.h"

Pabellon::Pabellon(char g, char s) : genero(g), sector(s){}


Pabellon::~Pabellon() {
}


char Pabellon::getSectorPabellon() {
	return sector;
}

char Pabellon::getGeneroPabellon() {
	return genero;
}

void Pabellon::setGeneroPabellon(char a) {
	genero = a;
}

void Pabellon::setSectorPabellon(char a) {
	sector = a;
}

string Pabellon::imprimePabellon() {
	string reporte;
	reporte = std::to_string(sector) + "-"+std::to_string(genero);
	return reporte;
}

