#include <iostream>

using namespace std;

int main() {
	
	system("color 30");
	
	int numero;
	
	do {
		cout << "Ingrese cualquier numero, si desea salir ingrese 0" << endl;
		cin >> numero;
	} while (numero != 0);
	
	return 0;
}
