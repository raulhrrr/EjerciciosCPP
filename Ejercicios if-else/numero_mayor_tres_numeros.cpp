#include <iostream>

using namespace std;

	int main() {

    int numero_uno, numero_dos, numero_tres;
    
    cout << "Ingrese el primer numero" << endl;
    cin >> numero_uno;
    cout << "Ingrese el segundo numero" << endl;
    cin >> numero_dos;
	cout << "Ingrese el tercer numero" << endl;
    cin >> numero_tres;
	
	if (numero_uno == numero_dos && numero_dos == numero_tres) {
		cout << "Todos los numeros son iguales" << endl;
	}
	
    if (numero_uno > numero_dos && numero_uno > numero_tres) {	
		cout << "Mayor: " << numero_uno << endl;
	} else if (numero_dos > numero_uno && numero_dos > numero_tres) {
		cout << "Mayor: " << numero_dos << endl;
	} else {
		cout << "Mayor: " << numero_tres << endl;
	}
    
    return 0;
}
