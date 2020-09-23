//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//int main() {
//	int num = rand() % 100 + 1;
//	int a = 0;
//	for (int i = 1; i <= 3; i++) {
//		printf("请猜");
//		scanf("%d", &a);
//		if (a < num) {
//			printf("猜小了\n");
//			continue;
//		}
//		else if (a > num) {
//			printf("猜大了\n");
//			continue;
//		}
//		else {
//			printf("猜对了");
//			break;
//		}
//		if (i == 3)
//		printf("您的三次机会已用完");
//	}
//	
//   }


//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//int main() {
//	int num = rand() % 100 + 1;
//	int a = 0;
//	while(1) {
//		printf("请猜");
//		scanf("%d", &a);
//		if (a < num) {
//			printf("猜小了\n");
//			continue;
//		}
//		else if (a > num) {
//			printf("猜大了\n");
//			continue;
//		}
//		else {
//			printf("猜对了");
//			break;
//		}
//		
//	}
//
//}


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int Game() {
	int a = rand () % 100 + 1;
	while (1) {
		int num = 0;
		printf("请猜一个数字(1-100之间的整数)");
		scanf("%d", &num);
		
		if (num < a) {
			printf("猜小了\n");
			continue;
		}
		else if (num > a) {
			printf("猜大了\n");
			continue;
		}
		else
			printf("猜对了\n");
		break;
	}
	return 0;
}


int Menue() {
	int choice = 0;
	printf("-----输入0:开始游戏-----\n");
	printf("-----输入1:结束游戏-----\n");
	scanf("%d", &choice);
	return choice;
}


int main() {
	srand((unsigned int)time(0));
	while (1) {
		int choice = Menue();
		if (choice == 0) {
			Game();
		}
		else if ( choice == 1) {
			printf("游戏结束");
			break;
		}
	}
	return 0;
}