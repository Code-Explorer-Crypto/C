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
	char name[] = { 0 };
	printf("��ѡ��:");
	scanf("%d", &input);
	switch (input) {
	case ADD:
		con = capacity(&con);
		add(&con);
		break;
	case DEL:
		del(&con);
		break;
	case SEARCH:
		scanf("%s", &name);
		printf("Ҫ���ҵ������Ϊ%d",find(&con,name));
		break;
	case REPEAR:
		scanf("%s", &name);
		repear(&con, find(&con, name));
		break;
	case SHOW:
		show(&con);
		break;
	case CLEAR:
		/*clear(&con);*/
		break;
	case SORT:	
		break;
	default:
		printf("��������");
	}
}

