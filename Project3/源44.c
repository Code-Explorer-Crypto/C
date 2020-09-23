#include <stdio.h>
int Factor(int a) {
	if (a != 1) {
		return a * Factor(a - 1);
	}
	return 1;
}


int main() {
	int Mul = Factor(5);
	printf("%d", Mul);
	return 0;
}