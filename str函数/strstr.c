//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//char* my_strstr(const char*str1, const char*str2) {
//	const char* cp = str1;
//	const char* c = str2;
//	const char* s1 = str1;
//	const char* s2 = str2;	
//	while (*cp) {
//		s1 = cp;
//		s2 = c;
//		while (*s1 == *s2 && *s1 && *s2) {
//			s1++;
//			s2++;			
//		}
//		if (*s2 == '\0') {
//			return (char*)cp;
//		}
//		cp++;
//	}
//	return NULL;
//}
//
//int main() {
//	char* str1 = "abcdefg";
//	char* str2 = "cde";
//	char* ret = my_strstr(str1, str2);
//	printf("%s", ret);
//	return 0;
//  }