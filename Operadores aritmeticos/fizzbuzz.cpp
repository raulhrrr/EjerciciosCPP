#include <iostream>

using namespace std;

int main() {

    int numero;
    
    cout << "Ingrese el numero al que llegar" << endl;
    cin >> numero;
    
    for ( int i = 1 ; i <= numero ; i++ ) {
    	if ( i % 3 == 0 && i % 5 == 0 ) {
    		cout << "fizzbuzz" << endl;
		} else if ( i % 5 == 0 ) {
			cout << "buzz" << endl;
		} else if ( i % 3 == 0 ) {
			cout << "fizz" << endl;
		} else {
			cout << i << endl;
		}
	}
    
    return 0;
}
