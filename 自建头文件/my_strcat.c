#include <stdio.h>
#include <string.h>
#include <assert.h>
#pragma comment(lib,"my_strcat.lib")
char my_strcat(char* arr1, const char* arr2) {
	assert(arr1 != NULL);
	assert(arr2 != NULL);
	char* ret = arr1;
	while (*arr1) {
		arr1++;
	}
	while (*arr1++ = *arr2++) {
	}
	return ret;
}

