#include <iostream>

using namespace std;

int loadMenu() {
	
	int option;
	
	cout << "1. Sumar" << endl;
	cout << "2. Restar" << endl;
	cout << "3. Multiplicar" << endl;
	cout << "4. Finalizar programa" << endl;
	
	cin >> option;
	
	return option;
}

int main() {
	
	cout << "Calculadora de matrices" << endl;
	
	int option;
	
	do {
		option = loadMenu();
		cout << option << endl;	
		
	} while (true);
	
	/*
	float sumaProducto;
	float matriz1[3][2];
	float matriz2[2][3];
	float matrizProducto[3][3];
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			cout << "Ingrese el valor para la fila " << i << " columna " << j << " del vector 1" << endl;
			cin >> matriz1[i][j];
		}
	}
	
	cout << "\n" << endl;
	
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "Ingrese el valor para la fila " << i << " columna " << j << " del vector 2" << endl;
			cin >> matriz2[i][j];
		}
	}
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			sumaProducto = 0;
			for (int k = 0; k < 2; k++) {
				sumaProducto += matriz1[i][k] * matriz2[k][j];
			}
			matrizProducto[i][j] = sumaProducto;
		}
	}
	
	cout << "\nMatriz 1" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			cout << matriz1[i][j] << "\t" ;
		}
		cout << "" << endl;
	}
		
	cout << "\nMatriz 2" << endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << matriz2[i][j] << "\t" ;
		}
		cout << "" << endl;
	}
	
	
	cout << "\nMatriz producto" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << matrizProducto[i][j] << "\t" ;
		}
		cout << "" << endl;
	}
	*/

	return 0;
}
