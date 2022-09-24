#include <iostream>

using namespace std;

int main() {
	
	system("color 30");
	
	int cantidadNumerosIngresados = 0;
	long double numero, sumaTotal = 0;
	
	do {
		cout << "Ingrese cualquier numero, si desea salir ingrese 0" << endl;
		cin >> numero;
		sumaTotal += numero;
		if (numero != 0) {
			cantidadNumerosIngresados++;	
		}
	} while (numero != 0);
	
	cout << "Promedio: " << sumaTotal / cantidadNumerosIngresados << endl;
	
	return 0;
}
