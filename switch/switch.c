#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
	
	printf("��������������ڼ���1-7��:\n");
	int a = 0;
	scanf("%d", &a);
	switch (a) {
	case 1:
		printf("����������һ");
		break;
		case 2:
		printf("���������ڶ�");
		break;
		case 3:
		printf("������������");
		break;
		case 4:
		printf("������������");
		break;
		case 5:
		printf("������������");
		break;
		case 6:
		printf("������������");
		break;
		case 7: 
		printf("������������");
		break;
		default:
		printf("������������");
	}
	return 0;
 }