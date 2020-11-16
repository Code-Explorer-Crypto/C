//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <limits.h>
//#include <ctype.h>
//int main()
//{
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读文件
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("opne file for writting");
//		return 1;
//	}
//	//写数据
//	fputs("hello bit\n", pf);
//	fputs("haha\n", pf);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//
//int main()
//{
//	char input[20] = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("opne file for reading");
//		return 1;
//	}
////	读数据
//	fgets(input, 20, pf);
//	printf("%s", input);
//
//	fgets(input, 20, pf);
//	printf("%s", input);
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//
//int main()
//{
//	FILE* pfRead = fopen("test1.txt", "r");
//	if (pfRead == NULL)
//	{
//		perror("open file for reading");
//		return 1;
//	}
//	FILE* pfWrite = fopen("test2.txt", "w");
//	if (pfWrite == NULL)
//	{
//		perror("open file for writting");
//		fclose(pfRead);
//		pfRead = NULL;
//		return 1;
//	}
//	//拷贝
//	int ch = 0;
//	while ((ch = fgetc(pfRead)) != EOF)
//	{
//		fputc(ch, pfWrite);
//	}
//
//	//关闭文件
//	fclose(pfRead);
//	pfRead = NULL;
//	fclose(pfWrite);
//	pfWrite = NULL;
//	return 0;
//}
