#include<stdio.h>
#include<stdlib.h>
int main() {
	FILE* fp=fopen("X:\\C�����ļ�ʵ��\\��д.txt","w");//fopen(file)�ɹ�����ָ��ָ��
	printf("%p",fp);//��ַ��
	if (fp==NULL) {//ʧ�ܷ���NULL
		printf("��ʧ��\n");
		exit(1);
	}
	else
	{
		printf("�򿪳ɹ�\n");
	}

	int n = 5;
	//printf("%d", fprintf(fp, "%d\n", n));
	if (fprintf(fp, "%d\n", n)!=-1) {//�ɹ��Ƿ���  д���ַ�����  
		printf("д����ȷ\n");//2λ�� ��ʾ�ַ�����Ϊ 3
	}
	else
	{
		printf("д�����\n");//����  ����  ��ֵ
	}

	//n = 0;

	//if (fscanf(fp, "%d", &n)==1)//�ɹ����ض�ȡ�� ����
	//{
	//	printf("��ȡ�ɹ�\n");
	//}
	//else
	//{
	//	printf("��ȡʧ��\n");//ʧ�ܷ���-1
	//}

	printf("%d\n",n);

	if (fclose(fp))
	{
		printf("�ر��ļ�ʧ��");//ʧ�ܷ���-1
		exit(EOF);
	}
	else
	{
		printf("�ر��ļ��ɹ�\n");//�ɹ�����0
	}
	
	
	return 0;
}