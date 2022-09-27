#include <iostream>

using namespace std;

int main() {
	
	int longitudVector = 2;
	float matriz1[longitudVector][longitudVector];
	float matriz2[longitudVector][longitudVector];
	float matrizProducto[longitudVector][longitudVector];
	
	for (int i = 0; i < longitudVector; i++) {
		for (int j = 0; j < longitudVector; j++) {
			cout << "Ingrese el valor para la fila " << i << " columna " << j << "del vector 1" << endl;
			cin >> matriz1[i][j];
		}
	}
	
	for (int i = 0; i < longitudVector; i++) {
		for (int j = 0; j < longitudVector; j++) {
			cout << "Ingrese el valor para la fila " << i << " columna " << j << "del vector 2" << endl;
			cin >> matriz2[i][j];
		}
	}
	
	for (int i = 0; i < longitudVector; i++) {
		
	}
	
	

	return 0;
}
