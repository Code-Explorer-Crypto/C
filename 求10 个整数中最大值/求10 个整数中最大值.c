#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a = 0, b = 0, c = 0, d = 0, e = 0;
	int f = 0, g = 0, h = 0, i = 0, j = 0;
	int tem = 0;
	scanf("%d%d%d%d%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j);
	int arr[] = { a, b ,c ,d ,e ,f ,g, h ,i ,j };
	for (int x = 9;x >= 1;x--) {
		if (arr[x] > arr[x - 1]) {
			tem = arr[x];
			arr[x] = arr[x - 1];
			arr[x - 1] = tem;
		}
	}
	printf("%d", arr[0]);
}