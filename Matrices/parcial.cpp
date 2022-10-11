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
	
	int rows, columns;
	
	cout << "Ingrese la cantidad de filas para las matrices" << endl;
	cin >> rows;
	
	cout << "Ingrese la cantidad de columnas para las matrices" << endl;
	cin >> columns;
	
	if (rows < 1 || columns < 1) {
		cout << "" << endl;
		cout << "No se puede realizar la operacion" << endl;
		cout << "El numero de filas o colmnas debe ser mayor o igual a 1" << endl;
		cout << "" << endl;
		return;
	}
	
	float matrix[2][rows][columns];
	float resultMatrix[rows][columns];
	
	// fill matrix
	for (int m = 0; m < 2; m++) {
		cout << "" << endl;
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < columns; j++) {
				cout << "Ingrese el valor para la fila " << i + 1 << " columna " << j + 1 << " de la matriz " << m + 1 << endl;
				cin >> matrix[m][i][j];
			}
		}
	}
	
	// calculate result
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			float elementFirstMatrix = matrix[0][i][j];
			float elementSecondMatrix = matrix[1][i][j];
			resultMatrix[i][j] = isAdd ? elementFirstMatrix + elementSecondMatrix : elementFirstMatrix - elementSecondMatrix;
		}
	}
	
	cout << "\nMatriz 1" << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			cout << matrix[0][i][j] << "\t" ;
		}
		cout << "" << endl;
	}
		
	cout << "\nMatriz 2" << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			cout << matrix[1][i][j] << "\t" ;
		}
		cout << "" << endl;
	}
	
	string tipoOperacion = isAdd ? "suma" : "resta";
	cout << "\nMatriz " << tipoOperacion << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			cout << resultMatrix[i][j] << "\t" ;
		}
		cout << "" << endl;
	}

	cout << "" << endl;	
	
}

void multiplyMatrix() {
	
	int rowsFirstMatrix, rowsSecondMatrix, columnsFirstMatrix, columnsSecondMatrix;
	float aux;
	
	cout << "Ingrese la cantidad de filas de la matriz 1" << endl;
	cin >> rowsFirstMatrix;
	
	cout << "Ingrese la cantidad de columnas de la matriz 1" << endl;
	cin >> columnsFirstMatrix;
	
	cout << "Ingrese la cantidad de filas de la matriz 2" << endl;
	cin >> rowsSecondMatrix;
	
	cout << "Ingrese la cantidad de columnas de la matriz 2" << endl;
	cin >> columnsSecondMatrix;
	
	cout << "" << endl;
	
	if (rowsFirstMatrix < 1 || columnsFirstMatrix < 1 || rowsSecondMatrix < 1 || columnsSecondMatrix < 1) {
		cout << "No se puede realizar la operacion" << endl;
		cout << "El numero de filas o colmnas debe ser mayor o igual a 1" << endl;
		cout << "" << endl;
		return;
	}
	
	if (columnsFirstMatrix != rowsSecondMatrix) {
		cout << "No se puede realizar la operacion" << endl;
		cout << "La cantidad de columnas en la matriz 1 es diferente a la cantidad de filas de la matriz 2" << endl;
		cout << "" << endl;
		return;
	}
	
	float matrixOne[rowsFirstMatrix][columnsFirstMatrix];
	float matrixTwo[rowsSecondMatrix][columnsSecondMatrix];
	float resultMatrix[rowsFirstMatrix][columnsSecondMatrix];
	
	for (int i = 0; i < rowsFirstMatrix; i++) {
		for (int j = 0; j < columnsFirstMatrix; j++) {
			cout << "Ingrese el valor para la fila " << i + 1 << " columna " << j + 1 << " de la matriz 1" << endl;
			cin >> matrixOne[i][j];
		}
	}
	
	cout << "\n" << endl;
	
	for (int i = 0; i < rowsSecondMatrix; i++) {
		for (int j = 0; j < columnsSecondMatrix; j++) {
			cout << "Ingrese el valor para la fila " << i + 1 << " columna " << j + 1 << " de la matriz 2" << endl;
			cin >> matrixTwo[i][j];
		}
	}
	
	// calculate result
	for (int i = 0; i < rowsFirstMatrix; i++) {
		for (int j = 0; j < columnsSecondMatrix; j++) {
			aux = 0;
			for (int k = 0; k < columnsFirstMatrix; k++) {
				aux += matrixOne[i][k] * matrixTwo[k][j];
			}
			resultMatrix[i][j] = aux;
		}
	}
	
	cout << "\nMatriz 1" << endl;
	for (int i = 0; i < rowsFirstMatrix; i++) {
		for (int j = 0; j < columnsFirstMatrix; j++) {
			cout << matrixOne[i][j] << "\t" ;
		}
		cout << "" << endl;
	}
		
	cout << "\nMatriz 2" << endl;
	for (int i = 0; i < rowsSecondMatrix; i++) {
		for (int j = 0; j < columnsSecondMatrix; j++) {
			cout << matrixTwo[i][j] << "\t" ;
		}
		cout << "" << endl;
	}
	
	
	cout << "\nMatriz producto" << endl;
	for (int i = 0; i < rowsFirstMatrix; i++) {
		for (int j = 0; j < columnsSecondMatrix; j++) {
			cout << resultMatrix[i][j] << "\t" ;
		}
		cout << "" << endl;
	}
	
	cout << "" << endl;
	
}

int main() {
	
	cout << "Calculadora de matrices" << endl;
	
	int option;
	
	do {
		
		option = loadMenu();
		
		if (option == 4) {
			break;
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
	
	cout << "Adios" << endl;
	
	return 0;
}
