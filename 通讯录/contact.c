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
	printf("添加成功");
}

//增容
Info* capacity(Data *s) {
	if ((s->cap) % 3 == 0) {
	    Info* c = (Info*) realloc(s->data,(s->cap + 3) * sizeof(Info));
		printf("增容成功");
		return c;
	}
}

//初始化通讯录
Init(Data* s) {
	s->cap = 0;
	s->data[3]= (Info*) malloc(3*sizeof(Info)) ;
}

//找name名字的人的序号
int find(Data* s, char name[]) {
	for (int i = 0;i < s->cap;i++) {
		if (strcmp(s->data[i]->name, name) == 0) {
			return i;
		}
	}
}

//删除联系人
void del(Data* s) {
	int a = 0;
	printf("请选择要删除的联系人名字:");
	scanf("%s", &a);
	int b = find(s,a);
	int j = 0;
	for (j = b;j < s->cap-1;j++) {
			s->data[s->cap] = (s + 1)->data[(s + 1)->cap];
		}
	s->cap--;
	printf("删除成功");
}

//修改联系人信息
void repear(Data* s,int cap) {
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
}


//show
void show(Data* s) {
	for (int i = 0;i < (s->cap-1);i++) {
		printf("第%d组\n",s->cap+1);
		printf("名字:%s\n",s->data[s->cap]->name);
		printf("性别:%s\n",s->data[s->cap]->sex);
		printf("年龄:%s\n",s->data[s->cap]->age);
		printf("电话:%s\n",s->data[s->cap]->tele);
		printf("地址:%s\n",s->data[s->cap]->des);
	}
}

//clear
//void clear(Data* s) {
//	for (int i = 0;i < (s->cap - 1);i++) {
//
//	}
//}