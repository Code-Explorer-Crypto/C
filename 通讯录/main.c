//ʵ��һ��ͨѶ¼��
//ͨѶ¼���������洢1000���˵���Ϣ��ÿ���˵���Ϣ�������������Ա����䡢�绰��סַ
//�����ϵ����Ϣ
//ɾ��ָ����ϵ����Ϣ
//����ָ����ϵ����Ϣ
//�޸�ָ����ϵ����Ϣ
//��ʾ������ϵ����Ϣ
//���������ϵ��
//����������������ϵ��

#include "contact.h"
enum {
	ADD,
	DEL,
	SEARCH,
	REPEAR,
	SHOW,
	CLEAR,
	SORT
};

int main() {
	menu();
	Data con;
	Init(&con);
	int input = 0;
	printf("��ѡ��:");
	scanf("%d", &input);
	switch (input) {
	case ADD:
		capacity(&con);
		add(&con);
		break;
	case DEL:
		break;
	case SEARCH:
		break;
	case REPEAR:
		break;
	case SHOW:	
		break;
	case CLEAR:
		break;
	case SORT:	
		break;
	default:
		printf("��������");
	}
}

