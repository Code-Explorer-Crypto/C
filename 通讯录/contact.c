#include "contact.h"
//菜单
void menu() {
	printf("------按ADD添加联系人信息------------\n");
	printf("------按DEL删除指定联系人信息--------\n");
	printf("------按SEARCH查找指定联系人信息-----\n");
	printf("------按REPEAR修改指定联系人信息-----\n");
	printf("------按SHOW显示指定联系人信息-------\n");
	printf("------按CLEAR清空指定联系人信息------\n");
	printf("------按SORT以名字排序所有联系人-----\n");
};

//添加联系人
void add(Data* s) {
	printf("%d", s->cap);
	printf("请输入名字:");
	scanf("%s", s->data[s->cap]->name);
	printf("请输入性别:");
	scanf("%s", s->data[s->cap]->sex);
	printf("请输入年龄:");
	scanf("%d", s->data[s->cap]->age);
	printf("请输入电话:");
	scanf("%s", s->data[s->cap]->tele);
	printf("请输入地址:");
	scanf("%s", s->data[s->cap]->des);
	s->cap++;
}

//增容
void capacity(Data *s) {
	if ((s->cap) % 3 == 0) {
	    Info* c = (Info*) realloc(s->data,(s->cap + 3) * sizeof(Info));
		printf("增容成功");
	}
}

//初始化通讯录
Init(Data* s) {
	s->cap = 0;
	s->data[3]= (Info*) malloc(3*sizeof(Info)) ;
}