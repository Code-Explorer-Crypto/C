//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main() {
//	int a = 10, b = 20;
//	int* p = &a;     // ����һ�����ε�ָ�� p ���� p ָ���� a �ĵ�ַ
//	printf("%d\n", *p); // һ��������,��Ϊȡp(��Ϊ&a)�Ľ�����,��ȡa��ַ��������
//	int** pp = &p;   // ����һ�����͵�ָ�� pp ���� pp ָ���� p �ĵ�ַ
//	printf("%d", **pp);// һ��������,��Ϊȡpp(��Ϊ&p)�Ľ�����,��ȡp��ַ��������
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//struct Point {
//	int x;
//	int y;
//};
//
//int main() {
//	struct Point s = { 3, 5 };
//	printf("%d %d", s.x, s.y);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//	struct S {
//		char a : 3;    //����1���ֽڵĿռ�, ʣ5������λû��                                                0000 0000
//			char b : 4;    //��a����ʣ�µĿռ�, ʣ1������λû��
//			char c : 5;    //����1���ֽڵĿռ�, ʣ3������λû��(��Ϊ1������λ�Ų���c, �������¿���һ���ռ�, ��c)     0000 0000
//			char d : 4;    //����1���ֽڵĿռ�, ʣ4������λû��(��Ϊ3������λ�Ų���d, �������¿���һ���ռ�, ��d)     0000 0000
//	};
//
//	int main() {
//		struct S s = { 0 };
//		s.a = 10;    //10-- - 1010      ��Ϊaֻ��3����λ�ռ�, ����ȡ1010�ĺ���λ010, �ŵ�a���ٵĿռ�ĵ͵�ַ   0000 0 / 010
//			s.b = 12;    //12-- - 1100      ��Ϊb��4����λ�ռ�, ����ȡ1100, �ŵ�a���ٵĿռ���a������ǰ��          0 / 110 0 / 010
//			s.c = 3;      //3-- - 0011      ��Ϊc��5����λ�ռ�, ����ȡ0 0011, �ŵ�c���ٵĿռ�ĵ͵�ַ             000 / 0 0011
//			s.d = 4;      //4-- - 0100      ��Ϊd��4����λ�ռ�, ����ȡ0100, �ŵ�d���ٵĿռ�ĵ͵�ַ               0000 / 0100
//			printf("%d\n", sizeof(struct S));
//		return 0;
//	}


//enum Color {
//	Red = 9,
//	Green = 12,
//	Blue
//};
//
//int main() {
//	enum Color c = Red;
//	printf("%d\n", Red);
//	printf("%d\n", Green);
//	printf("%d\n", Blue);
//	return 0;
//}

//union U {
//	short s[7];
//	int i;
//};
//
//int main() {
//	union U u = { 0 };
//	printf("%d\n",sizeof(union U));
//		return 0;
//}



//ʵ��һ��ͨѶ¼��
//
//ͨѶ¼���������洢1000���˵���Ϣ��ÿ���˵���Ϣ�������������Ա����䡢�绰��סַ
//
//�ṩ������
//
//�����ϵ����Ϣ
//ɾ��ָ����ϵ����Ϣ
//����ָ����ϵ����Ϣ
//�޸�ָ����ϵ����Ϣ
//��ʾ������ϵ����Ϣ
//���������ϵ��
//����������������ϵ��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 1000
#define Name_Max 1000
#define Sex_Max 1000
#define Age_Max 1000
#define Tel_Max 1000
#define Add_Max 1000

typedef struct PeoInfo {
	char name[Name_Max];
	char sex[Sex_Max];
	int age[Age_Max];
	int tel[Tel_Max];
	char add[Add_Max];
}PeoInfo;

struct Com {
	PeoInfo data[MAX];
};

int main() {
	
 }