//#include <stdio.h>
//#include <string.h>
//int my_strlen(const char* arr) {
//	int count = 0;
//	while (*arr) {
//		arr++;
//		count++;
//	}
//	return count;
//}
//
//int main() {
//	char arr1[] = "abcde";
//	my_strlen(arr1);
//	printf("%d", my_strlen(arr1));
//   }


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	char str[] = "- This, a sample string.";
	char* pch;
	printf("Splitting string \"%s\" into tokens:\n", str);
	pch = strtok(str, " ,.-");
	while (pch != NULL)
	{
		printf("%s\n", pch);
		pch = strtok(NULL, " ,.-");
	}
	return 0;
}