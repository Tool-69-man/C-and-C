#include<stdio.h>
int main() {
	/*int i = 0;
	int num = 200;
	while (i<=num*3)
	{ 
		
		if (i <= num) {
			printf("���\n");
		}
		else if(i<=num*2)
		{
			printf("����\n");
		}
		else if(i<=num*3)
		{
			printf("����\n");
		}
		i++;


	}*/
	int i = 0;
	while (1)
	{
		
		int num = 10000;
		if (i <= num) {
			printf("  �� ��  ");
		}
		else if (i <=num*num)
		{
			printf("  �� ��  ");
		}
		else if (i <= num*num*num)
		{
			printf("  �� ��  ");
		}
		i++;


	}
	return 0;
}