#include <iostream>

using namespace std;

	int main() {

    int numero;
    
    cout << "Ingrese el numero a comprobar" << endl;
    cin >> numero;
    
    if (numero >= 1000) {
    	cout << "Error, el numero es mayor a 3 cifras" << endl;
	} else if (numero >= 100) {
    	cout << "El numero tiene 3 cifras" << endl;
	} else if ( numero >= 10 ) {
    	cout << "El numero tiene 2 cifras" << endl;
	} else if ( numero >= 0 ) {
		cout << "El numero tiene 1 cifra" << endl;
	} else {
		cout << "El numero ingresado es menor a 0" << endl;
	}
    
    return 0;
}
