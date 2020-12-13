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

//容量检查
	//  1.申请空间
	//  2.拷贝原有数据
	//  3.释放原有空间
	//  4.更新容量
void SeqListcapacity(SeqList* sl) {
	//空间已满,扩容
	if (sl->size == sl->capacity) {
		//1.开新的空间
		int newcapacity = sl->capacity == 0 ? 1 : 2 * sl->capacity;
		SQLDataType* tmp = (SQLDataType*)malloc(newcapacity * sizeof(SQLDataType));
		//2.拷贝
		memcpy(tmp, sl->data, sl->size);
		//3.释放原有空间
		free(sl->data);
		sl->data = tmp;
		//3.更新容量
		sl->capacity = newcapacity;
	}
}

//增删查改
//尾插
void PushBack(SeqList* sl, SQLDataType val) {
	if (sl == NULL)
		return;
	SeqListcapacity(sl);
	//尾插
	sl->data[sl->size] = val;
	sl->size++;
}

//头插
void PushFront(SeqList* sl, SQLDataType val){
	SeqListcapacity(sl);
	for (int i = sl->size;i > 0;i--) {
		sl->data[i] = sl->data[i - 1];
	}
	sl->data[0] = val;
	sl->size++;
}

//任意位置插入元素
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

//尾删
void PopBack(SeqList* sl) {
	if (sl == NULL) 
		return;	
	sl->size--;
}

//头删
void PopFront(SeqList* sl) {
	for (int i = 1;i < sl->size;i++) {
		sl->data[i - 1] = sl->data[i];
	}
	sl->size--;
}

//顺序表查找
int SeqListFind(SeqList* sl, SQLDataType val) {
	for (int i = 1;i <= sl->size;i++) {
		if (sl->data[i-1] == val) {
			printf("找到了,在第%d个",i);
			return i;
		}
	}
	printf("未找到");
	return 1;
}

//删除任意位置的数据
void Erase(SeqList* sl, int pos) {
	for (int i = pos + 1;i < sl->size;i++) {
		sl->data[i - 1] = sl->data[i];
	}
	sl->size--;
}

//销毁顺序表
void SeqListDestory(SeqList* sl) {
	if (sl != NULL && sl->data != NULL) {
		free(sl->data);
		sl->data = NULL;
	}
}


//打印
void print(SeqList* sl) {
	for (int i = 0;i < sl->size;i++) {
		printf("%d", sl->data[i]);
	}
	printf("\n");
}





int main(){
	SeqList sl;
	//初始化顺序表
	InitseqList(&sl);
	//尾插
	PushBack(&sl, 1);
	//尾删
	PopBack(&sl);
	//尾插
	PushBack(&sl, 2);
	//打印
	print(&sl);
	//尾删
	PopBack(&sl);
	//打印
	print(&sl);
	//首插
	PushFront(&sl, 5);
	//打印
	print(&sl);
	/*PopFront(&sl);*/
	//任意位置插入元素
	Insert(&sl, 0, 7);
	//打印
	print(&sl);	
	//删除任意位置的数据
	Erase(&sl, 0);
	//打印
	print(&sl);
	//查找
	SeqListFind(&sl, 5);
	//销毁顺序表
	SeqListDestory(&sl);
}