#include<stdio.h>
int main() {//    代码检查要一行一行看   !!!!  mian  !!!!!!
	int i = 0;
	
	int a[20];
	int* p = a;
	for ( i = 0; i < 20; i++)
	{
		a[i] = i;
	}
	for ( i = 0; i < 20; i++)
	{
		printf("%2d\n",a[i]);
	}
	//putchar("let do it '\n'");
	
	for ( i = 0; i < 20; i++)
	{
		printf("%3d\n",*(a+i));
	}
	//puts("LLLLLLL'\n'");
	for ( i = 0; i < 20; i++)
	{
		printf("%d\t",*(p+i));
	}
	return 0;
}