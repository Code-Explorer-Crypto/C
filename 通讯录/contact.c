#include "contact.h"
void menu() {
	printf("------��1�����ϵ����Ϣ---------\n");
	printf("------��2ɾ��ָ����ϵ����Ϣ------\n");
	printf("------��2ɾ��ָ����ϵ����Ϣ-----\n");
	printf("------��2����ָ����ϵ����Ϣ-----\n");
	printf("------��2�޸�ָ����ϵ����Ϣ-----\n");
	printf("------��2��ʾָ����ϵ����Ϣ-----\n");
	printf("------��2���ָ����ϵ����Ϣ-----\n");
	printf("------����������������ϵ��------\n");
};

void add(Info* data) {
	char a = 0;
	char b = 0;
	int c = 0;
	char d = 0;
	char e = 0;
	int sz = 0;
	printf("����������:");
	scanf("%s", data[sz].name);
	printf("�������Ա�:");
	scanf("%s", data[sz].sex);
	printf("����������:");
	scanf("%d", data[sz].age);
	printf("������绰:");
	scanf("%s", data[sz].tele);
	printf("�������ַ:");
	scanf("%s", data[sz].des);
	sz++;
}