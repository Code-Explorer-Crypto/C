#include <stdio.h>
#include <string.h>
#include <assert.h>
char my_strcat(char* arr1, char* arr2) {
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

int main() {
	char arr1[20] = "jkl";
	/*char arr2[] = "abcde";*/
	printf("%s", my_strcat(arr1, "abcde"));
 }