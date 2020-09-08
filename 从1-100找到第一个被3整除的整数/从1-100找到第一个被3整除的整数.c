#include <stdio.h>
int main() {
	int a = 1;
	while (a<=100) {
		if (a % 3 == 0) {
			printf("%d", a);
			break;
		}
		a++;
	}
	return 0;
 }