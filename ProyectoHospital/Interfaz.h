#ifndef _INTERFAZ_H
#define _INTERFAZ_H
#include <iostream>
using namespace std;
class Interfaz
{
public:
	Interfaz();
	int menu();
	int menu4();
	void imprime();
	int validar();
	int validar4();
	void imprimeMenuDoc();
	void imprimeMenuPabellon();
	void imprimeMenuPacien();
	void imprimeMenuEsp();
	~Interfaz();
};

#endif

