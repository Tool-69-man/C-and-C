#include<stdio.h>
#include<stdlib.h>
int main() {
	//���ļ�
	FILE* fp = fopen("X:\\C�����ļ�ʵ��\\��λ����.txt", "r");
	if (fp != NULL) {
		printf("�򿪳ɹ�\n");
	}
	int n;
	
	//��ȡ����    ftell
	printf("%d\n",ftell(fp));
	fscanf(fp,"%d",&n);//    ��ȡ��ָ��  �ƶ������
	printf("%d\n",n);
	//���ú���    fseek
	fseek(fp,3,SEEK_SET);//  ���ļ���ͷ һ��
	printf("%d\n", ftell(fp));
	fscanf(fp, "%d", &n);
	printf("%d\n", n);

	//��Ϊ�Ѷ�ȡ    ��ʱλ��Ϊ��β
	fseek(fp, -3, SEEK_CUR);//�����и���
	printf("%d\n", ftell(fp));
	fscanf(fp, "%d", &n);
	printf("%d\n", n);

	//��дָ��   ��λ����   rewind
	rewind(fp);//��ȡһ�ߺ�   ��ʱ   ��λ

	fseek(fp, 7, SEEK_CUR);
	printf("%d\n", ftell(fp));
	fscanf(fp, "%d", &n);
	printf("%d\n", n);

	fclose(fp);
	//�ر��ļ�
	return 0;
}