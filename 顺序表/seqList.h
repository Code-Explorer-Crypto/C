//顺序表:数组,数组相关信息:有效元素个数,数组的容量
//静态顺序表
#define MAX 100
typedef int SQLDataType;
struct seqList2{
	SQLDataType data[MAX];  /*不同类型数据*/
	int size;               /*有效元素个数*/ 
};

//动态顺序表
typedef struct seqList {
	SQLDataType* data;   //数组指针
	int size;            //有效元素的个数
	int capacity;        //数组的容量
}seqList;

//初始化顺序表
void initseqList(seqList* sl);

//增删查改
//尾插
void pushBack(seqList* sl, SQLDataType val);

