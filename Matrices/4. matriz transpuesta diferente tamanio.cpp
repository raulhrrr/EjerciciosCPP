#include <iostream>

using namespace std;

int main() {
	
	float matriz[2][4];
	float matrizTranspuesta[4][2];
	
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			cout << "Ingrese el valor para la fila " << i << " columna " << j << endl;
			cin >> matriz[i][j];
			matrizTranspuesta[j][i] = matriz[i][j];
		}
	}
	
	cout << "\nMatriz normal" << endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			cout << matriz[i][j] << "\t" ;
		}
		cout << "" << endl;
	}

	cout << "\nMatriz Transpuesta" << endl;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 2; j++) {
			cout << matrizTranspuesta[i][j] << "\t" ;
		}
		cout << "" << endl;
	}

	return 0;
}
