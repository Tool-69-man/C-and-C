#include<stdio.h>
int main()
{/*
	int n = 9;
	while (n > 6)
	{
		n--;
		printf("%d", n);
	}*/
	int num, x;
	while (1)
	{
		scanf("%d", &num);

		if (num<=0)
		{
			printf("输入错误\n");
		}
		else if (num==1)
		{
			printf("1是质数\n");
		}
		for (x = 2; x < num; x++) {
			if (num % x == 0)
			{
				printf("%d不是质数\n", num);
				break;
			}
		}
		if (x == num)
		{
			printf("%d是质数\n", num);
		}
	}
	return 0;
}