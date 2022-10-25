#include <iostream>
using namespace std;

bool cocinarArroz (int tiempoCoccion) {
	if (tiempoCoccion < 0) {
		return false;
	}
	
	if (tiempoCoccion >= 0 && tiempoCoccion <= 15) {
		cout << "El arroz quedo crudo" << endl;
	} else if (tiempoCoccion > 15 && tiempoCoccion <= 20) {
		cout << "El arroz quedo medio cocinado" << endl;
	} else if (tiempoCoccion > 20 && tiempoCoccion <= 30) {
		cout << "El arroz se quemo un poco" << endl;
	} else {
		cout << "Se quemo" << endl;
	}
	
	return true;
}

int main() {
	
	bool value = false;
	
	struct {
		float tazasArroz;
		float tazasAgua;
		float cucharaditasSal;
		float cantidadAceite;
		float tiempoCoccion;
		bool terminado;
	} ingredientes;
	
	cout << "Ingrese las tasas de arroz a preparar" << endl;
	cin >> ingredientes.tazasArroz;
	
	ingredientes.tazasAgua = ingredientes.tazasArroz * 2;
	cout << "Se han agregado " << ingredientes.tazasAgua << " tazas de agua" << endl;
	
	ingredientes.cucharaditasSal = ingredientes.tazasArroz;
	cout << "Se han agregado " << ingredientes.cucharaditasSal << " cucharaditas de sal" << endl;
	
	ingredientes.cantidadAceite = ingredientes.tazasArroz * 1.5;
	cout << "Se han agregado " << ingredientes.cantidadAceite << " cucharadas de aceite" << endl;
	
	cout << "Ingrese la cantidad de tiempo para la coccion" << endl;
	
	do {
		cin >> ingredientes.tiempoCoccion;
		value = cocinarArroz(ingredientes.tiempoCoccion);
		ingredientes.terminado = value;
		
		if (ingredientes.terminado) {
			break;
		}
	} while (true);
	
	bool *terminado = &ingredientes.terminado;
	cout << "Direccion del arroz terminado " << &terminado << endl;
	
	return 0;
}
