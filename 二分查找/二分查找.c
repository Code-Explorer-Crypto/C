//��д������һ���������������в��Ҿ����ĳ����
//Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ�����
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
//            printf("��%d����Ϊ����", mid);
//            return mid;
//        }
//        else  if(arr[mid] > a) {
//            end = mid - 1;
//        }
//        mid = (end + ori +1) / 2;
//    }
//        printf("��������������");
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

		printf("�Ƿ����������Ϸ(���������ʾ������Ϸ/1��ʾ��������)\n");

		scanf("%d", &a);

		if (a == 1) {

			break;

		}

		else {

			printf("�������:");

			scanf("%d", &b);

			if (b > r) {

				printf("�´���\n");

			}

			else if (b < r) {

				printf("��С��\n");

			}

		}

	}

	if (b == r) {

		printf("�¶���");

	}

	return 0;

}