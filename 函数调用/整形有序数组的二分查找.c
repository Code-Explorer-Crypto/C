//二分查找(数字从小到大排列):
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int HalfFind( arr[], size, a) {
	int left = 0;
	int right = size - 1;
	while (left < right) {
		int mid = (right-left) / 2;
		if (arr[mid] < a) {
			left = mid;
		}
		else if (arr[mid] > a) {
			right = mid;
		}
		else {
			printf("找到了,下标为%d", mid);
			break;
		}
	}
	printf("没找到");
	return 0;
}

int main() {
	int arr[] = { 0, 1, 2, 3, 4, 5};
	int a = 2;
	int size = sizeof(arr) / sizeof(arr[0]);
	HalfFind();
  }