#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int fact(int n) {
	int b = 1;
	for (int a = 1;a < n + 1;a++) {
		b = b * a;
	}
	return b;
}

int main() {
	printf("������һ������: ");
	int a = 0;
	scanf("%d", &a);
	int result = fact(a);
	printf("�׳�Ϊ%d\n", result);
	return 0;
 }