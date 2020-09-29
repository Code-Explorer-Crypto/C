#include <stdio.h>
int main()
{
	char  a = 1;
	short b = 1;
	int c = 1;
	long d = 1;
	long long e = 1;
	float f = 1.0f;
	double g = 1.0;
	printf("char = %d\n", sizeof(a));
	printf("short = %d\n", sizeof(b));
	printf("int = %d\n", sizeof(c));
	printf("long = %d\n", sizeof(d));
	printf("longlong = %d\n", sizeof(e));
	printf("float = %d\n", sizeof(f));
	printf("double = %d\n", sizeof(g));
	return 0;
  }