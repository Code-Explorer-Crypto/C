#include <stdio.h>
struct Student
{
	char name[20];
	int age;
	int 年份;
 };

int main()	
{
	struct Student s = { "张三", 18 ,2000 };
	printf("%s\n", s.name);
	printf("%d\n", s.age);
	printf("%d\n", s.年份);
	return 0;
}