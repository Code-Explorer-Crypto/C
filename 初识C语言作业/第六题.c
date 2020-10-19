//#include <stdio.h>
//int main() {
//	for (int i = 1; i <= 100;i++) {
//		if (i % 10 == 9  || i / 10 == 9) {
//			printf("%d ", i);
//		}
//	}
//  }

//
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//
//
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}


//#include <stdio.h>
//int main() {
//	int count = 0;
//	for (int i = 1; i <= 100;i++) {
//		
//		if (i % 10 == 9  || i / 10 == 9) {
//			count++;
//		}
//	}
//	printf("%d", count);
//}


//#include <stdio.h>
//int main() {
//	float sum = 0;
//	float sum1 = 0;
//	float sum2 = 0;
//	for (float i = 1;i <= 100;i+=2) {
//		sum1 = sum1 + 1.0 / i;
//	}
//	for (float i = 2;i <= 100;i += 2) {
//		sum2 = sum2 - 1.0 / i;
//	}
//	sum = sum1 + sum2;
//	printf("%f", sum);
//}


//#include <stdio.h>
//int main() {
//	float a = 1.0;
//	float b = 2.0;
//	printf("%f", a / b);
// }


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a = 0,b = 0,c = 0,d = 0,e = 0;
	int f = 0,g = 0,h = 0,i = 0,j = 0;
	int tem = 0;
	scanf("%d%d%d%d%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j);
	int arr[] = { a, b ,c ,d ,e ,f ,g, h ,i ,j };
	for (int i = 9;i >= 0;i--) {
		if (arr[i] > arr[i - 1]) {
			tem = arr[i];
			arr[i] = arr[i - 1];
			arr[i - 1] = tem;
		}
	}
	printf("%d", arr[0]);
  }