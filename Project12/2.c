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
			printf("�������\n");
		}
		else if (num==1)
		{
			printf("1������\n");
		}
		for (x = 2; x < num; x++) {
			if (num % x == 0)
			{
				printf("%d��������\n", num);
				break;
			}
		}
		if (x == num)
		{
			printf("%d������\n", num);
		}
	}
	return 0;
}