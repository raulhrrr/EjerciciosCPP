#include <iostream>

using namespace std;

int main() {
	
	system("color 30");
	
	int i = 1, numeroPersonas, edad, acumuladoEdades = 0;
	
	cout << "Ingrese el numero de personas a evaluar" << endl;
	cin >> numeroPersonas;
	
	if (numeroPersonas == 0) {
		cout << "0 personas por evaluar, finalizando programa" << endl;
		return 0;
	}
	
	do {
		
		cout << "Ingrese la edad de la persona #" << i << endl;
		cin >> edad;
		
		if (edad > 18 && edad <= 45) {
			acumuladoEdades += edad;
		}
		
		i++;
		
	} while (i <= numeroPersonas);
	
	cout << "Acumulado de las edades: " << acumuladoEdades << endl;
	
	return 0;
}
