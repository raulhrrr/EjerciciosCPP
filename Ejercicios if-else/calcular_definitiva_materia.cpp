#include <iostream>

using namespace std;

int main () {
	
	float notaUno, nota_dos, nota_tres, definitiva;
	
	cout << "Ingrese la nota uno: " << endl;
	cin >> notaUno;
	cout << "Ingrese la nota dos: " << endl;
	cin >> nota_dos;
	cout << "Ingrese la nota tres: " << endl;
	cin >> nota_tres;
	
	definitiva = (notaUno + notaDos + notaTres) / 3;
	
	if (definitiva >= 7) {
		cout << "Promocionado" << endl;
	} else (definitiva >= 4 && definitiva < 7) {
		cout << "Regular" << endl;
	} else {
		cout << "Reprobado" << endl;
	}
		
	return 0;
}

