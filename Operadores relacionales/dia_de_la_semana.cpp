#include <iostream>

using namespace std;

int main() {

    int diaDeLaSemana;
    
    cout << "Ingrese un numero (1 al 7) para saber a que dia de la semana corresponde" << endl;
    cin >> diaDeLaSemana;
    
    if (diaDeLaSemana == 1) {
    	cout << "LUNES" << endl;
	} else if (diaDeLaSemana == 2) {
		cout << "MARTES" << endl;
	} else if (diaDeLaSemana == 3) {
		cout << "MIERCOLES" << endl;
	} else if (diaDeLaSemana == 4) {
		cout << "JUEVES" << endl;
	} else if (diaDeLaSemana == 5) {
		cout << "VIERNES" << endl;
	} else if (diaDeLaSemana == 6) {
		cout << "SABADO" << endl;
	} else if (diaDeLaSemana == 7) {
		cout << "DOMINGO" << endl;
	} else {
		cout << "El dia ingresado esta fuera de rango" << endl;
	}
    
    return 0;
}
