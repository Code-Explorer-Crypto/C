#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a = 0;
	int arr[] = { 1, 2, 3, 4, 5 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = size - 1;
	scanf("%d", &a);
	while (left <= right) {
		int mid = (left + right) / 2;
		if (arr[mid] == a) {
			printf("要查找的数下标为%d", mid);
			break;
		}
		else if(arr[mid] < a){
			left = mid + 1;
		}
		else {
			right = mid - 1;
		}
	}
	return 0;
   }