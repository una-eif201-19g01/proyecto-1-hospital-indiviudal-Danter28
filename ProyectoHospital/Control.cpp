#include "Control.h"
Control::Control()
{
	//ObjetosPredeterminados
	Especialidad* especialidad1 = new Especialidad("Pediatria");
	contEspecialidad->ingresa(especialidad1);

	Doctor* doctor1 = new Doctor("Juan","Pediatria");
	contDoctor->ingresarDoctor(doctor1);
	
	Pabellon* pabellon1 = new Pabellon('A','B');
	contPabellon->ingresar(pabellon1);
	
	Cama* cama1 = new Cama();
	Cama* cama2 = new Cama();
	contPabellon->ingresarCama(cama1);
	contPabellon->ingresarCama(cama2);
	
	Paciente* paciente1 = new Paciente("1-11","Masculino", "Dylan", "", "", "", "", 28,  "", "");
	paciente1->setCama(cama1);
	paciente1->setDoctor(doctor1);
	contPaciente->ingresar(paciente1);



	
		
}









void Control::opciones()
{
	bool cicloPrincipal = true;

	while (cicloPrincipal) {
		inter->imprime();
		int opc = inter->menu();

		if (opc == 1) {
			system("cls");
			opcPabellon();
			system("pause");
		}
		else if (opc == 2) {
			system("cls");
			opcEspecialidades();
			system("pause");
		}
		else if (opc == 3) {
			system("cls");
			opcDoctores();
			system("pause");
		}
		else if (opc == 4) {
			system("cls");
			opcPacientes();
			system("pause");
		}
		else {
			cicloPrincipal = false;
		}
	}
}

void Control::opcPabellon()
{
	bool cicloPrincipal = true;
	char sect, gen;
	int pos=1;
	while (cicloPrincipal) {
		inter->imprimeMenuPabellon();
		int opc = inter->menu4();

		if (opc == 1) {
			system("cls");
			cout << "\n\tIngresar un pabellon\n\n ";
			cout << "\nIngrese el sector del pabellon (letra): ";
			cin>> sect;
			cout << "\nIngrese el genero del pabellon (F-M): ";
			cin >> gen;
			Pabellon* d = new Pabellon(gen, sect);
			contPabellon->ingresar(d);
			cout << "\nPabellon ingresado correctamente!\n\n";
			system("pause");
		}
		else if (opc == 2) {
			system("cls");
			contPabellon->visualizar();
			system("pause");
		}
		else if (opc == 3) {
			system("cls");
			cout << "INGRESAR CAMA\n";
			Cama* cama = new Cama();
			contPabellon->ingresarCama(cama);
			cout << "Numero de pacientes disponibles:";
			cout<<contPaciente->getCant() << endl;

			cout << "Pacientes disponibles:";
			contPaciente->visualizar();

			cout << "Digite la posicion del pasciente que desea asignar a la cama creada:( 0-"<< contPaciente->getCant()<<")" << endl;
			cin >> pos;

			cama->ingresarPaciente(contPaciente->devuelve(pos));
			cout << "PACIENTE INGRESADO CORRECTAMENTE!!";
			system("pause");
		}
		else if (opc == 4) {
			system("cls");
			cout << "VISUALIZAR CAMA\n";
			contPabellon->visualizarCamas();
			system("pause");
		}
		else if (opc == 5) {
			system("cls");
			cout << "DESOCUPAR CAMA\n";
			cout << "Digite la posicion del pasciente que desea asignar a la cama creada:( 0-" << contPaciente->getCant() << ")" << endl;
			cin >> pos;
			contPabellon->desocuparPacienteCama(pos);
			cout << "CAMA DESOCUPADA CORRECTAMENTE!!\n";
			system("pause");
		}
		else {
			cicloPrincipal = false;
		}
	}
}

void Control::opcEspecialidades()
{
	bool cicloPrincipal = true;
	string espe;
	while (cicloPrincipal) {
		inter->imprimeMenuEsp();
		int opc = inter->menu();

		if (opc == 1) {
			system("cls");
			cout << "\n\tIngresar una especialidad\n\n ";
			cout << "\nIngrese el nombre de la especialidad: ";
			cin.ignore();
			cin>> espe;
			Especialidad* especialidadN = new Especialidad(espe);
			contEspecialidad->ingresa(especialidadN);
			cout << "\nEspecialidad ingresada correctamente!\n\n";
			system("pause");
		}
		else if (opc == 2) {
			system("cls");
			contEspecialidad->visualizar();
			system("pause");
		}
		else {
			cicloPrincipal = false;
		}
	}
}

void Control::opcDoctores()
{
	bool cicloPrincipal = true;
	string nombre, espe;
	while (cicloPrincipal) {
		inter->imprimeMenuDoc();
		int opc = inter->menu();

		if (opc == 1) {
			system("cls");
			cout << "\n\tIngresar un doctor\n\n ";
			cout << "\nIngrese el nombre completo del doctor: ";
			cin.ignore();
			cin>> nombre;
			cout << "\nIngrese la especialidad del doctor: ";
			cin>> espe;
			Doctor* doctor = new Doctor(nombre,espe);
			contDoctor->ingresarDoctor(doctor);
			cout << "\nDoctor ingresado correctamente!\n\n";
			system("pause");
		}
		else if (opc == 2) {
			system("cls");
			contDoctor->visualizar();
			system("pause");
		}
		else if (opc == 3) {
			system("cls");
			contDoctor->eliminar();
			system("pause");
		}
		else {
			cicloPrincipal = false;
		}
	}

}

void Control::opcPacientes()
{
	bool cicloPrincipal = true;
	string cedula, genero, nombre, apellido, direccion, patologia, tipo, prioridad, fecha;
	int estado;
	while (cicloPrincipal) {
		inter->imprimeMenuPacien();
		int opc = inter->menu4();

		if (opc == 1) {
			system("cls");
			cout << "\n\tIngresar un paciente\n\n ";
			cout << "\nIngrese la cedula del paciente: ";
			cin.ignore();
			cin>> cedula;
			cout << "\nIngrese el genero del paciente: ";
			cin>> genero;
			cout << "\nIngrese e nombre del paciente: ";
			cin>> nombre;
			cout << "\nIngrese el apellido del paciente: ";
			cin>> apellido;
			cout << "\nIngrese la direccion del paciente: ";
			cin>> direccion;
			cout << "\nIngrese la patologia del paciente: ";
			cin>> patologia;
			cout << "\nIngrese el tipo de cirugia del paciente: ";
			cin>> tipo;
			cout << "\nIngrese el estado del paciente: ";
			cin>> estado;
			cout << "\nIngrese si el paciente es prioridad (SI-NO): ";			
			cin>> prioridad;
			cout << "\nIngrese la fecha programada para la cirugia del paciente: ";
			cin>> fecha;
			Paciente* paciente = new Paciente(cedula, genero, nombre, apellido, direccion, patologia, tipo, estado, prioridad, fecha);
			contPaciente->ingresar(paciente);
			cout << "\nPaciente ingresado correctamente!\n\n";
			system("pause");
		}
		else if (opc == 2) {
			system("cls");
			contPaciente->visualizar();
			system("pause");
		}
		else if (opc == 3) {
			system("cls");
			contPaciente->modificar( contPabellon->getContenedorCamas(),contDoctor);
			system("pause");
		}
		else if (opc == 4) {
			system("cls");
			contPaciente->eliminar();
			system("pause");
		}
		else if (opc == 5) {
			system("cls");
			contPaciente->buscarPaciente();
			system("pause");
		}
		else {
			cicloPrincipal = false;
		}
	}

}


Control::~Control()
{
}
