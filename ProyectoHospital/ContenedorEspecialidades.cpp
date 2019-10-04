#include "ContenedorEspecialidades.h"



ContenedorEspecialidades::ContenedorEspecialidades()
{
	cant = 0;
	tam = 10;
	vec = new Especialidad*[tam];
	for (int cont = 0; cont < tam; cont++) {
		vec[cont] = nullptr;
	}
}


ContenedorEspecialidades::~ContenedorEspecialidades()
{
	for (int cont = 0; cont < cant; cont++) {
		delete vec[cont];
	}
	delete[] vec;
}

int ContenedorEspecialidades::getCant()
{
	return cant;
}

void ContenedorEspecialidades::ingresa(Especialidad *especialidad)
{
	if (cant < tam) {
		vec[cant] = especialidad;
		cant++;
	}
	else {
		cout << "\nNo hay campo para ingresar una nueva especialidad!\n";
	}
}

void ContenedorEspecialidades::visualizar()
{
	cout << "Especialidades disponibles: " << cant << endl<<endl;
	for (int cont = 0; cont < cant; cont++) {
		cout<<vec[cont]->imprimeEspecialidad() << endl;
	}
}

Especialidad * ContenedorEspecialidades::devuele(int cont)
{
	return vec[cont];
}
