#include<stdio.h>
#include<ctype.h>
int main() {
	char ch;
	int lower, upper, digit, punct, cntrl, space, other;
	lower = upper = digit = punct = cntrl = space = other = 0;
	printf("�ַ����У�");
	while ((ch = getchar()) != '\n')//       6   is        is  + 5 �ַ�
	{
		if (islower(ch)) {//     islower ��� ch �Ƿ�Ϊ      Сд     �ַ� �Ƿ���1 �񷵻�0
			lower++;
		}
		else if (isupper(ch)) {// isupper ��� ch �Ƿ�Ϊ     ��д     �ַ� �Ƿ���1 �񷵻�0
			upper++;
		}
		else if (isdigit(ch)) {//isdigit ��� ch �Ƿ�Ϊ      ����     �ַ� �Ƿ���1 �񷵻�0
			digit++;
		}
		else if (ispunct(ch)) {//ispunct ��� ch �Ƿ�Ϊ      ���     �ַ� �Ƿ���1 �񷵻�0
			punct++;
		}
		else if (iscntrl(ch)) {//iscntrl ��� ch �Ƿ�Ϊ      ����     �ַ� �Ƿ���1 �񷵻�0
			cntrl++;
		}
		else if (isspace(ch)) {//isspace ��� ch �Ƿ�Ϊ      �ո�     �ַ� �Ƿ���1 �񷵻�0
			space++;
		}
		else{
			other++;
	}
}
	printf("ͳ�ƽ��\n");
	printf("Сд%d\n",lower);//Сд
	printf("��д%d\n",upper);//��д
	printf("����%d\n",digit);//����
	printf("���%d\n",punct);//���
	printf("����%d\n",cntrl);//����
	printf("�ո�%d\n",space);//�ո�
	printf("����%d\n",other);//����



	return 0;
}