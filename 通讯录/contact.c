#include "contact.h"
void menu() {
	printf("------按1添加联系人信息---------\n");
	printf("------按2删除指定联系人信息------\n");
	printf("------按2删除指定联系人信息-----\n");
	printf("------按2查找指定联系人信息-----\n");
	printf("------按2修改指定联系人信息-----\n");
	printf("------按2显示指定联系人信息-----\n");
	printf("------按2清空指定联系人信息-----\n");
	printf("------以名字排序所有联系人------\n");
};

void add(Info* data) {
	char a = 0;
	char b = 0;
	int c = 0;
	char d = 0;
	char e = 0;
	int sz = 0;
	printf("请输入名字:");
	scanf("%s", data[sz].name);
	printf("请输入性别:");
	scanf("%s", data[sz].sex);
	printf("请输入年龄:");
	scanf("%d", data[sz].age);
	printf("请输入电话:");
	scanf("%s", data[sz].tele);
	printf("请输入地址:");
	scanf("%s", data[sz].des);
	sz++;
}