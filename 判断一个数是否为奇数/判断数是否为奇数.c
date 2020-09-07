#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a;
	scanf("%d\n",&a);
	if (a % 2 == 0) {
		printf("不是奇数");
	}
	else {
		printf("是奇数");
	}
	return 0;
}