#include <iostream>

using namespace std;

int main() {
	
	float vector1[2];
 	float vector2[2];
 	float vectorProducto[2];
 	
 	for (int i = 0; i < 2; i++) {
 		
		 cout << "Introduce el componente " << i << " del primer vector" << endl;
		 cin >> vector1[i];
		 	
 	}
 	
 	for (int i = 0; i < 2; i++) {
 		
		 cout << "Introduce el componente " << i << " del segundo vector" << endl;
		 cin >> vector2[i];
		 	
 	}
 	
 	for (int i = 0; i < 2; i++) {
 		
	 	vectorProducto[i] = vector1[i] * vector2[i];
		 	
 	}

	cout << "Diferencia entre el vector 1 y 2" << endl;
 	for (int i = 0; i < 3; i++) {
 	 	cout << vectorProducto[i] << endl;	
 	}
	
	return 0;
}
