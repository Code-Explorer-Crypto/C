//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main() {
//	int arr[100] = { 0 };
//	int n = 0;
//	int A = 0;
//	scanf("%d", &A);
//	for (n = 0;n < 1000;n++) {
//		if (n == 0) {
//			arr[0] = 0;
//			arr[n + 1] = 1;
//		}
//		else if (n == 1) {
//			arr[1] = 1;
//			arr[n + 1] = arr[n] + arr[n - 1];
//		}
//		else if (n > 1) {
//			arr[n + 1] = arr[n] + arr[n - 1];
//		    arr[n + 2] = arr[n + 1] + arr[n];
//			arr[n] = arr[n - 2] + arr[n - 1];
//		}
//		
//		 if (arr[n + 1] >= A) {
//			break;
//		}
//		/*break;*/
//	}
//
//	/*printf("%d", n);*/
//	if ((A - arr[n]) <= (arr[n + 1] - A)) {
//		printf("需要%d步", A - arr[n]);
//	}
//	else if ((A - arr[n]) >= (arr[n + 1] - A)) {
//		printf("需要%d步", arr[n + 1] - A);
//	}
//  }