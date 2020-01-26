#include<stdio.h>
int main() {
	int i = 0;
	int a[20];
	int* p = &a[0];
	
	for (i = 0; i < 20; i++)
	{
		a[i] = i;
	}
	putchar('\n');//很有意思     换行竟然在上一个for 循环0上
	for (i = 0; i < 20; i++)
	{
		printf("%2d\n", a[i]);
	}
	for (i = 0; i < 20; i++)
	{
		printf("%3d\n", *(a + i));
	}
	puts("有点意思");//直接换行 无需\n   但必需输入参数  '\n'无效  必需“\n”
	for (i = 0; i < 20; i++)
	{
		printf("%d\t", *(p + i));
	}
	return 0;
}