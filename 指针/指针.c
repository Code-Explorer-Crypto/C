//#include <stdio.h>
//int main()
//{
	//	int k = 10;
	//	int* p = &k;
	//	printf("a = %d\n", *p);
	//	return 0;
	// }
	//
	//
	//#include <stdio.h>
	//int main()
	//{
	//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//    int* a = &arr;
	//    printf("%d", *(a+2));
	//    return 0;
	//}

//	int a = 10;
//	int b = 20;
//	int* p = &a;     //����һ������ָ��  p    ����pָ����a�ĵ�ַ     ��&ȡ��ַ��
//	printf("%x\n", *p);
//	*p = 10;         //�����ã� �� ��a��ֵ10��
//	p = &b;          // pָ���� b�ĵ�ַ
//	*p = 200;        //�����ã� �� ��b��ֵ200��
//	p = &a;          // pָ����a�ĵ�ַ
//	int** pp = &p;   // ����һ�����͵�ָ�� pp   ����  pp ָ���� p�ĵ�ַ
//	printf("%d", **pp);
//	*pp = &a;        // ppָ����p�ĵ�ַ  pָ����a�ĵ�ַ  ��ppָ����a�ĵ�ַ
//	**pp = 1000;     //�����ã�����a��ֵ1000��
//	*pp = &b;        //  ppָ����p�ĵ�ַ  pָ����b�ĵ�ַ  ��ppָ����b�ĵ�ַ
//	**pp = 2000;     //�����ã� �� ��b��ֵ1000��
//}

//#include <stdio.h>
//	int main()
//	{
//		int num1 = 0;
//		int num2 = 1;
//		printf("%d\n",num1 & num2);
//		printf("%d\n",num1 | num2);
//		printf("%d\n",num1^ num2);
//		return 0;
//	}

//#include <stdio.h>
//int main() {
//	char arr[] = "abcedes";
//	printf("%d", sizeof(arr));
//	return 0;
//  }

#include <stdio.h>
int main() {
	int a = 1;
	int b = 2;
	int c = (a > b, a = b + 10, a, b = a + 1);
	printf("%d", c);
  }