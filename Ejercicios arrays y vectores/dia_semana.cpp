#include <iostream>

using namespace std;

int main() {
	
	int dia;

	cout << "Ingrese el dia" << endl;
	cin >> dia;
	
	switch (dia) {
		case 1:
			cout << "LUNES" << endl;
			break;
		case 2:
			cout << "MARTES" << endl;
			 break;
		case 3:
			cout << "MIERCOLES" << endl;
			 break;
		case 4:
			cout << "JUEVES" << endl;
			 break;
		case 5:
			cout << "VIERNES" << endl;
			 break;
		case 6:
			cout << "SABADO" << endl;
			 break;
		case 7:
			cout << "DOMINGO" << endl;
			 break;
	 	default:
	 		cout << "El numero ingresado no corresponde a un dia" << endl;
	}
	
	return 0;
}
