#include <iostream>

using namespace std;

int main() {
	
	int result;
	
	cout << "Si comparamos [true && !false] el resultado es: (1=true, 0=false)" << endl;
	cin >> result;
	
	if ( result == 1 ) {
		cout << "Correcto" << endl;
	} else {
		cout << "Incorrecto" << endl;
	}
	
	cout << "Si comparamos [(true && !false) || (true && false)] el resultado es: (1=true, 0=false)" << endl;
	cin >> result;
	
	if ( result == 1 ) {
		cout << "Correcto" << endl;
	} else {
		cout << "Incorrecto" << endl;
	}
	
	cout << "Si comparamos [true && false] el resultado es: (1=true, 0=false)" << endl;
	cin >> result;
	
	if ( result == 0 ) {
		cout << "Correcto" << endl;
	} else {
		cout << "Incorrecto" << endl;
	}
	
	cout << "Si comparamos [false && true] el resultado es: (1=true, 0=false)" << endl;
	cin >> result;
	
	if ( result == 0 ) {
		cout << "Correcto" << endl;
	} else {
		cout << "Incorrecto" << endl;
	}
	
	cout << "Si comparamos [false && false] el resultado es: (1=true, 0=false)" << endl;
	cin >> result;
	
	if ( result == 0 ) {
		cout << "Correcto" << endl;
	} else {
		cout << "Incorrecto" << endl;
	}
	
	return 0;
}
