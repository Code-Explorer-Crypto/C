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
	printf("��ӳɹ�");
}

//����
Info* capacity(Data *s) {
	if ((s->cap) % 3 == 0) {
	    Info* c = (Info*) realloc(s->data,(s->cap + 3) * sizeof(Info));
		printf("���ݳɹ�");
		return c;
	}
}

//��ʼ��ͨѶ¼
Init(Data* s) {
	s->cap = 0;
	s->data[3]= (Info*) malloc(3*sizeof(Info)) ;
}

//��name���ֵ��˵����
int find(Data* s, char name[]) {
	for (int i = 0;i < s->cap;i++) {
		if (strcmp(s->data[i]->name, name) == 0) {
			return i;
		}
	}
}

//ɾ����ϵ��
void del(Data* s) {
	int a = 0;
	printf("��ѡ��Ҫɾ������ϵ������:");
	scanf("%s", &a);
	int b = find(s,a);
	int j = 0;
	for (j = b;j < s->cap-1;j++) {
			s->data[s->cap] = (s + 1)->data[(s + 1)->cap];
		}
	s->cap--;
	printf("ɾ���ɹ�");
}

//�޸���ϵ����Ϣ
void repear(Data* s,int cap) {
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
}


//show
void show(Data* s) {
	for (int i = 0;i < (s->cap-1);i++) {
		printf("��%d��\n",s->cap+1);
		printf("����:%s\n",s->data[s->cap]->name);
		printf("�Ա�:%s\n",s->data[s->cap]->sex);
		printf("����:%s\n",s->data[s->cap]->age);
		printf("�绰:%s\n",s->data[s->cap]->tele);
		printf("��ַ:%s\n",s->data[s->cap]->des);
	}
}

//clear
//void clear(Data* s) {
//	for (int i = 0;i < (s->cap - 1);i++) {
//
//	}
//}