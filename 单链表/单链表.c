#include <stdlib.h>
typedef int LDataType;
//������:����+ָ��
typedef struct ListNode {
	LDataType data;
	struct ListNode* next;
}ListNode;

//����
typedef struct List {
	ListNode* head;
}List;

//����ĳ�ʼ��
void ListInit(List* lst) {
	if(lst == NULL)
		lst->head = NULL;
}

//�������
ListNode* CreatList(LDataType val) {

}