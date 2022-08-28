#include <iostream>

using namespace std;

	int main() {

    int numero;
    
    cout << "Ingrese el numero a comprobar" << endl;
    cin >> numero;
    
	if ( numero == 0 ) {
    	cout << "El numero es nulo" << endl;
	} else if ( numero > 0 ) {
		cout << "El numero es positivo" << endl;
	} else {
		cout << "El numero es negativo" << endl;
	}
    
    return 0;
}
