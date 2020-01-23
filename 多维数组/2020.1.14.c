#include<stdio.h>
int main() {
	int  a[5][5][5];
	int num = 0;
	int count=0;
	int i,j,z;
	for ( i = 0; i < 5; i++)
	{
		for ( j = 0; j < 5; j++)
		{
			for ( z = 0; z < 5; z++,count++)
			{
				a[i][j][z] = count;	
			}
		}
	}
	
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			for (z = 0; z < 5; z++)
			{
				num++;
				printf("µÚ%3d a[%d][%d][%d]=%3d\t",num,i,j,z,a[i][j][z]);
				/*if (num==5)
				{
					printf("\n");
				}*/
			}
			printf("\n");
		}
		printf("\n");
	}
	
	num = 0;
	for (z = 0; z < 5; z++)
	{
		for (j = 0; j < 5; j++)
		{
			for (i = 0; i < 5; i++)
			{
				num++;
				printf("µÚ%3d a[%d][%d][%d]=%3d\t",num,i,j,z,a[z][j][j]);
				/*if (num==5)
				{
					printf("\n");
				}*/
			}
			printf("\n");
		}
		printf("\n");
	}


	return 0;
}