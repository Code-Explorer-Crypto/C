//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int max(x, y) {
//	if (x > y) {
//		return x;
//	}
//	return y;
//}

//int main() {
//	int a = 0,b = 0,c = 0;
//	int tem = 0,temp = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (b < c) {
//		tem = b;
//		b = c;
//		c = tem;
//	}
//	if (a < b) {
//		temp = a;
//		a = b;
//		b = temp;
//	}
//	if (b < c) {
//		tem = b;
//		b = c;
//		c = tem;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
// }

//int main() {
//	for (int i = 1; i <= 100;i++) {
//		if (i % 3 == 0) {
//			printf("%d ", i);
//		}
//	}
//}

//求两数的最大公约数(辗转相除法)
//int main() {
//	int a = 0, b = 0;
//	scanf("%d%d", &a, & b);
//	while (a % b != 0) {
//		int tem = 0;
//		tem = b;
//		b = a % b;
//		a = tem;
//	}
//	printf("最大公约数为%d", b);
//}

//int main()
//{
//	int a = 18;
//	int b = 24;
//	int c = 0;
//
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//
//	printf("%d\n", b);
//	return 0;
//}

//int main() {
//	for (int i = 1000;i <= 2000;i++) {
//		if (i % 100 == 0) {
//			if (i % 400 == 0) {
//				printf("%d ", i);
//			}
//		}
//		else {
//			if (i % 4 == 0) {
//				printf("%d ", i);
//			}
//		}
//	}
//}

//int main() {
//	for (int i = 100;i <= 200;i++) {
//		int j = 0;
//		for (j = 2;j < i;j++) {
//			if (i % j == 0) {
//				break;
//			}
//		}
//		if (j == i ) {
//			printf("%d ", i);
//		}
//	}
//}


