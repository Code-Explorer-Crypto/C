#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int left = 0;
	int x = 0;
	int arr[] = { 1, 2, 3, 4, 5 };
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	scanf("%d", &x);
	while (left <= right) {
		int mid = (left + right) / 2;
		if (arr[mid] < x) {
			left = mid + 1;
		}
		else if (arr[mid] > x) {
			right = mid - 1;
		}
		else {
			printf("找到了,下标为%d", mid);
			break;
		}
	}
 }