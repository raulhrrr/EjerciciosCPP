#include <iostream>

using namespace std;

int loadMenu() {
	
	int option;
	
	cout << "Ingrese la opcion que desea realizar" << endl;
	cout << "1. Sumar" << endl;
	cout << "2. Restar" << endl;
	cout << "3. Multiplicar" << endl;
	cout << "4. Finalizar programa" << endl;
	cout << "" << endl;
		
	cin >> option;
	
	return option;
}

void addOrSubstractMatrix(bool isAdd) {
	
	int size;
	
	cout << "Ingrese el tamanio de la matriz" << endl;
	cin >> size;
	
	float matriz[2][size][size];
	float matrizResultado[size][size];
	
	// fill matrix
	for (int m = 0; m < 2; m++) {
		cout << "" << endl;
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				cout << "Ingrese el valor para la fila " << i << " columna " << j << " de la matriz " << m << endl;
				cin >> matriz[m][i][j];
			}
		}
	}
	
	// calculate result
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			float elementoUno = matriz[0][i][j];
			float elementoDos = matriz[1][i][j];
			matrizResultado[i][j] = isAdd ? elementoUno + elementoDos : elementoUno - elementoDos;
		}
	}
	
	cout << "\nMatriz 1" << endl;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << matriz[0][i][j] << "\t" ;
		}
		cout << "" << endl;
	}
		
	cout << "\nMatriz 2" << endl;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << matriz[1][i][j] << "\t" ;
		}
		cout << "" << endl;
	}
	
	
	cout << "\nMatriz resultado" << endl;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << matrizResultado[i][j] << "\t" ;
		}
		cout << "" << endl;
	}

	cout << "" << endl;	
	
}

bool multiplyMatrix() {
	
	int sizeFilaUno, sizeFilaDos, sizeColumnaUno, sizeColumnaDos;
	
	cout << "Ingrese la cantidad de filas de la matriz 1" << endl;
	cin >> sizeFilaUno;
	
	cout << "Ingrese la cantidad de columnas de la matriz 1" << endl;
	cin >> sizeColumnaUno;
	
	cout << "Ingrese la cantidad de filas de la matriz 2" << endl;
	cin >> sizeFilaDos;
	
	cout << "Ingrese la cantidad de columnas de la matriz 2" << endl;
	cin >> sizeColumnaDos;
	
	cout << "" << endl;
	
	if (sizeColumnaUno != sizeFilaDos) {
		cout << "No se puede realizar la operacion" << endl;
		cout << "La cantidad de columnas en la matriz 1 es diferente a la cantidad de filas de la matriz 2" << endl;
		return false;
	}
	
	float sumaProducto;
	float matriz1[sizeFilaUno][sizeColumnaUno];
	float matriz2[sizeFilaDos][sizeColumnaDos];
	float matrizProducto[sizeFilaUno][sizeColumnaDos];
	
	for (int i = 0; i < sizeFilaUno; i++) {
		for (int j = 0; j < sizeColumnaUno; j++) {
			cout << "Ingrese el valor para la fila " << i << " columna " << j << " de la matriz 1" << endl;
			cin >> matriz1[i][j];
		}
	}
	
	cout << "\n" << endl;
	
	for (int i = 0; i < sizeFilaDos; i++) {
		for (int j = 0; j < sizeColumnaDos; j++) {
			cout << "Ingrese el valor para la fila " << i << " columna " << j << " de la matriz 2" << endl;
			cin >> matriz2[i][j];
		}
	}
	
	for (int i = 0; i < sizeFilaUno; i++) {
		for (int j = 0; j < sizeColumnaDos; j++) {
			sumaProducto = 0;
			for (int k = 0; k < sizeColumnaUno; k++) {
				sumaProducto += matriz1[i][k] * matriz2[k][j];
			}
			matrizProducto[i][j] = sumaProducto;
		}
	}
	
	cout << "\nMatriz 1" << endl;
	for (int i = 0; i < sizeFilaUno; i++) {
		for (int j = 0; j < sizeColumnaUno; j++) {
			cout << matriz1[i][j] << "\t" ;
		}
		cout << "" << endl;
	}
		
	cout << "\nMatriz 2" << endl;
	for (int i = 0; i < sizeFilaDos; i++) {
		for (int j = 0; j < sizeColumnaDos; j++) {
			cout << matriz2[i][j] << "\t" ;
		}
		cout << "" << endl;
	}
	
	
	cout << "\nMatriz producto" << endl;
	for (int i = 0; i < sizeFilaUno; i++) {
		for (int j = 0; j < sizeColumnaDos; j++) {
			cout << matrizProducto[i][j] << "\t" ;
		}
		cout << "" << endl;
	}
	
	cout << "" << endl;
	
	return true;
}

int main() {
	
	cout << "Calculadora de matrices" << endl;
	
	int option;
	
	do {
		option = loadMenu();
		
		if (option == 4) {
			cout << "Adios" << endl;
			return 0;
		}
		
		switch (option) {
			case 1:
				addOrSubstractMatrix(true);
				break;
			case 2:
				addOrSubstractMatrix(false);
				break;
			case 3:
				multiplyMatrix();
				break;
			default:
				cout << "La opcion ingresada no es valida" << endl;
		}
				
		
	} while (true);
	
	return 0;
}
