#include <iostream>

using namespace std;

int main() {
	
	int longitudVector = 2;
	float sumaProducto;
	float matriz1[longitudVector][longitudVector];
	float matriz2[longitudVector][longitudVector];
	float matrizProducto[longitudVector][longitudVector];
	
	for (int i = 0; i < longitudVector; i++) {
		for (int j = 0; j < longitudVector; j++) {
			cout << "Ingrese el valor para la fila " << i << " columna " << j << " del vector 1" << endl;
			cin >> matriz1[i][j];
		}
	}
	
	cout << "\n" << endl;
	
	for (int i = 0; i < longitudVector; i++) {
		for (int j = 0; j < longitudVector; j++) {
			cout << "Ingrese el valor para la fila " << i << " columna " << j << " del vector 2" << endl;
			cin >> matriz2[i][j];
		}
	}
	
	for (int i = 0; i < longitudVector; i++) {
		for (int j = 0; j < sizeof(matriz1[i]) / sizeof(int); j++) {
			sumaProducto = 0;
			for (int k = 0; k < longitudVector; k++) {
				sumaProducto += matriz1[i][k]	 * matriz2[k][j];
			}
			matrizProducto[i][j] = sumaProducto;
		}
	}
	
	cout << "\nMatriz 1" << endl;
	for (int i = 0; i < longitudVector; i++) {
		for (int j = 0; j < longitudVector; j++) {
			cout << matriz1[i][j] << "\t" ;
		}
		cout << "" << endl;
	}
		
	cout << "\nMatriz 2" << endl;
	for (int i = 0; i < longitudVector; i++) {
		for (int j = 0; j < longitudVector; j++) {
			cout << matriz2[i][j] << "\t" ;
		}
		cout << "" << endl;
	}
	
	
	cout << "\nMatriz producto" << endl;
	for (int i = 0; i < longitudVector; i++) {
		for (int j = 0; j < longitudVector; j++) {
			cout << matrizProducto[i][j] << "\t" ;
		}
		cout << "" << endl;
	}
	

	return 0;
}
