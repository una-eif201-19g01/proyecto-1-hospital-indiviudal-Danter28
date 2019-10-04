#include "ContenedorCamas.h"

ContenedorCamas::ContenedorCamas()
{
	cant = 0;
	tam = 20;
	vec = new Cama*[tam];
	for (int cont = 0; cont < tam; cont++) {
		vec[cont] = nullptr;
	}
}


ContenedorCamas::~ContenedorCamas()
{
	for (int cont = 0; cont < cant; cont++) {
		delete vec[cont];
	}
	delete[] vec;
}

int ContenedorCamas::getCant()
{
	return cant;
}

void ContenedorCamas::ingresarCama(Cama *cama)
{
	if (cant < tam) {
		vec[cant] = cama;
		cant++;
	}
	else {
		cout << "\nNo hay campo para ingresar una nueva cama!\n";
	}
}

void ContenedorCamas::visualizar()
{
	try
	{
	cout << "Camas disponibles: " << cant << endl << endl;
	for (int cont = 0; cont < cant; cont++) {
		cout << cont + 1 << ")" <<
			vec[cont]->getNumeroCama() << endl;
	}
	}
	catch (const std::exception&)
	{
		cout << "ERROR";
		visualizar();
		system("pause");
	}
	
}


void ContenedorCamas::asignarPaciente(Paciente * paciente)
{
	system("cls");
	if (cant != 0) {
		cout << "\tA cual es  la cama que desea asigna un paciente?\n\n";
		for (int cont = 0; cont < cant; cont++) {
			cout << "[" << cont + 1 << "] ";
			cout << vec[cont]->getEstado() << endl;
		}
		cout << "\t[0] ";
		cout << "Cancelar\n";
		int opc1;
		bool ciclo = true;
		while (ciclo) {
			cout << "\t> ";
			if (!(cin >> opc1)) {
				cerr << "Error!\nDigite un numero!\n";
				cin.clear();
				cin.ignore(1024, '\n');
			}
			else {
				if (opc1 >= 0 && opc1 <= cant) {
					ciclo = false;
				}
				else {
					cerr << "Error!\nDigite un numero de la lista!\n";

					cin.clear();
					cin.ignore(1024, '\n');
				}
			}
		}
		if (opc1 != 0) {
			int opcR = opc1 - 1;
			if (opcR == (cant - 1)) {
				
			}
			else {

			}
			cout << "\nSe ha eliminado una cama correctamente!\n";

		}
	}
	else {

		cout << "No hay camas disponibles!\n";

	}
}

void ContenedorCamas::desocuparCama(int pos)
{
	vec[pos]->liberarCama();
}

Cama * ContenedorCamas::devuelve(int cont)
{
	return vec[cont];
}
