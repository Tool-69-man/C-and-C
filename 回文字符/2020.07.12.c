/*
�����ַ�����  TOOT��LVVL������������
��Cʵ����֤ �����ַ���  ջ
*/


#include<stdio.h>
#include<string.h>

int main() {
	char a[101] = {0}, s[101] = { 0 };
	int i, j,next,top,len,mid;
	top = 0;
	i = 0;
	j = 0;
	next = 0;
	len = 0;
	mid = 0;
	printf("����������ַ���\n");
	gets(a);
	len = strlen(a);
	mid = len / 2;//�е�
	//��ջ
	for ( i = 0; i < mid; i++)
	{
		s[++top] = a[i];
	}

	if (0==len%2)
	{
		next = mid ;
	}
	else {
		next = mid + 1;
	}
	for ( j = next; j < len; j++)
	{
		if (s[top]!=a[j]&&top!=0)
		{
			printf("%s���ǻ����ַ���\n",a);
			getchar();
			getchar();
			return 0;
		}
		top--;
	}

	printf("%s�ǻ����ַ���\n",a);
	getchar();
	getchar();
	return 0;
}