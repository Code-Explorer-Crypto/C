//˳���:����,���������Ϣ:��ЧԪ�ظ���,���������
//��̬˳���
#define MAX 100
typedef int SQLDataType;
struct seqList2{
	SQLDataType data[MAX];  /*��ͬ��������*/
	int size;               /*��ЧԪ�ظ���*/ 
};

//��̬˳���
typedef struct seqList {
	SQLDataType* data;   //����ָ��
	int size;            //��ЧԪ�صĸ���
	int capacity;        //���������
}seqList;

//��ʼ��˳���
void initseqList(seqList* sl);

//��ɾ���
//β��
void pushBack(seqList* sl, SQLDataType val);

