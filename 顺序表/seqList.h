//顺序表:数组,数组相关信息:有效元素个数,数组的容量
//静态顺序表
#define MAX 100
typedef int SQLDataType;
struct SeqList2{
	SQLDataType data[MAX];  /*不同类型数据*/
	int size;               /*有效元素个数*/ 
};

//动态顺序表
typedef struct SeqList {
	SQLDataType* data;   //数组指针
	int size;            //有效元素的个数
	int capacity;        //数组的容量
}SeqList;

//容量检查
void SeqListcapacity(SeqList* sl);

//初始化顺序表
void InitseqList(SeqList* sl);

//增删查改
//尾插
void PushBack(SeqList* sl, SQLDataType val);

//头插
void PushFront(SeqList* sl, SQLDataType val);

//任意位置插入元素
void Insert(SeqList* sl, int pos, SQLDataType val);

//尾删
void PopBack(SeqList* sl);

//头删
void PopFront(SeqList* sl);

//删除任意位置的数据
void Erase(SeqList* sl, int pos);

//打印
void print(SeqList* sl);

