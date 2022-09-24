#include <iostream>

using namespace std;

int main() {
	
	system("color 30");
	
	long double numero, numeroMayor = 0;
	
	do {
		cout << "Ingrese cualquier numero, si desea salir ingrese 0" << endl;
		cin >> numero;
		
		if (numero > numeroMayor) {
			numeroMayor = numero;	
		}
		
	} while (numero != 0);
	
	cout << "Numero mayor: " << numeroMayor << endl;
	
	return 0;
}
