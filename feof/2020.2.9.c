#include<stdio.h>
#include<stdlib.h>
int main() {
	//���ļ�
	FILE* fp = fopen("X:\\C�����ļ�ʵ��\\feof��ʹ��.txt","r");
	if (fp!=NULL)
	{
		printf("�򿪳ɹ�\n");
	}
	int num = 0;
	int a[100];
	int i= 0;
	//whileѭ�� ��ȡ  ��  
	//��feof�ж�   ��ָ��ָ�����ʱ ���ط�0  break;
	while (1)
	{
		if (feof(fp)!=0) {
			//printf("%d\n", feof(fp));//feof   ��β����ֵΪ 1    ��������Ϊ  0
			break;//������     һ���ַ�   δ��ȡ �ɹ�
		}//����  ��Ȼprintf     ���������� ��ȡ�ɹ���������ж�
		
		if (1==fscanf(fp, "%d", &a)) {
			printf("%d\n", a[i]);//   Ӧ���Ϊ100    Ϊʲô��1001 
			i++;//��Ϊ    ��18��  printf����ӡ feof(fp)����ֵ 1
		}
	}

	/*if (fscanf(fp, "%d", &num) == 1) {
		printf("����ֵ��ȡ�ɹ�\n");
	}
	else
	{
		printf("����ֵ��ȡʧ��\n");
	}
	printf("%d",num);*/
	
	
	//�ر��ļ�
	fclose(fp);
	return 0;
}