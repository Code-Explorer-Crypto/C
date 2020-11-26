//实现一个通讯录；
//
//通讯录可以用来存储1000个人的信息，每个人的信息包括：姓名、性别、年龄、电话、住址
//
//提供方法：
//
//添加联系人信息
//删除指定联系人信息
//查找指定联系人信息
//修改指定联系人信息
//显示所有联系人信息
//清空所有联系人
//以名字排序所有联系人


//类型的声明和函数的声明
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_AGE 5
#define MAX_TELE 20
#define MAX_DES 20
typedef struct PeoInfo{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age[MAX_AGE];
	char tele[MAX_TELE];
	char des[MAX_DES];
}Info;

Info data[1000];

typedef struct Data {
	int cap;
	Info* data[3];
}Data;

//菜单
void menu();

//添加数据
void add(Data* s);

//初始化
Init(Data* s);

//扩容
void capacity(Data* s);

//删除
void del(Data* s);

//查找
int find(Data* s, char name[]);

//修改数据
void repear(Data* s, int cap);

//show
void show(Data* s);