#include <stdio.h>
#include <stdlib.h>
////���룺A = [1, 2, 0, 0], K = 34
////�����[1, 2, 3, 4]
////���ͣ�1200 + 34 = 1234
//
//// ��֪����A,A����Ĵ�СASize,���ص�������ʽreturnSize
//int* addToArrayForm(int* A, int ASize, int K, int* returnSize) {
////K��λ��
//		int KSize = 0;
//		while (K / 10) {
//
//		}
////��λ��=(����A�ĸ�λ�� + K�ĸ�λ�� + ��λ�Ľ�λa) / 10
////    ��λ�� = returnSize[0],ͬʱlen=len+1  ---   nΪreturnSize����Ĵ�С
////ʮλ�Ľ�λa=(����A�ĸ�λ�� + K�ĸ�λ�� + ��λa) % 10
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
 // ��֪����A,A����Ĵ�СASize,���ص�������ʽreturnSize
//int* addToArrayForm(int* A, int ASize, int K, int* returnSize) {
//    //K��λ�� --- KSize
//    int KSize = 0;
//    while (K /= 10) {
//        KSize++;
//    }
//    //returnSize�Ŀռ����  ---  sΪreturnSize����Ĵ�С
//    int s = (ASize > KSize ? ASize + 1 : KSize + 1);
//    returnSize = (int*)realloc(returnSize, sizeof(int) * s);
//    //��λ��=(����A�ĸ�λ�� + K�ĸ�λ�� + ��λ�Ľ�λa) / 10
//    //    ��λ�� = returnSize[0],ͬʱlen=len+1  ---   nΪreturnSize����Ĵ�С
//    //ʮλ�Ľ�λa=(����A�ĸ�λ�� + K�ĸ�λ�� + ��λa) % 10
//
//    //����returnSize�Ľ�λΪa
//    int a = 0;
//    //A������b
//    int b = 0;
//    for (int j = 0;j < ASize;j++) {
//        b = b + A[j] * ((10^(ASize - j - 1)));
//    }
//    //A�ĵ�0.1...(ASize - 1)λ = A������/(10^)
//
//    //�Ȱ�returnSize�Ӹ�λ�����λ����,�ٷ�ת����
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
//    ////��ת����
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

//// ��֪����A,A����Ĵ�СASize,���ص�������ʽreturnSize
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
