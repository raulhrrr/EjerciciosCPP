#include <iostream>

using namespace std;

int main() {

    int edad;
    
    cout << "Ingrese su edad para comprobar si puede ingresar al bar " << endl;
    cin >> edad;
    
    if (edad >= 18) {
    	cout << "Puede ingresar" << endl;
	} else {
		cout << "No puede ingresar" << endl;
	}
    
    return 0;

}
