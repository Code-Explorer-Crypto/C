
#include <stdio.h>
int main() {
	int choice = 0;
	printf("输入1 好好敲代码\n0 不敲代码\n ");
	scanf("%d\n", &choice);
	if (choice == 1) {
		printf("收到好offer");
	}
	else if (choice == 0) {
		printf("回家卖红薯");
	}
	else {
		printf("输入有误");
	}
	return 0;
}