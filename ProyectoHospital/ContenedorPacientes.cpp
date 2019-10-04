#include "ContenedorPacientes.h"



ContenedorPacientes::ContenedorPacientes()
{
	cant = 0;
	tam = 200;
	vec = new Paciente*[tam];
	for (int cont = 0; cont < tam; cont++) {
		vec[cont] = nullptr;
	}
}


ContenedorPacientes::~ContenedorPacientes()
{
	for (int cont = 0; cont< cant; cont++) {
		delete vec[cont];
	}
	delete[] vec;
}

int ContenedorPacientes::getCant()
{
	return cant;
}

void ContenedorPacientes::ingresar(Paciente *paciente)
{
	if (cant < tam) {
		vec[cant] = paciente;
		cant++;
	}
	else {
		cout << "\nNo hay campo para ingresar un nuevo paciente!\n";
	}
}

void ContenedorPacientes::visualizar()
{
	cout << "Pacientes actuales: " << cant << endl<<endl;
	for (int cont = 0; cont < cant; cont++) {
		cout << vec[cont]->imprimePaciente() << endl;
	}
}

void ContenedorPacientes::eliminar()
{
	system("cls");
	if (cant != 0) {
		cout << "Cual paciente desea dar de alta?\n";
		for (int cont = 0; cont < cant; cont++) {
			cout << "\t[" << cont + 1 << "] ";
			cout << vec[cont]->imprimePaciente() << endl;
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
			cout << "\nSe ha dado de alta a un paciente correctamente!\n";

		}
	}
	else {

		cout << "No hay pacientes!\n";

	}
}

Paciente * ContenedorPacientes::devuelve(int cont)
{
	return vec[cont];
}

void ContenedorPacientes::buscarPaciente()
{
	system("cls");
	string id;
	if (cant > 0) {
		cout << "Ingrese la cedula del paciente que desea visualizar\n";
		cin >> id;
		bool is = false;
		for (int cont = 0; cont < cant; cont++) {
			if (vec[cont]->getCedula() == id) {
				cout<<vec[cont]->imprimePaciente();
				is = true;
			}
		}
		if (is == false) 
		{ cout << "El paciente solicitado no se encuentra!\n"; }
	}
	else {
		cout << "No hay pacientes!\n";
	}
	cout << "\n\n";
}

void ContenedorPacientes::modificar(ContenedorCamas* contCamas, ContenedorDoctores* contDoctor)
{
	cout << "\t\t(Modificar los datos de un paciente)\n\n";
	if (cant != 0) {
		cout << "\tDigite el paciente que desea modificar:\n";
		for (int cont = 0; cont < cant; cont++) {
		cout << "\t[" << cont + 1 << "] ";
			cout << vec[cont]->getCedula() << endl;
		}
		cout << "\t[0] ";
		cout << "Cancelar\n";
		int opc;
		bool ciclo = true;
		while (ciclo) {
			cout << "\t> ";
			if (!(cin >> opc)) {
				cerr << "Error!\nDigite un numero!\n";
				cin.clear();
				cin.ignore(1024, '\n');
			}
			else {
				if (opc >= 0 && opc <= cant) {
					ciclo = false;
				}
				else {
					ciclo = true;
				}
			}
		}
		if (opc != 0) {
			int opcR = opc - 1;

			cout << "\n\n";
			cout << "\tQue desea modificar?\n\n";
			cout << "\t[1]";
			cout << " Cambio de cama\n";
			cout << "\t[2]";
			cout << " Cambio de doctor \n";
			cout << "\t[3]";
			cout << " Patologia\n";
			cout << "\t[4]";
			cout << " Estado\n";
			cout << "\t[5]";
			cout << " Tipo de Cirugia\n";
			cout << "\t[6]";
			cout << " Fecha de Cirugia\n";
			cout << "\t[0]";
			cout << " Cancelar\n";

			int opc2;
			int pos;
			int pos2;
			bool ciclo2 = true;
			string cambio;
			string newNombre, newEspecialidad;
			int c2;
			bool d = true;
			bool d1 = true;
			while (ciclo2) {
				cout << "\t> ";
				if (!(cin >> opc2)) {
					cerr << "Error!\nDigite un numero!\n";
					cin.clear();
					cin.ignore(1024, '\n');
				}
				else {
					if (opc2 >= 0 && opc2 < 7) {
						ciclo2 = false;
					}
					else {
						ciclo2 = true;
					}
				}
			}
			if (opc2 != 0) {
				switch (opc2) {
				case 1:
					cout << "(Cama)\n\n";
					cout << "Digite la posicion del pasciente que desea asignar una nueva cama (0- "<<getCant()<<" )" <<endl;
					cin >> pos;
					cout << "Digite la posicion  de cama que desea ponerle al pasciente(0-" <<contCamas->getCant() << " )" << endl;
					cin >> pos2;
					vec[pos]->setCama(contCamas->devuelve(pos2));
					contCamas->devuelve(pos2)->getNumeroCama();
					cout << "\nCambio realizado correctamente!\n";
					break;
				case 2:
					cout << "(Doctor)\n\n";
					cout << "Digite la posicion del pasciente que desea asignar un nuevo doctor (0-"<< getCant()<<")" << endl;
					cin >> pos;
					cout << "Digite el nuevo doctor que desea ponerle al pasciente (0-"<<contDoctor->getCant()<<" )" << endl;
					cin >> pos2;
					vec[pos]->setDoctor(contDoctor->devuelve(pos2));
					cout << "\nCambio realizado correctamente!\n";
					break;
				case 3:
					cout << "(Patologia)\n\n";
					cout << "[" << opc << "] " << vec[opcR]->getPatologia() << endl;
					cout << "Digite la nueva patologia:\n>";
					cin.ignore();
					getline(cin, cambio);
					vec[opcR]->setPatologia(cambio);
					cout << "\nCambio realizado correctamente!\n";
					break;
				case 4:
					cout << "(Estado)\n\n";
					cout << "[" << opc << "] " << vec[opcR]->getEstado() << endl;
					cout << "Digite el nuevo estado (0-1):\n";
					while (d1) {
						cout << "> ";
						if (!(cin >> c2)) {
							cerr << "Error!\nDigite un numero!\n";
							cin.clear();
							cin.ignore(1024, '\n');
						}
						else {
							d1 = false;
						}
					}
					vec[opcR]->setEstado(c2);
					cout << "\nCambio realizado correctamente!\n";
					break;
				case 5:
					cout << "(Tipo de Cirugia)\n\n";
					cout << "[" << opc << "] " << vec[opcR]->getTipoCirugia() << endl;
					cout << "Digite el nuevo tipo de cirugia:\n>";
					cin.ignore();
					getline(cin, cambio);
					vec[opcR]->setTipoCirugia(cambio);
					cout << "\nCambio realizado correctamente!\n";
					break;
				case 6:
					cout << "(Fecha de Cirugia)\n\n";
					cout << "[" << opc << "] " << vec[opcR]->getFechaCirugia() << endl;
					cout << "Digite la nueva fecha de la cirugia:\n>";
					cin.ignore();
					getline(cin, cambio);
					vec[opcR]->setFechaCirugia(cambio);
					cout << "\nCambio realizado correctamente!\n";
				default:
					break;
				}
			}
		}
	}
	else {
		cout << "No hay pacientes para modificar!\n";
	}
}

