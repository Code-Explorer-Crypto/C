#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
   int main(){
       int arr[] = { 1, 2, 3};
       int f = 0;
       int i = 0;
       printf("������Ҫ���ҵ�����:");
       scanf("%d", &f);
       for ( i = 0; i < 3; i++) {
           if (arr[i] == f) {
               printf("��Ҫ���ҵ�������������,�±�Ϊ%d",i);
               break;
           }
      }
       if (i == 3) {
           printf("��Ҫ���ҵ����ֲ���������");
       }
       return 0;
}

