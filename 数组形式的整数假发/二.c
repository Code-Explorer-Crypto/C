// 已知数组A,A数组的大小ASize,返回的数组形式returnSize
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int* addToArrayForm(int* num, int numSize, int k, int* returnSize) {
	int kSize = 0;
	int jin = 0;
	*returnSize = 0;
	while (k /= 10) {
		kSize++;
	}
	int s = fmax(kSize, numSize);
	int* res = (int*)malloc(sizeof(int) * (s + 1));
	for (int j = 0;j < s + 1;j++) {
		res[s - j] = num[numSize - j - 1] + k % 10 + jin;
		if (res[s - j] > 10) {
			res[s - j] = res[s - j] % 10;
			jin = res[s - j] / 10;
		}
		if (k < 10) {
			k = 0;
		}
		else
			k /= 10;
	}
	return res;
}