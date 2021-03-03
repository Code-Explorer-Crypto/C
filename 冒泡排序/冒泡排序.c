#include <stdio.h>
#include <string.h>
int main() {
	void Bubble(int* a, int n);
	int a[5] = { 0, 1, 3, 2, 4 };
	size_t n = strlen(a);
	Bubble(a, n);
	printf("%d", a[0]);
	printf("%d", a[1]);
	printf("%d", a[2]);
	printf("%d", a[3]);
	printf("%d", a[4]);
}