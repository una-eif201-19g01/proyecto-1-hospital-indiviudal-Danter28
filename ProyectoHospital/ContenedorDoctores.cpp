#include "ContenedorDoctores.h"



ContenedorDoctores::ContenedorDoctores()
{
	cant = 0;
	tam = 20;
	vec = new Doctor*[tam];
	for (int cont = 0; cont < tam; cont++) {
		vec[cont] = nullptr;
	}
}


ContenedorDoctores::~ContenedorDoctores()
{
	for (int cont = 0; cont < cant; cont++) {
		delete vec[cont];
	}
	delete[] vec;
}

int ContenedorDoctores::getCant()
{
	return cant;
}

void ContenedorDoctores::ingresarDoctor(Doctor *doctor)
{
	if (cant < tam) {
		vec[cant] = doctor;
		cant++;
	}
	else {
		cout << "\nNo hay campo para ingresar un nuevo doctor!\n";
	}
}

void ContenedorDoctores::visualizar()
{
	cout << "Doctores disponibles: " << cant << endl<<endl;
	for (int cont = 0; cont < cant; cont++) {
		cout <<cont+1<<")"<< vec[cont]->imprimeDoctor() << endl;
	}
}

void ContenedorDoctores::eliminar()
{
	system("cls");
	if (cant != 0) {
		cout << "\tA cual doctor desea despedir?\n\n";
		for (int cont = 0; cont < cant; cont++) {
			cout << "[" << cont + 1 << "] ";
			cout << vec[cont]->imprimeDoctor()<< endl;
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
				cant--;
			}
			else {
				vec[opcR] = vec[cant - 1];
				cant--;
			}
			cout << "\nSe ha despedido un doctor correctamente!\n";
		
		}
	}
	else {
	
		cout << "No hay doctores para despedir!\n";
	
	}
}

Doctor * ContenedorDoctores::devuelve(int cont)
{
	return vec[cont];
}
