#include <iostream>

using namespace std;

int main() {
	
	int longitudVector = 2;
	float matriz[longitudVector][longitudVector];
	float matrizTranspuesta[longitudVector][longitudVector];
	
	for (int i = 0; i < longitudVector; i++) {
		for (int j = 0; j < longitudVector; j++) {
			cout << "Ingrese el valor para la fila " << i << " columna " << j << endl;
			cin >> matriz[i][j];
			matrizTranspuesta[j][i] = matriz[i][j];
		}
	}
	
	cout << "\nMatriz normal" << endl;
	for (int i = 0; i < longitudVector; i++) {
		for (int j = 0; j < longitudVector; j++) {
			cout << matriz[i][j] << "\t" ;
		}
		cout << "" << endl;
	}

	cout << "\nMatriz Transpuesta" << endl;
	for (int i = 0; i < longitudVector; i++) {
		for (int j = 0; j < longitudVector; j++) {
			cout << matrizTranspuesta[i][j] << "\t" ;
		}
		cout << "" << endl;
	}

	return 0;
}
