#include <iostream>

using namespace std;

int main() {

    long suma, numero;
    
    cout << "Ingrese el numero para sumar: " << endl;
    cin >> numero;
    
    for ( int i = 1 ; i <= numero ; i++ ) {
    	suma += i;
	}
    
    cout << "La suma total es: " << suma << endl;
    
    return 0;
    
}
