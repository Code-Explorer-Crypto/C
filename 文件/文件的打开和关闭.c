#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main() {
//	char arr[20] = { 0 };
//	//文件的打开和关闭
//	FILE*ret = fopen("文件的打开和关闭.txt", "r");	
//	if (ret == NULL) {
//		perror("open file for reading");
//		return 1;
//	}
//	//fclose(ret);
//	//ret = NULL;
//
//	FILE* res = fopen("文件的打开.txt", "w");
//	if (res == NULL) {
//		perror("open file for reading");
//		fclose(ret);
//		ret = NULL;
//		return 1;
//	}
//	//写数据
//	FILE* ret2 = fopen("文件的打开和关闭.txt", "w");
//	if (ret2 == NULL) {
//		perror("open file for writting");
//		return 1;
//	}
//	fputs("hello\n", ret2);
//	fputs("haha", ret2);
//	fclose(ret2);
//	ret2 = NULL;
//
//	//读数据
//	FILE* ret3 = fopen("文件的打开和关闭.txt", "r");
//	if (ret3 == NULL) {
//		perror("open file for reading");
//		return 1;
//	}
//	fgets(arr, 20, ret3);
//	printf("%s", arr);
//	fgets(arr, 20, ret3);
//	printf("%s", arr);
//
//	//拷贝
//	while (fgetc(ret) != EOF) {
//		fputc(fgetc(ret),res);
//	}
//
//
//	fclose(ret3);
//	ret3 = NULL;
//
//	return 0;
//  }


struct Stu {
	char name[20];
	int age;
};

int main(){
	struct Stu s = { "zhangsan",20 };
	FILE* pf = fopen("text.txt", "wb");
	if (pf == NULL) {
		perror("open file for writting");
		return 1;
	}
	//写文件
	fread(&s, sizeof(struct Stu), 1, pf);
	printf("%s %d", s.name, s.age);
	//关闭文件
	fclose(pf);
	pf = NULL;
	return 0;
}