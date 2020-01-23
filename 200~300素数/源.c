#include<stdio.h>
int main() {
	/*int i, j,count;
	count = 0;
	for (i = 200; i < 300; i++)
	{for(j=2;j<i;j++)
		if (i%j==0)
		{
			break;
		}
	if (j == i) {
		printf("%d ", i);
		count++;
	}
	if (count % 8 == 0) {//0%8=0将if加入上一个if
		printf("\n");
	}
	}*/
	int i, j, count, flag;
	count = 0;
	
	for ( i = 200; i < 300; i++)
	{
		flag = 1;
		for (j = 2; j < i; j++) {
			if (i % j == 0) {
				flag = 0;
				break;
			}
			}
		if (flag) {
			printf("%d ", i);
			count++;
			if (count % 8 == 0)
			{
				printf("\n");
			}
		}
		printf("*%d", count);//printf("%d\n",count)
	}
	//printf("%d", count);
	return 0;
}