////输入图案
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main() {
//	char str[] = "             ";
//	char str2[] = "*************";
//	int size = sizeof(str) / sizeof(str[0]) - 1;
//	int mid = size / 2 + 1;
//	for (int i = 0; i <= size / 2 ; i++) {
//		for (int j = 0; j <= i; j++) {
//			char* a = &str;
//			*(a + size / 2 + j) = '*';
//			*(a + size / 2 - j) = '*';
//		}
//		printf("%s\n", str);
//	}
//	
//	for (int i = 0; i <= size / 2 ; i++) {
//		for (int j = 0; j <= i; j++) {
//			char* a = &str2;
//			*(a + j) = ' ';
//			*(a + size - 1 - j) = ' ';
//		}
//		printf("%s\n", str2);
//	}
//
//	return 0;
//  }



//2. 求出0～100000之间的所有“水仙花数”并输出。
//  “水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，
//  如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。



//#define _CRT_SECURE_NO_WARNINGS
//#include "math.h"
//#include <stdio.h>
//int wei(int i) {
//	int j = 1;
//	while (i / 10 != 0) {
//		i = i / 10;
//		j++;
//	}
//	return j;
//}
//
//int shui(int i) {
//	int j = wei(i);
//	int f = 0;
//	for (int g = 1; g <= j; g++,i = i / 10) {
//		
//		int b =  i % 10;
//		 int e = pow(b, j);/*b ^ wei(i);*/
//		f = f + e;
//		
//	}
//	return f;
//	
//}
//
//
//int main(){
//	int i = 0;
//	for ( i = 0; i <= 100000; i++) {
//		if (shui(i) == i) {
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//  }



////3.求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main() {
//	int Sn = 0;
//	int a = 0;
//	scanf("%d", &a);
//	int aa = 10 * a + a;
//	int aaa = 100 * a + 10 * a + a;
//	int aaaa = 1000 * a + 100 * a + 10 * a + a;
//	int aaaaa = 10000 * a + 1000 * a + 100 * a + 10 * a + a;
//	Sn = a + aa + aaa + aaaa + aaaaa;
//	printf("%d", Sn);
//	return 0;
//}
