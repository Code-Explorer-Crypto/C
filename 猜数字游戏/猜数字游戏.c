//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//int main() {
//	int num = rand() % 100 + 1;
//	int a = 0;
//	for (int i = 1; i <= 3; i++) {
//		printf("���");
//		scanf("%d", &a);
//		if (a < num) {
//			printf("��С��\n");
//			continue;
//		}
//		else if (a > num) {
//			printf("�´���\n");
//			continue;
//		}
//		else {
//			printf("�¶���");
//			break;
//		}
//		if (i == 3)
//		printf("�������λ���������");
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
//		printf("���");
//		scanf("%d", &a);
//		if (a < num) {
//			printf("��С��\n");
//			continue;
//		}
//		else if (a > num) {
//			printf("�´���\n");
//			continue;
//		}
//		else {
//			printf("�¶���");
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
		printf("���һ������(1-100֮�������)");
		scanf("%d", &num);
		
		if (num < a) {
			printf("��С��\n");
			continue;
		}
		else if (num > a) {
			printf("�´���\n");
			continue;
		}
		else
			printf("�¶���\n");
		break;
	}
	return 0;
}


int Menue() {
	int choice = 0;
	printf("-----����0:��ʼ��Ϸ-----\n");
	printf("-----����1:������Ϸ-----\n");
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
			printf("��Ϸ����");
			break;
		}
	}
	return 0;
}