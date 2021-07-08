#include <stdio.h>
#include <stdlib.h>
int main() {
	int nums[5] = { 0 };
	int* nums1 = (int*)malloc(5);
	nums1 = (int*)realloc(nums1, 10);
	printf("%d", sizeof(nums));
	return 0;
 }

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main()
//{
//	char* str;
//
//	/* 最初的内存分配 */
//	str = (char*)malloc(15);
//	strcpy(str, "runoob");
//	printf("String = %s,  Address = %p\n", str, str);
//
//	/* 重新分配内存 */
//	str = (char*)realloc(str, 25);
//	strcat(str, ".com");
//	printf("String = %s,  Address = %p\n", str, str);
//
//	free(str);
//
//	return(0);
//}