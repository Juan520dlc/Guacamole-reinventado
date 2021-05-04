#include <iostream>
#include <string>

using namespace std;

struct contratacion {
	string nombre;
	int edad;
	char genero;
	float sueldo;
};

int main() {
	contratacion empleado[20];

	int opcion, contador = 0;

	do {
		cout << "DATASYS" << endl;
		cout << "1. Contratación" << endl;
		cout << "2. Listado de todos los empleados actuales" << endl;
		cout << "3. Listado de empleados de género femenino" << endl;
		cout << "4. Listado de empleados con sueldo mayor a Q.5,000.00" << endl;
		cout << "5. Listado de empleados con edad menor o igual a 30 años" << endl;
		cout << "6. Buscar empleado" << endl;
		cout << "7. Salir" << endl;
		cout << "Seleccione una opcion: ";
		cin >> opcion;

		system("pause");
		system("cls");

		if (opcion == 1) {
				cout << "Contratación empleado nuevo" << endl;
				cout << "Ingrese nombre: ";
				cin >> empleado[contador].nombre;
				cout << "Ingrese edad: ";
				cin >> empleado[contador].edad;
				cout << "Ingrese genero (M o F): ";
				cin >> empleado[contador].genero;
				cout << "Ingrese sueldo: Q.";
				cin >> empleado[contador].sueldo;
				contador++;
			system("pause");
			system("cls");
		}
		else if (opcion == 2) {
			cout << "Listado de empleados actuales" << endl;
			for (int i = 0; i < contador; i++) {
				cout << (i + 1) << ". " << empleado[i].nombre << " - " << empleado[i].edad << " - " <<
					empleado[i].genero << " - Q." << empleado[i].sueldo << endl;
			}
			system("pause");
			system("cls");
		}
		else if (opcion == 3) {
			cout << "Listado de empleados de genero femenino" << endl;
			for (int i = 0; i < contador; i++) {
				if (empleado[i].genero == 'F' || empleado[i].genero == 'f') {
					cout << (i) << ". " << empleado[i].nombre << " - " << empleado[i].edad << " - " <<
						empleado[i].genero << " - Q. " << empleado[i].sueldo << endl;
				}
			}
			system("pause");
			system("cls");
		}
		else if (opcion == 4) {
			cout << "Listado de empleados con sueldo mayor a Q.5000" << endl;
			for (int i = 0; i < contador; i++) {
				if (empleado[i].sueldo > 4999) {
					cout << (i + 1) << ". " << empleado[i].nombre << " - " << empleado[i].edad << " - " <<
						empleado[i].genero << " - Q." << empleado[i].sueldo << endl;
				}
			}
			system("pause");
			system("cls");
		}
		else if (opcion == 5) {
			cout << "Listado de empleados con edad menor o igual a 30 años." << endl;
			for (int i = 0; i < contador; i++) {
				if (empleado[i].edad <= 30) {
					cout << (i + 1) << ". " << empleado[i].nombre << " - " << empleado[i].edad << " - " <<
						empleado[i].genero << " - Q." << empleado[i].sueldo << endl;
				}
			}
			system("pause");
			system("cls");
		}
		else if (opcion == 6) {
			string buscado;
			bool bandera = false;
			cout << "Buscar Empleado" << endl;
			cout << "Ingrese el nombre del empleado a buscar: ";
			cin >> buscado;

			for (int i = 0; i < contador; i++) {

				if (buscado == empleado[i].nombre) {
					cout << "ENCONTRADO" << endl;
					cout << "Se presentan los datos solicitados del empleado: " << endl;
					cout << "Nombre: " << empleado[i].nombre << endl;
					cout << "Edad: " << empleado[i].edad << endl;
					cout << "Genero: " << empleado[i].genero << endl;
					cout << "Sueldo: Q. " << empleado[i].sueldo << endl;
					bandera = true;
					system("pause");
					system("cls");
				}

				if (bandera==false) {
					cout << "NO ENCONTRADO" << endl;
					system("pause");
					system("cls");
				}
			}
		}

	} while (opcion != 7);
}
