#include <iostream>
#include <locale.h>
#include <locale>
#include <string>
using namespace std;

struct cita {

	string texto;
	string datos;
	string nom;
	string ntra;
	string desc;

};

int main()
{
	cita Acita[3];
	int salir, exit;
	char nombre[50];
	char tratamiento[50];
	char descripcion[200];
	float pu, ct, put, total, hora;
	int agoc;
	int cv;
	int opcion;
	int menu;
	int i;
	int j;
	do
	{
		cout << "CONSULTORIO DENTAL" << endl;
		cout << "1. Agendar cita" << endl;
		cout << "2. Modificar cita" << endl;
		cout << "3. Eliminar cita" << endl;
		cout << "4. Lista de citas vigentes" << endl;
		cout << "5. Limpiar pantalla" << endl;
		cout << "6. Salir" << endl;
		cin >> opcion;

		switch (opcion)
		{
		case 1:
			do {
				for (i = 0; i < 3; i++) {
					cout << "ingrese su nombre completo:" << endl;
					cin >> Acita[i].nombre;
					cout<<"Hora del tratamiento (en formato 24hrs): " << endl;
					cin >> Acita[i].hora;
					cout << "ingrese el tratamiento a realizar:" << endl;
					cin >> Acita[i].tratamiento;
					cout << "Ingrese la descripcion del tratamiento" << endl;
					cin >> Acita[i].descripcion;
					cout << "Ingrese el Precio unitario del tratamiento" << endl;
					cin >> Acita[i].put;
					cout << "Ingrese cantidad del tratamiento" << endl;
					cin >> Acita[i].ct;
					cout << "Ingrese el Precio unitario" << endl;
					cin >> Acita[i].pu;
					total = ct * put + pu;
					cout << "El total es " << total << endl;
					cout << " Quiere agendar otra cita?" << endl;
					cout << "1. Si " << endl;
					cout << "2. No" << endl;
					cin >> agoc;
				} while (agoc == 1);

				break;
		case 2:
			cout << "modificar cita" << endl;
			break;
		case 3:
			do {
				cout << "Ingrese la hora de su cita: " << endl;
				cin >> cita;
				cout << "Esta seguro que quiere eliminar su cita 1. Si, 2. No" << endl;
				cin >> opcion;
				if (opcion == 1)
					cout << "Su cita se ha eliminado" << endl;
				else
					cout << "Gracias" << endl;
			} while (opcion == 0);
			break;
		case 4:
			while (op == 1) {

				for (i = 0; i < 3; i++) {
					cout << "\nNombre del paciente: " << Acita[i].nombre;
					cout << "\nHora del tratamiento (en formato 24hrs): " << Acita[i].hora;
					cout << "\nNombre del tratamient: " << Acita[i].tratamiento;
					cout << "\nDescripción: " << Acita[i].descripcion;
					cout << "\nPrecio unitario tratamiento: " << Acita[i].put;
					cout << "\nCantidad del tratamiento: " << Acita[i].ct;
					cout << "\nPrecio Unitario: " << Acita[i].pu;
					cout << "\nTotal: " << Acita[i].total << endl << endl;

				}
				opcion = 0;

				system("pause>nul");
				system("cls");
			}
			break;
		case 5:
			cout << "Limpiar la pantalla" << endl;
			break;
		case 6:
			cout << "Estas Seguro que Quieres salir?" << endl;
			cout << "1. Si" << endl;
			cout << "2. No" << endl;
			cin >> exit;
			if (exit == 1)
			{
				return 0;
			}
			else
			{
				return main();
			}
			break;

		default:
			cout << "La opcion elegida no es valida" << endl;
		}
		cout << "Ingrese 1 Para Volver al menu" << endl;
		cout << "Ingrese 2 Para Salir" << endl;
		cin >> salir;

	} while (salir == 1);



}


