#include <iostream>
#include "Pabellon.h"
#include "Especialidad.h"
#include "Doctor.h"
#include "Cama.h"

using namespace std;

void menu(Pabellon pab[10], Doctor doc[20], Especialidad esp[10], Paciente p1, Cama* cam);

int main() {
	Paciente paciente1;
	Cama* cama;
	Doctor doctores[20];
	Pabellon pabellones[10];
	Especialidad especialidades[10];

	menu(pabellones, doctores, especialidades, paciente1, cama);

	return 0;
}

void menu(Pabellon pab[10], Doctor doc[20], Especialidad esp[10], Paciente p1, Cama* cam) {
	int respuesta, op1, op2, op3, op4, estado, doc1, cont;
	string esp1, esp2, doc2, doc3, cedula, nombre, apellido, direccion, patologia, tipoCirugia, prioridad, fechaCirugia, genero;
	char sector1, genero1;
	bool rs1;
	do {
		cout << "------------------------------------------------------------------------" << endl;
		cout << "   * Bienvenido al sistema del hospital Esperanza *" << endl;
		cout << "-----------------------------------------------------------------------" << endl;
		cout << "   * 1. Internar un paciente " << endl;
		cout << "   * 2. Ingresar especialidades " << endl;
		cout << "   * 3. Ingresar doctores " << endl;
		cout << "   * 4. Eliminar doctores " << endl;
		cout << "   * 5. Ingresar pabellones" << endl;
		cout << "   * 6. Mostrar pabellones" << endl;
		cout << "   * 7. Mostrar doctores " << endl;
		cout << "   * 8. Mostrar especialidades " << endl;
		cout << "   * 9. Salir del sistema" << endl;
		cout << "-----------------------------------------------------------------------" << endl;
		cout << "   * Ingrese su seleccion: " << endl;
		cout << "-----------------------------------------------------------------------" << endl;
		cin >> respuesta;
		cout << endl;

		switch (respuesta) {
		case 1:
			cout << "------------------------------------------------------------------------" << endl;
			cout << "   * En cual especialidad va a ingresar el paciente?:  " << endl;
			cout << "------------------------------------------------------------------------" << endl;
			for (int es = 0; es < 10; es++) {
				cout << esp[es].getEspecialidad() << endl;
			}
			cout << "------------------------------------------------------------------------" << endl;
			cin >> esp1;
			for (int fil = 0; fil < 10; fil++) {
				if (esp1 == esp[fil].getEspecialidad())
					rs1 = true;
			}
			if (rs1 == true) {
				cout << "------------------------------------------------------------------------" << endl;
				cout << "   * Ingrese los datos del paciente:  " << endl;
				cout << "------------------------------------------------------------------------" << endl;
				cout << "   * Cedula:" << endl;
				cin >> cedula;
				cout << "   * Nombre:" << endl;
				cin >> nombre;
				cout << "   * Apellido:" << endl;
				cin >> apellido;
				cout << "   * Genero:" << endl;
				cin >> genero;
				cout << "   * Direccion:" << endl;
				cin >> direccion;
				cout << "   * Patologia:" << endl;
				cin >> patologia;
				cout << "   * Tipo de cirugia:" << endl;
				cin >> tipoCirugia;
				cout << "   * Prioridad:" << endl;
				cin >> prioridad;
				cout << "   * Fecha de la cirugia:" << endl;
				cin >> fechaCirugia;
				cout << "------------------------------------------------------------------------" << endl;
				cout << "   * Los doctores disponibles son:  " << endl;
				cout << "------------------------------------------------------------------------" << endl;
				cont = 1;
				for (int doc1 = 0; doc1 < 20; doc1++) {
					if (doc[doc1].getEspecialidad() == esp1) {
						cout << "   * " << cont << "." << doc[doc1].getNombre() << endl;
					}
					cont++;
				}
				cout << "------------------------------------------------------------------------" << endl;
				cout << "   * Digite el numero del doctor a escojer:  " << endl;
				cout << "------------------------------------------------------------------------" << endl;
				cin >> op1;
				Paciente p1(cedula, genero, nombre, apellido, direccion, patologia, tipoCirugia, 1, prioridad, fechaCirugia, NULL, &doc[op1 - 1]);
				for (int pab1 = 0; pab1 < 10; pab1++) {
					if (p1.getGenero() == pab[pab1].getGeneroPabellon())
						pab[pab1].ingresarPaciente(&p1);
					pab1 = 10;
				}
			}
			break;
		case 2:
			cout << "------------------------------------------------------------------------" << endl;
			cout << "   * Bienvenido al sistema para ingresar Especialidades *  " << endl;
			cout << "------------------------------------------------------------------------" << endl;
			for (int es1 = 0; es1 < 10; es1++) {
				cout << "------------------------------------------------------------------------" << endl;
				cout << "   * Ingrese el nombre de la especialidad:  " << endl;
				cout << "------------------------------------------------------------------------" << endl;
				cin >> esp2;
				esp[es1] = esp2;
			}

			break;
		case 3:
			cout << "------------------------------------------------------------------------" << endl;
			cout << "   * Bienvenido al sistema para ingresar doctores *  " << endl;
			cout << "------------------------------------------------------------------------" << endl;
			for (int do2 = 1; do2 < 20; do2++) {
				cout << "------------------------------------------------------------------------" << endl;
				cout << "   * Ingrese el nombre del doctor:  " << endl;
				cout << "------------------------------------------------------------------------" << endl;
				cin >> doc3;
				cout << "------------------------------------------------------------------------" << endl;
				cout << "   * Las especialidades disponibles son:  " << endl;
				cout << "------------------------------------------------------------------------" << endl;
				cont = 1;
				for (int es1 = 0; es1 < 10; es1++) {
					cout << cont << "   * " << esp[es1].imprimeEspecialidad() << endl;
					cout << endl;
					cont++;
				}
				cout << "------------------------------------------------------------------------" << endl;
				cout << "   * Ingrese el numero de la especialidad:  " << endl;
				cout << "------------------------------------------------------------------------" << endl;
				cin >> op4;
				doc[do2].setNombre(doc3);
				doc[do2].setEspecialidad(&esp[op4 - 1]);
			}

			break;
		case 4:
			cout << "------------------------------------------------------------------------" << endl;
			cout << "   * Los doctores actuales son:  " << endl;
			cout << "------------------------------------------------------------------------" << endl;
			cont = 1;
			for (int do1 = 0; do1 < 20; do1++) {
				cout << cont << "   * " << doc[do1].imprimeDoctor() << endl;
				cout << endl;
				cont++;
			}
			cout << "------------------------------------------------------------------------" << endl;
			cout << "   * Escriba el numero del doctor a eliminar:  " << endl;
			cout << "------------------------------------------------------------------------" << endl;
			cin >> doc1;
			cout << "------------------------------------------------------------------------" << endl;
			cout << "   * Escriba el nombre del nuevo doctor:  " << endl;
			cout << "------------------------------------------------------------------------" << endl;
			cin >> doc2;
			cout << "------------------------------------------------------------------------" << endl;
			cout << "   * Las especialidades disponibles son:  " << endl;
			cout << "------------------------------------------------------------------------" << endl;
			cont = 1;
			for (int es1 = 0; es1 < 10; es1++) {
				cout << cont << "   * " << esp[es1].imprimeEspecialidad() << endl;
				cout << endl;
				cont++;
			}
			cout << "------------------------------------------------------------------------" << endl;
			cout << "   * Ingrese el numero de la especialidad:  " << endl;
			cout << "------------------------------------------------------------------------" << endl;
			cin >> op3;
			doc[doc1 - 1].setNombre(doc2);
			doc[doc1 - 1].setEspecialidad(&esp[op3]);

			break;
		case 5:
			cout << "------------------------------------------------------------------------" << endl;
			cout << "   * Bienvenido al sistema para ingresar los pabellones *  " << endl;
			cout << "------------------------------------------------------------------------" << endl;
			for (int pab2 = 0; pab2 < 10; pab2++) {
				cout << "------------------------------------------------------------------------" << endl;
				cout << "   * Ingrese el sector del pabellon:  " << endl;
				cout << "------------------------------------------------------------------------" << endl;
				cin >> sector1;
				cout << "------------------------------------------------------------------------" << endl;
				cout << "   * Ingrese el genero designado en el pabellon:  " << endl;
				cout << "------------------------------------------------------------------------" << endl;
				cin >> genero1;
				pab[pab2] = Pabellon(sector1, genero1, 10);
			}
			break;
		case 6:
			cout << "   * Los pabellones son: " << endl;
			for (int pab3 = 0; pab3 < 10; pab3++) {
				pab[pab3].imprimePabellon();
			}
			break;
		case 7:
			cout << "   * Los Doctores son: " << endl;
			for (int doc4 = 0; doc4 < 20; doc4++) {
				doc[doc4].imprimeDoctor();
			}
			break;
		case 8:
			cout << "   * Las especialidades son: " << endl;
			for (int esp3 = 0; esp3 < 10; esp3++) {
				esp[esp3].imprimeEspecialidad();
			}
			break;
		default:
			cout << "-----------------------------------------------------------------------------" << endl;
			cout << " * Ingreso un numero que no corresponde a ninguna de las opciones posibles," << endl;
			cout << "   Vuelva a intentarlo" << endl;
			cout << "-----------------------------------------------------------------------------" << endl;
			cout << endl;
		}
	} while (respuesta != 9);
}
