//˳���:����,���������Ϣ:��ЧԪ�ظ���,���������
//��̬˳���
#define MAX 100
typedef int SQLDataType;
struct SeqList2{
	SQLDataType data[MAX];  /*��ͬ��������*/
	int size;               /*��ЧԪ�ظ���*/ 
};

//��̬˳���
typedef struct SeqList {
	SQLDataType* data;   //����ָ��
	int size;            //��ЧԪ�صĸ���
	int capacity;        //���������
}SeqList;

//�������
void SeqListcapacity(SeqList* sl);

//��ʼ��˳���
void InitseqList(SeqList* sl);

//��ɾ���
//β��
void PushBack(SeqList* sl, SQLDataType val);

//ͷ��
void PushFront(SeqList* sl, SQLDataType val);

//����λ�ò���Ԫ��
void Insert(SeqList* sl, int pos, SQLDataType val);

//βɾ
void PopBack(SeqList* sl);

//ͷɾ
void PopFront(SeqList* sl);

//ɾ������λ�õ�����
void Erase(SeqList* sl, int pos);

//��ӡ
void print(SeqList* sl);

