//��д������һ���������������в��Ҿ����ĳ����
//Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ�����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int arr[5] = { 0,1,2,3,4 };
    int a = 0;
    int ori = 0;
    int end = 4;
    int  mid = (end + ori + 1) / 2;
    scanf("%d", &a);
    while (mid <= end && mid >= ori) {
        if (arr[mid] < a) {
            ori = mid + 1;
        }
        else if (arr[mid] == a) {
            printf("��%d����Ϊ����", mid);
            return mid;
        }
        else  if(arr[mid] > a) {
            end = mid - 1;
        }
        mid = (end + ori +1) / 2;
    }
        printf("��������������");
    return 0;
 }