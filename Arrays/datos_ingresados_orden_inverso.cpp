#include <iostream>

using namespace std;

int main() {
	
	int cantidadNumeros;
	float numero;
	
	cout << "Cantidad de numeros a ingresar: " << endl;
	cin >> cantidadNumeros;

	int numeros[cantidadNumeros];
	
	cout << "\n" << endl;
	for (int i = 0; i < cantidadNumeros; i++) {
		cout << "Ingrese el numero " << i + 1 << endl;
		cin >> numero;
		numeros[i] = numero;
	}	
	
	cout << "\nDatos ingresados en orden inverso: " << endl;
	for (int i = cantidadNumeros - 1; i >= 0; i--) {
		cout << numeros[i] << endl;
	}
	
	return 0;
}
