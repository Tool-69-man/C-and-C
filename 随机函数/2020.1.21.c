#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main() {
	int a[10], i;
	srand(time(0));
	for ( i = 0; i < 10; i++)
	{
		a[i] = rand();//     rand() 随机的十万以下的数  最高99999的位数 随机的0~100 需模上101
	}
	for ( i = 0; i < 10; i++)
	{
		printf("%3d ",a[i]);
	}
	printf("\n");
	return 0;
}