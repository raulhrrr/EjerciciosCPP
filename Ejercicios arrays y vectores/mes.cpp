#include <iostream>

using namespace std;

int main() {
	
	int mes;

	cout << "Ingrese el mes" << endl;
	cin >> mes;
	
	switch (mes) {
		case 1:
			cout << "ENERO" << endl;
			break;
		case 2:
			cout << "FEBRERO" << endl;
			 break;
		case 3:
			cout << "MARZO" << endl;
			 break;
		case 4:
			cout << "ABRIL" << endl;
			 break;
		case 5:
			cout << "MAYO" << endl;
			 break;
		case 6:
			cout << "JUNIO" << endl;
			 break;
		case 7:
			cout << "JULIO" << endl;
			 break;
		case 8:
			cout << "AGOSTO" << endl;
			break;
		case 9:
			cout << "SEPTIEMBRE" << endl;
			 break;
		case 10:
			cout << "OCTUBRE" << endl;
			 break;
		case 11:
			cout << "NOVIEMBRE" << endl;
			 break;
		case 12:
			cout << "DICIEMBRE" << endl;
			break;
	 	default:
	 		cout << "El numero ingresado no corresponde a un mes" << endl;
	}
	
	return 0;
}
