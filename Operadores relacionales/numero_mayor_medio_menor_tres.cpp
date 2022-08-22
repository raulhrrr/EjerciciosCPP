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
    	if (numero_dos > numero_tres) {
    		cout << "Mayor: " << numero_uno << ", medio: " << numero_dos << ", menor: " << numero_tres << endl;
		} else {
			cout << "Mayor: " << numero_uno << ", medio: " << numero_tres << ", menor: " << numero_dos << endl;	
		}
	} else if (numero_dos > numero_uno && numero_dos > numero_tres) {
		if (numero_uno > numero_tres) {
    		cout << "Mayor: " << numero_dos << ", medio: " << numero_uno << ", menor: " << numero_tres << endl;
		} else {
			cout << "Mayor: " << numero_dos << ", medio: " << numero_tres << ", menor: " << numero_uno << endl;	
		}
	} else {
		if (numero_uno > numero_dos) {
    		cout << "Mayor: " << numero_tres << ", medio: " << numero_uno << ", menor: " << numero_dos << endl;
		} else {
			cout << "Mayor: " << numero_tres << ", medio: " << numero_dos << ", menor: " << numero_uno << endl;	
		}
	}
    
    return 0;
}
