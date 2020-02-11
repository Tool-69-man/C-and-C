#include<stdio.h>
int main() {
	/*int i = 0;
	int num = 200;
	while (i<=num*3)
	{ 
		
		if (i <= num) {
			printf("你好\n");
		}
		else if(i<=num*2)
		{
			printf("我是\n");
		}
		else if(i<=num*3)
		{
			printf("基拉\n");
		}
		i++;


	}*/
	int i = 0;
	while (1)
	{
		
		int num = 10000;
		if (i <= num) {
			printf("  你 好  ");
		}
		else if (i <=num*num)
		{
			printf("  我 是  ");
		}
		else if (i <= num*num*num)
		{
			printf("  基 拉  ");
		}
		i++;


	}
	return 0;
}