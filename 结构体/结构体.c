#include <stdio.h>
struct Student
{
	char name[20];
	int age;
	int ���;
 };

int main()	
{
	struct Student s = { "����", 18 ,2000 };
	printf("%s\n", s.name);
	printf("%d\n", s.age);
	printf("%d\n", s.���);
	return 0;
}