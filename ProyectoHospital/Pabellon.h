#ifndef _PABELLON_H
#define _PABELLON_H
#include"Paciente.h"
#include"Cama.h"
class Cama;
class Pabellon {

private:
	char sector;
	char genero;
	Cama* camas[20];

public:
	Pabellon(char, char);
	//Constructor con Parametros
	~Pabellon();
	//Destructor
	char getSectorPabellon();
	//obtiene el sector del pabellon

	char getGeneroPabellon();
	//obtiene el genero del pabellon

	void setGeneroPabellon(char);
	//Modifica el Genero segun el pabellon
	//Recibe un char por parametro de referencia 

	void setSectorPabellon(char);
	// Modifica el sector del pabellon
	//recibe un char por parametro por parametro de referencia 

	std::string imprimePabellon();
	//Da formato para mostrar los pabellones del arreglo


};
#endif
