#include <stdio.h>
int main() {
	int A = 10;
	int B = 20;
	int aux;

	aux = A;
	A = B;
	B = aux;

	printf("A: %d, B: %d\n", A, B);

	return 0;
}
