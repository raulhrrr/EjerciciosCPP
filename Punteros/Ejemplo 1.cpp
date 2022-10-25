#include <iostream>
using namespace std;

int main() {
	
	int aux = 4;
	int *puntero = &aux;
	cout << "La direccion de memoria del puntero es: " << &puntero << endl;
	cout << "El valor es: " << *puntero << endl;
	
	return 0;
	
}
