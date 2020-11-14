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
//	int* p = &a;     //定义一个整型指针  p    并且p指向了a的地址     （&取地址）
//	printf("%x\n", *p);
//	*p = 10;         //解引用， 即 给a赋值10；
//	p = &b;          // p指向了 b的地址
//	*p = 200;        //解引用， 即 给b赋值200；
//	p = &a;          // p指向了a的地址
//	int** pp = &p;   // 定义一个整型的指针 pp   并且  pp 指向了 p的地址
//	printf("%d", **pp);
//	*pp = &a;        // pp指向了p的地址  p指向了a的地址  即pp指向了a的地址
//	**pp = 1000;     //解引用，即给a赋值1000；
//	*pp = &b;        //  pp指向了p的地址  p指向了b的地址  即pp指向了b的地址
//	**pp = 2000;     //解引用， 即 给b赋值1000；
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