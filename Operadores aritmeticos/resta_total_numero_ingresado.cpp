#include <iostream>

using namespace std;

int main() {

    long total, numero;
    
    cout << "Ingrese el numero para restar: " << endl;
    cin >> numero;
    
    for ( int i = 1 ; i <= numero ; i++ ) {
    	total -= i;
	}
    
    cout << "La resta total es: " << total << endl;
    
    return 0;
    
}
