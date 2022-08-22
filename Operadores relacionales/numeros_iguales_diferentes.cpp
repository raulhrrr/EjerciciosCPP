#include <iostream>

using namespace std;

	int main() {

    int numero_uno, numero_dos;
    
    cout << "Ingrese el numero uno para la comparacion" << endl;
    cin >> numero_uno;
    cout << "Ingrese el numero dos para la comparacion" << endl;
    cin >> numero_dos;

    if (numero_uno != numero_dos) {
    	cout << "Los numeros ingresados son diferentes" << endl;
	} else {
		cout << "Los numeros ingresados son iguales" << endl;
	}
    
    return 0;
}
