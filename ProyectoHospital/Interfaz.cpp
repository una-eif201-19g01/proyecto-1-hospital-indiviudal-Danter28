#include "Interfaz.h"

Interfaz::Interfaz()
{
}

int Interfaz::menu() { //cuantas opciones hay en el menu
	int opc;
	opc = validar();
	return opc;
}

int Interfaz::menu4() { //cuantas opciones hay en el menu
	int opc;
	opc = validar4();
	return opc;
}

void Interfaz::imprime() {
	system("cls");
	cout << "-------------------------------" << endl;
	cout << "-------------MENU--------------" << endl;
	cout << "-------------------------------" << endl;
	cout << "1) - Pabellones" << endl;
	cout << "2) - Especialidades" << endl;
	cout << "3) - Doctores" << endl;
	cout << "4) - Pacientes" << endl;
	cout << "0) - Salir " << endl;
	cout << "-------------------------------" << std::endl;
	cout << "-------------------------------" << std::endl;
	cout << std::endl;
	cout << "Digita la opcion que deseas seguir: ";
	cout << endl << endl;
}

int Interfaz::validar() {
	int opc;
	bool c = true;
	while (c) {
		cout << "Opcion > ";

		if (!(cin >> opc)) { //revisa si falla
			cout << "Error!";
			cin.clear();
			cin.ignore(1024, '\n');
		}
		else if (opc < 0 || opc >4) { //PONER HASTA 5 PARA HACER METODO DE REVISAR
			cout << "Error!";
			cin.clear();
			cin.ignore(1024, '\n');
		}
		else { c = false; }
	}
	return opc;
}

int Interfaz::validar4() {
	int opc;
	bool c = true;
	while (c) {
		cout << "Opcion > ";

		if (!(cin >> opc)) { //revisa si falla
			cout << "Error!";
			cin.clear();
			cin.ignore(1024, '\n');
		}
		else if (opc < 0 || opc >5) { //PONER HASTA 5 PARA HACER METODO DE REVISAR
			cout << "Error!";
			cin.clear();
			cin.ignore(1024, '\n');
		}
		else { c = false; }
	}
	return opc;
}

void Interfaz::imprimeMenuDoc() {
	system("cls");

	cout << "-------------------------------" << endl;
	cout << "-----------DOCTORES------------" << endl;
	cout << "-------------------------------" << endl;
	cout << "1) - Ingresar un doctor" << endl;
	cout << "2) - Visualizar los doctores disponibles" << endl;
	cout << "3) - Despedir un doctor" << endl;
	cout << "0) - Salir " << endl;
	cout << "-------------------------------" << std::endl;
	cout << "-------------------------------" << std::endl;
	cout << std::endl;
	cout << "Digita la opcion que deseas seguir: ";
	cout << endl << endl;
}

void Interfaz::imprimeMenuPabellon()
{
	system("cls");

	cout << "-------------------------------" << endl;
	cout << "-----------PABELLON------------" << endl;
	cout << "-------------------------------" << endl;
	cout << "1) - Ingresar un pabellon" << endl;
	cout << "2) - Visualizar los pabellones" << endl;
	cout << "3) - Ingresar una cama" << endl;
	cout << "4) - Visualizar las camas" << endl;
	cout << "5) - Desocupar una cama" << endl;
	cout << "0) - Salir " << endl;
	cout << "-------------------------------" << std::endl;
	cout << "-------------------------------" << std::endl;
	cout << std::endl;
	cout << "Digita la opcion que deseas seguir: ";
	cout << endl << endl;

}

void Interfaz::imprimeMenuPacien()
{
	system("cls");

	cout << "-------------------------------" << endl;
	cout << "-----------PACIENTES-----------" << endl;
	cout << "-------------------------------" << endl;
	cout << "1) - Ingresar un paciente" << endl;
	cout << "2) - Visualizar los pacientes" << endl;
	cout << "3) - Modificar un paciente" << endl;
	cout << "4) - Dar de alta a un paciente" << endl;
	cout << "5) - Informe por paciente" << endl;
	cout << "0) - Salir " << endl;
	cout << "-------------------------------" << std::endl;
	cout << "-------------------------------" << std::endl;
	cout << std::endl;
	cout << "Digita la opcion que deseas seguir: ";
	cout << endl << endl;
}

void Interfaz::imprimeMenuEsp() {
	system("cls");

	cout << "-------------------------------" << endl;
	cout << "--------ESPECIALIDADES---------" << endl;
	cout << "-------------------------------" << endl;
	cout << "1) - Ingresar una especialidad" << endl;
	cout << "2) - Visualizar las especialidades disponibles" << endl;
	cout << "0) - Salir " << endl;
	cout << "-------------------------------" << std::endl;
	cout << "-------------------------------" << std::endl;
	cout << std::endl;
	cout << "Digita la opcion que deseas seguir: ";
	cout << endl << endl;
}


Interfaz::~Interfaz()
{
}