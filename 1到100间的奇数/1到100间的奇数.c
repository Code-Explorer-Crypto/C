#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//0��ʾ����������1��ʾ����
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