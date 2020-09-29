#include <stdio.h>
#include <string.h>
int main() {
	char str[] = "             ";
	char str2[] = "*************";
	int size = sizeof(str2) / sizeof(str2[0]) - 1;
	printf("%d", size);
	return 0;
}