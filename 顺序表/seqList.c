#include "seqList.h"
#include <stdlib.h>
void initseqList(seqList* sl) {
	if(sl = NULL)
		return;
	sl->data = NULL;
	sl->size = 0;
	sl->capacity = 0;
}

//增删查改
//尾插
void pushBack(seqList* sl, SQLDataType val) {
	if (sl == NULL)
		return;
	
}

//容量检查
	//  1.申请空间
	//  2.拷贝原有数据
	//  3.释放原有空间
	//  4.更新容量
	void seqListcapacity(seqList* sl){
		//空间已满,扩容
		if (sl->size == sl->capacity) {
			//1.开新的空间
			int newcapacity =  sl->capacity == 0 ? 1 : 2 * sl->capacity;
			SQLDataType* tmp = (SQLDataType*)malloc(newcapacity * sizeof(SQLDataType));
			//2.拷贝
			memcpy(tmp, sl->data, sl->size);
			//3.释放原有空间
			free(sl);
			sl->data = tmp;
			//4.更新容量
			sl->capacity = newcapacity;
		}
	}
	////尾插
	//sl->data[sl->size] = val;
	//sl->size++;


int main() {
}