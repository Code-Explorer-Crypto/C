
#include <stdio.h>
int main() {
	int choice = 0;
	printf("����1 �ú��ô���\n0 ���ô���\n ");
	scanf("%d\n", &choice);
	if (choice == 1) {
		printf("�յ���offer");
	}
	else if (choice == 0) {
		printf("�ؼ�������");
	}
	else {
		printf("��������");
	}
	return 0;
}