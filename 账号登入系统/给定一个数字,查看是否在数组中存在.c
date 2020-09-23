#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
   int main(){
       int arr[] = { 1, 2, 3};
       int f = 0;
       int i = 0;
       printf("请输入要查找的数字:");
       scanf("%d", &f);
       for ( i = 0; i < 3; i++) {
           if (arr[i] == f) {
               printf("您要查找的数字在数组内,下标为%d",i);
               break;
           }
      }
       if (i == 3) {
           printf("您要查找的数字不在数组内");
       }
       return 0;
}

