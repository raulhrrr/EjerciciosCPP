#include <iostream>

using namespace std;

int main() {

    int numero;
    
    cout << "Ingrese el numero para comprobar si es par" << endl;
    cin >> numero;
    
    if (numero % 2 == 0) {
    	cout << "El numero ingresado es par" << endl;
	} else {
		cout << "El numero ingresado es impar" << endl;
	}
    
    return 0;
}
