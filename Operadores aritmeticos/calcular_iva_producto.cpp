#include <iostream>

using namespace std;

int main () {
	
	long valor_producto, valor_producto_iva;
	cout << "Ingrese el valor del producto: " << endl;
	cin >> valor_producto;
	
	valor_producto_iva = valor_producto * 1.19;
	cout << "El valor del producto con iva es: " << valor_producto_iva << endl;
	
	return 0;
}
