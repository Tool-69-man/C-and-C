#include<stdio.h>
#include<stdlib.h>
int main() {
	int i;
	char str;
	FILE* fp=fopen("X:\\C�����ļ�ʵ��\\��д���ַ�.txt" ,"w") ;
	//���ļ�  fputc  ֻд��ʽ
	if (fp!=NULL) {
		printf("�򿪳ɹ�\n");
	}

	for (i = 0; i < 10;i++) {
		//str = getchar();//getchar()  �൱��    fgetc(stdin)
		str=fgetc(stdin);
		fputc(str,fp);
	}



	//�ر��ļ�
	fclose(fp);


	//�ر��ļ�   fp   ��Ϊ  NULL
	//���ļ� fgetc   ֻ��
	fp=fopen("X:\\C�����ļ�ʵ��\\��д���ַ�.txt","r");//���¸�ֵ
	if (fp != NULL) {
		printf("�򿪳ɹ�\n");
	}


	for (i = 0; i < 10; i++) {
		
		str=fgetc(fp);
		//putchar(str);//putchar()  ���൱fputc(str,stdout)
		fputc(str, stdout);
	}


	//�ر��ļ�  
	fclose(fp);

	return 0;
}