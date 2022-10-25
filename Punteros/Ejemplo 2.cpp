#include <iostream>
using namespace std;

void duplica(int *x) {
	*x = *x * 4;
}

int main() {
	
	int n = 5;
	printf("n vale\n%d", n);
	
	duplica(&n);
	
	printf("\nAhora n vale \n%d", n);
	
	return 0;
	
}
