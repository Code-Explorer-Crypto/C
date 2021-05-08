#include <stdio.h>
int main() {
	int i = 0, j = 0;
	int a[6][7];
	int n = 6;
	a[i][j] = n++;
	printf("%d", a[i][j]);
	return 0;
}