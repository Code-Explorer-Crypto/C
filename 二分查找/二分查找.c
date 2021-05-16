//编写代码在一个整形有序数组中查找具体的某个数
//要求：找到了就打印数字所在的下标，找不到则输出：找不到。
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include <string.h>
//int main() {
//    int arr[5] = { 0,1,2,3,4 };
//    int a = 0;
//    int ori = 0;
//    int end = 4;
//    int  mid = (end + ori + 1) / 2;
//    scanf("%d", &a);
//    while (mid <= end && mid >= ori) {
//        if (arr[mid] < a) {
//            ori = mid + 1;
//        }
//        else if (arr[mid] == a) {
//            printf("第%d个即为所求", mid);
//            return mid;
//        }
//        else  if(arr[mid] > a) {
//            end = mid - 1;
//        }
//        mid = (end + ori +1) / 2;
//    }
//        printf("所求不在这组数中");
//    return 0;
// }

//int main() {
//	int arr[3] = { 0,1,2 };
//	printf("%d", sizeof(arr)/sizeof(arr[0]));
//}

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include <time.h>

int main() {

	int a = 0, b = 0;

	srand((unsigned int)time(NULL));

	int r = rand() % 100 + 1;

	while (b != r) {

		printf("是否继续进行游戏(按任意键表示继续游戏/1表示溜了溜了)\n");

		scanf("%d", &a);

		if (a == 1) {

			break;

		}

		else {

			printf("请猜数字:");

			scanf("%d", &b);

			if (b > r) {

				printf("猜大了\n");

			}

			else if (b < r) {

				printf("猜小了\n");

			}

		}

	}

	if (b == r) {

		printf("猜对了");

	}

	return 0;

}