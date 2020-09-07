#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//0表示不是奇数，1表示奇数
int IsOdd(int x) {
	if (x % 2 == 0) {
		return 0;
	}
	return 1;
}

int main() {
	int a = 1;
	while (a <= 100){
		if (IsOdd(a)) {
			printf("%d\n",a);
		}
		a+=1;
	}
	return 0;
}