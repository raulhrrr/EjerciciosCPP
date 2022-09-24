#include <iostream>

using namespace std;

int main() {
	
	system("color 30");
	
	long double totalFactura = 0, cantidad, precio;
	
	do {
		cout << "Ingrese la cantidad de elementos, ingrese 0 si desea salir" << endl;
		cin >> cantidad;
		
		cout << "Ingrese el precio del elemento" << endl;
		cin >> precio;
		
		totalFactura += cantidad * precio;
		
	} while (cantidad != 0);
	
	cout << "Total de la factura: " << totalFactura << endl;
	
	return 0;
}
