#include <iostream>

using namespace std;

int main() {
	
	int signo;

	cout << "Ingrese el signo del zodiaco para conocer su categoria\n" << endl;
	
	cout << "1. Aries" << endl;
	cout << "2. Tauro" << endl;
	cout << "3. Geminis" << endl;
	cout << "4. Cancer" << endl;
	cout << "5. Leo" << endl;
	cout << "6. Virgo" << endl;
	cout << "7. Libra" << endl;
	cout << "8. Escorpio" << endl;
	cout << "9. Sagitario" << endl;
	cout << "10. Capricornio" << endl;
	cout << "11. Acuario" << endl;
	cout << "12. Piscis\n" << endl;	
	
	cin >> signo;
	
	switch (signo) {
		case 1:
			cout << "Fuego" << endl;
			break;
		case 2:
			cout << "Tierra" << endl;
			break;
		case 3:
			cout << "Aire" << endl;
			break;
		case 4:
			cout << "Agua" << endl;
			break;
		case 5:
			cout << "Fuego" << endl;
			break;
		case 6:
			cout << "Tierra" << endl;
			break;
		case 7:
			cout << "Aire" << endl;
			break;
		case 8:
			cout << "Agua" << endl;
			break;
		case 9:
			cout << "Fuego" << endl;
			break;
		case 10:
			cout << "Tierra" << endl;
			break;
		case 11:
			cout << "Aire" << endl;
			break;
		case 12:
			cout << "Agua" << endl;
			break;
	 	default:
	 		cout << "ERROR: " << signo << " no está asociado a ningún signo." << endl;
	}
	
	return 0;
}
