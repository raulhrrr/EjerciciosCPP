#include <iostream>

using namespace std;

int main() {
	
	system("color 30");
	
	long double numero, sumaTotal = 0;
	
	do {
		cout << "Ingrese cualquier numero, si desea salir ingrese 0" << endl;
		cin >> numero;
		sumaTotal += numero;
	} while (numero != 0);
	
	cout << "Suma total: " << sumaTotal << endl;
	
	return 0;
}
