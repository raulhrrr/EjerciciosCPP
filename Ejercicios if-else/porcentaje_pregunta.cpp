#include <iostream>

using namespace std;

int main () {
	
	int totalPreguntas, preguntasCorrectas;
	float porcentaje;
	
	cout << "Ingrese el total de preguntas: " << endl;
	cin >> totalPreguntas;
	cout << "Ingrese la cantidad de preguntas correctas" << endl;
	cin >> preguntasCorrectas;
	
	porcentaje = (preguntasCorrectas * 100) / totalPreguntas;
	
	if ( porcentaje >= 90 ) {
		cout << "Nivel maximo" << endl;
	} else if ( porcentaje >= 75 && porcentaje < 90 ) {
		cout << "Nivel medio" << endl;
	} else if ( porcentaje >= 50 && porcentaje < 75 ) {
		cout << "Nivel regular" << endl;
	} else {
		cout << "Fuera de nivel" << endl;
	}
	
		
	cout << porcentaje << endl;
		
	return 0;
}
