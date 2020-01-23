#include<stdio.h>
int main(){
	int a[10];
	int i,j;
	int sum = 0;//sum需要初始化赋值，，，，关闭了SDL后检查不出一直报错。。。。。
    int  avg;
	for ( i = 0; i < 10; i++)
	{
		scanf_s("%d",&a[i]);//关闭SDL     需谨慎
	}
	for ( i = 0; i <10; i++)
	{
		sum += a[i];
		avg = sum / 10;
		//avg += a[i] / 10;
	}
	printf("%d\n",sum);
	printf("%d\n",avg);
	for ( i = 0; i < 10; i++)
	{
		if (a[i] > avg) {
			printf("a[%d]=%d\n",i,a[i]);
		}
	}

	return 0;
}