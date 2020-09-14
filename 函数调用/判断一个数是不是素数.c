//素数:只能被1和自身整除的数
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int su( int a, int b) {
//	if (a % b != 0) {
//		return 1;
//	}
//	else {
//		return 0;
//	}
//  }
//
//
//  int main() {
//	  int x = 0;
//	  int i = 0;
//	  scanf("%d", &x);
//	  for ( i = 2; i < x; i++) {
//		  if (su(i, x) == 1) {
//			  continue;
//		  }
//		  else
//			  break;
//	  }
//	  if (i == x - 1 && su(i, x - 1) == 1) {
//		  printf("该数是素数");
//	  }
//	  else
//		  printf("该数不是素数");
//	  return 0;
// }




#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int IsPrime(int a) {
	int b = 2;
	for (b = 2;b < a;b++) {
		if (a % b == 0) {
			return 0;
			break;
		}
	}
	return 1;
  }

int main() {
	int d = 0;
	scanf("%d", &d);
	int e = IsPrime(d);
	if (e == 0) {
		printf("不是素数");
	}
	else if(e == 1)
		printf("是素数");
}