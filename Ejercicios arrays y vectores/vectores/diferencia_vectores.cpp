#include <iostream>

using namespace std;

int main() {
	
	int longitudVector = 2;
	float vector1[longitudVector];
	float vector2[longitudVector];
	float vectorDiferencia[longitudVector];
	
	for (int i = 0; i < longitudVector; i++) {
		 cout << "Introduce el componente " << i << " del primer vector" << endl;
		 cin >> vector1[i];	 	
	}
	
	cout << "" << endl;
	
	for (int i = 0; i < longitudVector; i++) {
		 cout << "Introduce el componente " << i << " del segundo vector" << endl;
		 cin >> vector2[i];
	}
	
	for (int i = 0; i < longitudVector; i++) {
	 	vectorDiferencia[i] = vector1[i] - vector2[i];
	}
	
	cout << "" << endl;
	
	cout << "Diferencia entre el vector 1 y 2" << endl;
	for (int i = 0; i < longitudVector; i++) {
	 	cout << "En el indice " << i << " se encuentra: " << vectorDiferencia[i] << endl;	
	}
	
	return 0;
}
