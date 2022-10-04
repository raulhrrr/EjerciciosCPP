#include <iostream>

using namespace std;

int main() {
	
	int longitudVector = 3;
	float matriz[longitudVector][longitudVector];
	
	for (int i = 0; i < longitudVector; i++) {
		for (int j = 0; j < longitudVector; j++) {
			cout << "Ingrese el valor para la fila " << i << " columna " << j << " de la matriz" << endl;
			cin >> matriz[i][j];
		}
	}
	
	cout << "\nElementos de la matriz" << endl;
	for (int i = 0; i < longitudVector; i++) {
		for (int j = 0; j < longitudVector; j++) {
			cout << matriz[i][j] << "\t" ;
		}
		cout << "" << endl;
	}
	
	cout << "\nTotal elementos: " << longitudVector * longitudVector << endl;
		
	return 0;
}
