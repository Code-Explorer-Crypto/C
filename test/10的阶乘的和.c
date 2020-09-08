#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n = 0;
	int t = 1;
	scanf("%d", &n);
	for (int i = 1;i < n + 1;i += 1) {
		t = t * i;
	}
	printf("%d\n", t);
	return 0;
}
