#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main() {
	int a[10], i;
	srand(time(0));
	for ( i = 0; i < 10; i++)
	{
		a[i] = rand();//     rand() �����ʮ�����µ���  ���99999��λ�� �����0~100 ��ģ��101
	}
	for ( i = 0; i < 10; i++)
	{
		printf("%3d ",a[i]);
	}
	printf("\n");
	return 0;
}