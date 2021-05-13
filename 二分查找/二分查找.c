//编写代码在一个整形有序数组中查找具体的某个数
//要求：找到了就打印数字所在的下标，找不到则输出：找不到。
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
            printf("第%d个即为所求", mid);
            return mid;
        }
        else  if(arr[mid] > a) {
            end = mid - 1;
        }
        mid = (end + ori +1) / 2;
    }
        printf("所求不在这组数中");
    return 0;
 }