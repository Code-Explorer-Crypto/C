#include <stdio.h>
#include <string.h>
//void* my_memmove(void* des, void* src, size_t size) {
//	void* ret = des;
//	if (src < des) {
//		while(size--){
//		*(char*)des = *(char*)src;
//		des = ((char*)des)++;
//		src = ((char*)src)++;
//		}
//	}
//	else if (src >= des) {
//		while (size--) {
//			*((char*)des + size) = *((char*)src + size);
//		}
//	}
//	return ret;
//}
//
//int main() {
//	char arr1[] = "abcedeg";
//	printf("%s", my_memmove(arr1, "lkj", 3));
//  }



int main() {
	printf("%d", sizeof(long));
}