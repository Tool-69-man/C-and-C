#include<stdio.h>
int main() {
	/*int a[20] = {1,2,3,4,5,6};
	int b[20] = {7,8,9,10,11,12};
	printf("%d",a[0]+b[0]);*/
	/*int i,j;
	int sum = 0;
	int a[20], b[20];
	for ( i = 0,j=1; i < 20; i++,j++)
	{
		b[i] = j;
		a[i] = j;
	}
	for ( i = 0; i < 20; i++)
	{
		printf("a[%d]=%d b[%d]=%d\n",i,a[i],i,b[19-i]);
	}
	for ( i = 0; i < 20; i++)
	{
		sum+= a[i] + b[19-i];
	}
	printf("%d",sum);*/
	int a[20], b[20];
	int i,j;
	int sum = 0;
	for ( i = 0,j=20; i < 20; i++,j--)
	{
		a[i] = i;
		b[i] = j;

	}
	for (i = 0; i < 20; i++)
	{
		printf("a[%d]=%d b[%d]=%d\n", i, a[i], i, b[i]);
	}
	for (i = 0; i < 20; i++)
	{
		sum += a[i] + b[i];
	}
	printf("%d",sum);
	return 0;
}