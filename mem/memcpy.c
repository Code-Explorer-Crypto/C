//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//void* my_memcpy(void* arr1, void* arr2, size_t count) {
//	assert(arr1);
//	assert(arr2);
//	void* ret = arr1;
//	while (count--) {
//		*(char*)arr1 = *(char*)arr2;
//		arr1 = (char*)arr1+1;
//		arr2 = (char*)arr2+1;
//	}
//	return ret;
//}
//
//int main() {
//	char* arr1[20] = {0};
//	char* arr2 =  "abcdef" ;
//	printf("%s", my_memcpy(arr1, arr2,strlen(arr2)));
//  }