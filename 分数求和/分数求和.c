#include <stdio.h>
int main() {
	double sum = 0;
	double sum1 = 0;
	double sum2 = 0;
	for (double i = 1;i <= 100;i += 2) {
		sum1 = sum1 + 1.0 / i;
	}
	for (double i = 2;i <= 100;i += 2) {
		sum2 = sum2 - 1.0 / i;
	}
	sum = sum1 + sum2;
	printf("%f", sum);
	return 0;
}