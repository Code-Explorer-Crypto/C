#include "seqList.h"
#include <stdlib.h>
void initseqList(seqList* sl) {
	if(sl = NULL)
		return;
	sl->data = NULL;
	sl->size = 0;
	sl->capacity = 0;
}

//��ɾ���
//β��
void pushBack(seqList* sl, SQLDataType val) {
	if (sl == NULL)
		return;
	
}

//�������
	//  1.����ռ�
	//  2.����ԭ������
	//  3.�ͷ�ԭ�пռ�
	//  4.��������
	void seqListcapacity(seqList* sl){
		//�ռ�����,����
		if (sl->size == sl->capacity) {
			//1.���µĿռ�
			int newcapacity =  sl->capacity == 0 ? 1 : 2 * sl->capacity;
			SQLDataType* tmp = (SQLDataType*)malloc(newcapacity * sizeof(SQLDataType));
			//2.����
			memcpy(tmp, sl->data, sl->size);
			//3.�ͷ�ԭ�пռ�
			free(sl);
			sl->data = tmp;
			//4.��������
			sl->capacity = newcapacity;
		}
	}
	////β��
	//sl->data[sl->size] = val;
	//sl->size++;


int main() {
}