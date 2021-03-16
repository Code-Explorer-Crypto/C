#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int arr[9][9] = { 0 };
	for (int i = 0;i < 9;i++) {
		for (int j = 0;j < 9;j++) {
			arr[i][j] = (i + 1) * (j + 1);
			printf("%d*%d=%d ", (i + 1), (j + 1), arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}