#include "ContenedorPabellones.h"



ContenedorPabellones::ContenedorPabellones()
{
	contenedorCamas = new ContenedorCamas();

	cant = 0;
	tam = 10;
	vec = new Pabellon*[tam];
	for (int cont = 0; cont < tam; cont++) {
		vec[cont] = nullptr;
	}
}

void ContenedorPabellones::ingresar(Pabellon* pabellon)
{
	if (cant < tam) {
		vec[cant] = pabellon;
		cant++;
	}
	else {
		cout << "\nNo hay campo para ingresar un nuevo pabellon!\n";
	}
}

void ContenedorPabellones::visualizar()
{
	cout << "Pabellones disponibles: " << cant << endl<<endl;
	for (int cont = 0; cont < cant; cont++) {
		cout <<cont+1<<")"<< vec[cont]->imprimePabellon() << endl;
	}
}


ContenedorPabellones::~ContenedorPabellones()
{
	for (int cont = 0; cont < cant; cont++) {
		delete vec[cont];
	}
	delete[] vec;
}

int ContenedorPabellones::getCant()
{
	return cant;
}

ContenedorCamas * ContenedorPabellones::getContenedorCamas()
{
	return contenedorCamas;
}

void ContenedorPabellones::ingresarCama(Cama* cama)
{
	contenedorCamas->ingresarCama(cama);
}

void ContenedorPabellones::visualizarCamas()
{
	contenedorCamas->visualizar();
}


void ContenedorPabellones::asignarPacienteCama(Paciente* paciente)
{
	contenedorCamas->asignarPaciente(paciente);
}

void ContenedorPabellones::desocuparPacienteCama(int pos)
{
	contenedorCamas->desocuparCama(pos);
}
