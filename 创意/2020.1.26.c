#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
	
	
	//
	while (1)
	{
		srand(time(0));
		int i = rand() % 11;//����棨��ȫ�����壩
		switch (i)
		{
		case 1:
			printf(".........................\n");
			break;
		case 2:
			printf("���Ƿֽ���\n");
			break;
		case 3:
			printf("���ڸ�ʲô������������\n");
			break;
		case 4:
			printf("�ⶼ��֪��������������\n");
			break;
		case 5:
			printf("����̲�����������ǰ����\n");
			break;
		case 6:
			printf("�������� ,�ǲ���sb?\n");
			break;
		case 7:
			printf("�Ҳ�����\n");
			break;
		case 8:
			printf("�����㵽���ڸ�ʲô����������\n");
			break;
		case 9:
			printf("��Ҳ��֪�������ڸ��\n");
			break;
		case 10:
			printf("������Ҳ������\n");
			break;
		default:
			printf("��ô���\n");
			break;
		}


	}
	return 0;
}