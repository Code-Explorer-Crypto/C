////将字符串中空格转换为"%20"
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int numofspace(str){
//	int q = 0;
//	while (str != '\n') {
//		str++;
//		if (isspace(str)) {
//			q += 2;
//		}
//	}
//	return q;		
//}

int main() {
	char str[20];
	scanf("%s", str);
	int d = 0;
	int i = 0;
		while (str[i+d] != '\n'&& (i+ d)<20) {
			if(str[i+d] == ' '){
				for (int e = 1;(i+d+2+e) < 20;e++) {
					str[i + d +2+e] = str[]
				}
					str[i+d] = '%';
					str[i+d+1] = '2';
					str[i+d+2] = '0';
					d+=2;
					
				}
			putchar(str[i+d]);
			i++;
		}
	}

//#include <stdio.h>
//#include <ctype.h>
//int main()
//{
//    char c;
//    int i = 0;
//    char str[] = "Example sentence to test isspace\n";
//    while (str[i])
//    {
//        c = str[i];
//        if (isspace(c))
//            c = '\n';
//        putchar(c);
//        i++;
//    }
//    return 0;
//}

