#include<stdio.h>
int main() {
	int i = 0;
	int a[20];
	int* p = &a[0];
	
	for (i = 0; i < 20; i++)
	{
		a[i] = i;
	}
	putchar('\n');//������˼     ���о�Ȼ����һ��for ѭ��0��
	for (i = 0; i < 20; i++)
	{
		printf("%2d\n", a[i]);
	}
	for (i = 0; i < 20; i++)
	{
		printf("%3d\n", *(a + i));
	}
	puts("�е���˼");//ֱ�ӻ��� ����\n   �������������  '\n'��Ч  ���衰\n��
	for (i = 0; i < 20; i++)
	{
		printf("%d\t", *(p + i));
	}
	return 0;
}