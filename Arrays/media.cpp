#include <iostream>

using namespace std;

int main() {
	
	int cantidadNumeros;
	float numero, media = 0;
	
	cout << "Cantidad de numeros a ingresar: " << endl;
	cin >> cantidadNumeros;

	int numeros[cantidadNumeros];
	
	cout << "\n" << endl;
	for (int i = 0; i < cantidadNumeros; i++) {
		cout << "Ingrese el numero " << i + 1 << endl;
		cin >> numero;
		numeros[i] = numero;
	}	
	
	cout << "Datos ingresados: " << endl;
	for (int i = 0; i < cantidadNumeros; i++) {
		media += numeros[i];
		cout << numeros[i] << endl;
	}
	
	cout << "\nMedia: " << media / cantidadNumeros << endl;
	
		
	return 0;
}
