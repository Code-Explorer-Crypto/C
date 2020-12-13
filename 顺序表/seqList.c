#include "seqList.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
void InitseqList(SeqList* sl) {
	if(sl == NULL)
		return;
	sl->data = NULL;
	sl->size = 0;
	sl->capacity = 0;
}

//�������
	//  1.����ռ�
	//  2.����ԭ������
	//  3.�ͷ�ԭ�пռ�
	//  4.��������
void SeqListcapacity(SeqList* sl) {
	//�ռ�����,����
	if (sl->size == sl->capacity) {
		//1.���µĿռ�
		int newcapacity = sl->capacity == 0 ? 1 : 2 * sl->capacity;
		SQLDataType* tmp = (SQLDataType*)malloc(newcapacity * sizeof(SQLDataType));
		//2.����
		memcpy(tmp, sl->data, sl->size);
		//3.�ͷ�ԭ�пռ�
		free(sl->data);
		sl->data = tmp;
		//3.��������
		sl->capacity = newcapacity;
	}
}

//��ɾ���
//β��
void PushBack(SeqList* sl, SQLDataType val) {
	if (sl == NULL)
		return;
	SeqListcapacity(sl);
	//β��
	sl->data[sl->size] = val;
	sl->size++;
}

//ͷ��
void PushFront(SeqList* sl, SQLDataType val){
	SeqListcapacity(sl);
	for (int i = sl->size;i > 0;i--) {
		sl->data[i] = sl->data[i - 1];
	}
	sl->data[0] = val;
	sl->size++;
}

//����λ�ò���Ԫ��
void Insert(SeqList* sl, int pos, SQLDataType val) {
	int a = 0;
	a = sl->data[pos];
	sl->data[pos] = val;
	sl->size++;
	for (int i = sl->size;i > sl->data[pos + 1];i--) {
		sl->data[i] = sl->data[i - 1];
	}
	sl->data[pos + 1] = a;
}

//βɾ
void PopBack(SeqList* sl) {
	if (sl == NULL) 
		return;	
	sl->size--;
}

//ͷɾ
void PopFront(SeqList* sl) {
	for (int i = 1;i < sl->size;i++) {
		sl->data[i - 1] = sl->data[i];
	}
	sl->size--;
}

//˳������
int SeqListFind(SeqList* sl, SQLDataType val) {
	for (int i = 1;i <= sl->size;i++) {
		if (sl->data[i-1] == val) {
			printf("�ҵ���,�ڵ�%d��",i);
			return i;
		}
	}
	printf("δ�ҵ�");
	return 1;
}

//ɾ������λ�õ�����
void Erase(SeqList* sl, int pos) {
	for (int i = pos + 1;i < sl->size;i++) {
		sl->data[i - 1] = sl->data[i];
	}
	sl->size--;
}

//����˳���
void SeqListDestory(SeqList* sl) {
	if (sl != NULL && sl->data != NULL) {
		free(sl->data);
		sl->data = NULL;
	}
}


//��ӡ
void print(SeqList* sl) {
	for (int i = 0;i < sl->size;i++) {
		printf("%d", sl->data[i]);
	}
	printf("\n");
}





int main(){
	SeqList sl;
	//��ʼ��˳���
	InitseqList(&sl);
	//β��
	PushBack(&sl, 1);
	//βɾ
	PopBack(&sl);
	//β��
	PushBack(&sl, 2);
	//��ӡ
	print(&sl);
	//βɾ
	PopBack(&sl);
	//��ӡ
	print(&sl);
	//�ײ�
	PushFront(&sl, 5);
	//��ӡ
	print(&sl);
	/*PopFront(&sl);*/
	//����λ�ò���Ԫ��
	Insert(&sl, 0, 7);
	//��ӡ
	print(&sl);	
	//ɾ������λ�õ�����
	Erase(&sl, 0);
	//��ӡ
	print(&sl);
	//����
	SeqListFind(&sl, 5);
	//����˳���
	SeqListDestory(&sl);
}