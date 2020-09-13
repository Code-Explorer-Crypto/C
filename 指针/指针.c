//#include <stdio.h>
//int main()
//{
//	int k = 10;
//	int* p = &k;
//	printf("a = %d\n", *p);
//	return 0;
// }


#include <stdio.h>
int main()
{
    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
    int* a = &arr;
    printf("%d", *(a+2));
    return 0;
}