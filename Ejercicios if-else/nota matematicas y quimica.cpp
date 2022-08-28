#include <iostream>

using namespace std;

int main() {
	float notaMatematicas, notaQuimica;
	cout << "Ingrese la nota de matematicas: " << endl;
	cin >> notaMatematicas;
	
	cout << "Ingrese la nota de quimica: " << endl;
	cin >> notaQuimica;
	
	if (notaMatematicas >= 60 && notaQuimica >= 80) {
		cout << "pasaste..." << endl;
	}
	
	return 0;
}
