#include "contact.h"
//�˵�
void menu() {
	printf("------��ADD�����ϵ����Ϣ------------\n");
	printf("------��DELɾ��ָ����ϵ����Ϣ--------\n");
	printf("------��SEARCH����ָ����ϵ����Ϣ-----\n");
	printf("------��REPEAR�޸�ָ����ϵ����Ϣ-----\n");
	printf("------��SHOW��ʾָ����ϵ����Ϣ-------\n");
	printf("------��CLEAR���ָ����ϵ����Ϣ------\n");
	printf("------��SORT����������������ϵ��-----\n");
};

//�����ϵ��
void add(Data* s) {
	printf("%d", s->cap);
	printf("����������:");
	scanf("%s", s->data[s->cap]->name);
	printf("�������Ա�:");
	scanf("%s", s->data[s->cap]->sex);
	printf("����������:");
	scanf("%d", s->data[s->cap]->age);
	printf("������绰:");
	scanf("%s", s->data[s->cap]->tele);
	printf("�������ַ:");
	scanf("%s", s->data[s->cap]->des);
	s->cap++;
}

//����
void capacity(Data *s) {
	if ((s->cap) % 3 == 0) {
	    Info* c = (Info*) realloc(s->data,(s->cap + 3) * sizeof(Info));
		printf("���ݳɹ�");
	}
}

//��ʼ��ͨѶ¼
Init(Data* s) {
	s->cap = 0;
	s->data[3]= (Info*) malloc(3*sizeof(Info)) ;
}