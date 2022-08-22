#include <iostream>
#include <math.h>

using namespace std;

int main() {

    double base, exponente;
    
    cout << "Ingrese la base " << endl;	
    cin >> base;
    cout << "Ingrese el exponente" << endl;
    cin >> exponente;

    cout << "La resultado de " << base << "^" << exponente << " es: " << pow(base, exponente) << endl;
    
    return 0;

}
