#include <iostream>

using namespace std;

int main() {
	
	system("color 30");
	
	int numero, sumaImpares = 0;
	
	do {
		cout << "Ingrese un numero (se sumaran los impares), ingrese 0 si desea salir" << endl;
		cin >> numero;
		
		if (numero % 2 != 0 ) {
			sumaImpares += numero;
		}
		
	} while (numero != 0);
	
	cout << "Suma Total: " << sumaImpares << endl;
	
	return 0;
}
