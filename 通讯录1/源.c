//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main() {
//	int a = 10, b = 20;
//	int* p = &a;     // 定义一个整形的指针 p 并且 p 指向了 a 的地址
//	printf("%d\n", *p); // 一经解引用,即为取p(即为&a)的解引用,即取a地址的内容物
//	int** pp = &p;   // 定义一个整型的指针 pp 并且 pp 指向了 p 的地址
//	printf("%d", **pp);// 一经解引用,即为取pp(即为&p)的解引用,即取p地址的内容物
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
//		char a : 3;    //开辟1个字节的空间, 剩5个比特位没用                                                0000 0000
//			char b : 4;    //用a开辟剩下的空间, 剩1个比特位没用
//			char c : 5;    //开辟1个字节的空间, 剩3个比特位没用(因为1个比特位放不下c, 所以重新开辟一个空间, 放c)     0000 0000
//			char d : 4;    //开辟1个字节的空间, 剩4个比特位没用(因为3个比特位放不下d, 所以重新开辟一个空间, 放d)     0000 0000
//	};
//
//	int main() {
//		struct S s = { 0 };
//		s.a = 10;    //10-- - 1010      因为a只用3比特位空间, 所以取1010的后三位010, 放到a开辟的空间的低地址   0000 0 / 010
//			s.b = 12;    //12-- - 1100      因为b用4比特位空间, 所以取1100, 放到a开辟的空间中a的数据前面          0 / 110 0 / 010
//			s.c = 3;      //3-- - 0011      因为c用5比特位空间, 所以取0 0011, 放到c开辟的空间的低地址             000 / 0 0011
//			s.d = 4;      //4-- - 0100      因为d用4比特位空间, 所以取0100, 放到d开辟的空间的低地址               0000 / 0100
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



//实现一个通讯录；
//
//通讯录可以用来存储1000个人的信息，每个人的信息包括：姓名、性别、年龄、电话、住址
//
//提供方法：
//
//添加联系人信息
//删除指定联系人信息
//查找指定联系人信息
//修改指定联系人信息
//显示所有联系人信息
//清空所有联系人
//以名字排序所有联系人
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