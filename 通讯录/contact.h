//ʵ��һ��ͨѶ¼��
//
//ͨѶ¼���������洢1000���˵���Ϣ��ÿ���˵���Ϣ�������������Ա����䡢�绰��סַ
//
//�ṩ������
//
//�����ϵ����Ϣ
//ɾ��ָ����ϵ����Ϣ
//����ָ����ϵ����Ϣ
//�޸�ָ����ϵ����Ϣ
//��ʾ������ϵ����Ϣ
//���������ϵ��
//����������������ϵ��


//���͵������ͺ���������
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

//�˵�
void menu();

//�������
void add(Data* s);

//��ʼ��
Init(Data* s);

//����
void capacity(Data* s);

//ɾ��
void del(Data* s);

//����
int find(Data* s, char name[]);

//�޸�����
void repear(Data* s, int cap);

//show
void show(Data* s);