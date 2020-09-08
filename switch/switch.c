#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
	
	printf("请输入今天是星期几（1-7）:\n");
	int a = 0;
	scanf("%d", &a);
	switch (a) {
	case 1:
		printf("今天是星期一");
		break;
		case 2:
		printf("今天是星期二");
		break;
		case 3:
		printf("今天是星期三");
		break;
		case 4:
		printf("今天是星期四");
		break;
		case 5:
		printf("今天是星期五");
		break;
		case 6:
		printf("今天是星期六");
		break;
		case 7: 
		printf("今天是星期天");
		break;
		default:
		printf("您的输入有误");
	}
	return 0;
 }