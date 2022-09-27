#include <iostream>

using namespace std;

int main() {
	
	int longitudVector = 3;
	float vector1[longitudVector];
	float vector2[longitudVector];
	float vectorProducto[longitudVector];
	float productoEscalar = 0;
	
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
		vectorProducto[i] = vector1[i] * vector2[i];
	 	productoEscalar += vector1[i] * vector2[i];
	}
	
	cout << "" << endl;
	
	cout << "Producto entre el vector 1 y 2" << endl;
	for (int i = 0; i < longitudVector; i++) {
	 	cout << "En el indice " << i << " se encuentra: " << vectorProducto[i] << endl;	
	}
	
	cout << "" << endl;
	
	cout << "Producto escalar: " << productoEscalar << endl;
	
	return 0;
}
