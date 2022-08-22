#include <iostream>

using namespace std;

int main () {
	
	float nota_uno, nota_dos, nota_tres, definitiva;
	
	cout << "Ingrese la nota uno: " << endl;
	cin >> nota_uno;
	cout << "Ingrese la nota dos: " << endl;
	cin >> nota_dos;
	cout << "Ingrese la nota tres: " << endl;
	cin >> nota_tres;
	
	definitiva = (nota_uno + nota_dos + nota_tres) / 3;
	
	cout << "Su definitiva es: " << definitiva << endl;
		
	return 0;
}

