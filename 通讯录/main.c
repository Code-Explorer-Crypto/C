//实现一个通讯录；
//通讯录可以用来存储1000个人的信息，每个人的信息包括：姓名、性别、年龄、电话、住址
//添加联系人信息
//删除指定联系人信息
//查找指定联系人信息
//修改指定联系人信息
//显示所有联系人信息
//清空所有联系人
//以名字排序所有联系人

#include "contact.h"
enum {
	ADD,
	DEL,
	SEARCH,
	REPEAR,
	SHOW,
	CLEAR,
	SORT
};

int main() {
	menu();
	Data con;
	Init(&con);
	int input = 0;
	char name[] = { 0 };
	printf("请选择:");
	scanf("%d", &input);
	switch (input) {
	case ADD:
		con = capacity(&con);
		add(&con);
		break;
	case DEL:
		del(&con);
		break;
	case SEARCH:
		scanf("%s", &name);
		printf("要查找的人序号为%d",find(&con,name));
		break;
	case REPEAR:
		scanf("%s", &name);
		repear(&con, find(&con, name));
		break;
	case SHOW:
		show(&con);
		break;
	case CLEAR:
		/*clear(&con);*/
		break;
	case SORT:	
		break;
	default:
		printf("输入有误");
	}
}

