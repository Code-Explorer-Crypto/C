#include <stdio.h>
#include <stdlib.h>
////输入：A = [1, 2, 0, 0], K = 34
////输出：[1, 2, 3, 4]
////解释：1200 + 34 = 1234
//
//// 已知数组A,A数组的大小ASize,返回的数组形式returnSize
//int* addToArrayForm(int* A, int ASize, int K, int* returnSize) {
////K的位数
//		int KSize = 0;
//		while (K / 10) {
//
//		}
////个位数=(数组A的个位数 + K的个位数 + 个位的进位a) / 10
////    个位数 = returnSize[0],同时len=len+1  ---   n为returnSize数组的大小
////十位的进位a=(数组A的个位数 + K的个位数 + 进位a) % 10
//
//
////}
//int main() {
//	int a = 0;
//	int k = 100;
//	while (k /= 10) {
//		a++;
//	}
//	printf("%d", a);
//	printf("%d", k);
// }





/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 // 已知数组A,A数组的大小ASize,返回的数组形式returnSize
//int* addToArrayForm(int* A, int ASize, int K, int* returnSize) {
//    //K的位数 --- KSize
//    int KSize = 0;
//    while (K /= 10) {
//        KSize++;
//    }
//    //returnSize的空间分配  ---  s为returnSize数组的大小
//    int s = (ASize > KSize ? ASize + 1 : KSize + 1);
//    returnSize = (int*)realloc(returnSize, sizeof(int) * s);
//    //个位数=(数组A的个位数 + K的个位数 + 个位的进位a) / 10
//    //    个位数 = returnSize[0],同时len=len+1  ---   n为returnSize数组的大小
//    //十位的进位a=(数组A的个位数 + K的个位数 + 进位a) % 10
//
//    //数组returnSize的进位为a
//    int a = 0;
//    //A的总数b
//    int b = 0;
//    for (int j = 0;j < ASize;j++) {
//        b = b + A[j] * ((10^(ASize - j - 1)));
//    }
//    //A的第0.1...(ASize - 1)位 = A的总数/(10^)
//
//    //先把returnSize从个位到最高位排列,再翻转数组
//    for (int i = 0;i < s;i++) {
//        returnSize[i] = b / (10 ^ (i + 1)) + K / (10 ^ (i + 1)) + a;
//        if (returnSize[i] > 10) {
//            returnSize[i] /= 10;
//            a = returnSize[i] %= 10;
//        }
//        else {
//            a = 0;
//        }
//    }
//    if (returnSize[s - 1] == 0) {
//        s--;
//        returnSize = (int*)realloc(returnSize, sizeof(int) * (s));
//    }
//
//    ////翻转数组
//    //for (int k = 0;k < s;k++) {
//
//    //}
//    return returnSize;
//}
//
//int main(){
//    int A[] = { 1, 2, 3, 4 };
//    int B[] = { 0 };
//    addToArrayForm(A,4,1000,B);
//}

//// 已知数组A,A数组的大小ASize,返回的数组形式returnSize
//int* addToArrayForm(int* num, int numSize, int k, int* returnSize) {
//    int* res = malloc(sizeof(int) * fmax(10, numSize + 1));
//    *returnSize = 0;
//    for (int i = numSize - 1; i >= 0; --i) {
//        int sum = num[i] + k % 10;
//        k /= 10;
//        if (sum >= 10) {
//            k++;
//            sum -= 10;
//        }
//        res[(*returnSize)++] = sum;
//    }
//    for (; k > 0; k /= 10) {
//        res[(*returnSize)++] = k % 10;
//    }
//    for (int i = 0; i < (*returnSize) / 2; i++) {
//        int tmp = res[i];
//        res[i] = res[(*returnSize) - 1 - i];
//        res[(*returnSize) - 1 - i] = tmp;
//    }
//    return res;
//}
//
