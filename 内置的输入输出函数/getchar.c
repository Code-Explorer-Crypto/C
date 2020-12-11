//#include <stdio.h>
//int main()
//{
//  /*  do {*/
//        /*c = getchar();*/
//    int c = getchar();
//    putchar(c);
//  
//        
//   /* } while (c != '.');*/
//    return 0;
//}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{

    char a[] = { 0 };
    do{
        scanf("%s", &a);
    } while (a != '.');
    return 0;
}