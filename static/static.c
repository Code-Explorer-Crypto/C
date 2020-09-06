#include <stdio.h>
extern int Add(int a, int b);
int main()
{
	int a = 1;
	int b = 2;
	int c = Add(a, b);
		printf("%d\n", c);
		return 0;
 }