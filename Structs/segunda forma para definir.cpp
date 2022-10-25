#include <iostream>
using namespace std;

int main() {
	
	struct datosPersona {
		string nombre;
		char inicial;
		int edad;
		float nota;
	};
	
	datosPersona persona;
	
	persona.nombre = "Juan";
	persona.inicial = 'J';
	persona.edad = 20;
	persona.nota = 7.5;
	cout << "La edad es: " << persona.edad << endl;
	
	return 0;
}
