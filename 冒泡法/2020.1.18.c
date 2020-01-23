#include<stdio.h>
int main() {
	int num[10];
	printf("请输入十个整数");
	int i,j,z;
	for ( i = 0; i < 10; i++)//
	{
		printf("num[%d]=", i);
		scanf("%d",&num[i]);
	}
	for ( i = 0; i < 10-1; i++)
	{
		for ( j = 0; j <10-1-i ; j++)
		{
			if (num[j] > num[j + 1]) {//升序
				z = num[j+1];
				num[j+1] = num[j];
				num[j] = z;
				
				
			//if (num[j+1] > num[j]) {//降序
			//	z = num[j+1];
			//	num[j+1] = num[j];
			//	num[j] = z;
			//	
			}
		}
	}
	printf("\n");
	for ( i = 0; i < 10; i++)
	{
		printf("%d%c", num[i], ((i + 1) % 5 == 0 || i == 10 - 1) ? '\n' : ' ');//   %c    (i+1)%5   
  	}

	return 0;
}