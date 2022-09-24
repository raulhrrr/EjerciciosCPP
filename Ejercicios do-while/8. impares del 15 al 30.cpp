#include <iostream>

using namespace std;

int main() {
	
	system("color 30");
	
	int inicio = 15;
	
	do {
		
		if (inicio % 3 == 0 && inicio <= 30) {
			cout << inicio << endl;
		}
		
		inicio++;
		
	} while (inicio <= 30);
	
	return 0;
}
