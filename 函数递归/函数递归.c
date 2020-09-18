#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int a(int num) {
	if (num > 9) {
		a(num / 10);
	}
	printf("%d", num % 10);
}

int main() {
	a(1234);
 }