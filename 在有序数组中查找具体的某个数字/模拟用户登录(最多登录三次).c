//�������:�ַ��������� == �Ƚ�
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main() {
//	int a = 0;
//	char n = 0;
//	char password = 0;
//	char arr1[] = { 1 ,3 ,5 };
//	char arr2[] = { 2 ,4 ,6 };
// 	printf("�������û��˺�:");
//	scanf("%s", &n);
//	printf("�������û�����:");
//	scanf("%s", &password);
//	for (int a = 1;a <= sizeof(arr1); a++){
//		if (n == arr1[a] && password == arr2[a]) {
//			printf("��¼�ɹ�");
//		}
//		
//		else
//			printf("������������,����������");
//	}
//	return 0;
//}


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
	char account = 1;
	char password = 1;
	char arr1[] = { 1 , 2, 3 };
	char arr2[] = { 1 , 2, 3 };
	printf("�������˺�:");
	scanf("%s", &account);
	printf("����������:");
	scanf("%s", &password);
	for (int i = 1; i <= 3; i++) {
		for (int a = 1; a <= sizeof(arr1); a++) {
			if (strcmp(account, arr1[a]) == 0 && strcmp(password, arr2[a]) == 0) {
				printf("��½�ɹ�");
			}
			else
				printf("��������˺���������,����������");
		}
        
	}

}