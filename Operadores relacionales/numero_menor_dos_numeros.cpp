#include <iostream>

using namespace std;

	int main() {

    int numero_uno, numero_dos;
    
    cout << "Ingrese el primer numero" << endl;
    cin >> numero_uno;
    cout << "Ingrese el segundo numero" << endl;
    cin >> numero_dos;

    if (numero_uno < numero_dos) {
    	cout << "El numero menor es: " << numero_uno << endl;
	} else {
		cout << "El numero menor es: " << numero_dos << endl;
	}
    
    return 0;
}
