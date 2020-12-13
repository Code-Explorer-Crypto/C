#include <stdlib.h>
typedef int LDataType;
//定义结点:数据+指针
typedef struct ListNode {
	LDataType data;
	struct ListNode* next;
}ListNode;

//链表
typedef struct List {
	ListNode* head;
}List;

//链表的初始化
void ListInit(List* lst) {
	if(lst == NULL)
		lst->head = NULL;
}

//创建结点
ListNode* CreatList(LDataType val) {

}