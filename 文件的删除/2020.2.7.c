#include<stdio.h>
int main() {
	//char name[20];
	//scanf("%s",name);
	printf("%d\n", remove("X:\\C�����ļ�ʵ��\\�ñ�ɾ��.txt"));
	if (remove("X:\\C�����ļ�ʵ��\\�ñ�ɾ��.txt") ) {//���гɹ�����0

		printf("ɾ��ʧ��");//ʧ�ܷ���-1
	}
	else
	{
		printf("ɾ���ɹ�");
	}


	return 0;
}