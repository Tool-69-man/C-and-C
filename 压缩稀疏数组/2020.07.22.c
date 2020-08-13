#include<stdio.h>

int main() {
	int i = 0;
	int j = 0;
	int n = 0;
	int m = 0;
	int temp = 1;
	int t=0;
	int sparse[50][50] = {0};
	int compress[50][50] = {0};
	//初始化稀疏矩阵
	printf("行数：列数\n");
	scanf("%d %d",&n,&m);
	for ( i = 0; i <n; i++)
	{
		for ( j = 0; j <m; j++)
		{
			printf("输入spare[%d][%d]：", i, j);
			scanf("%d", &sparse[i][j]);
		}
	}

	//压缩
	compress[0][0] = n;//矩阵行数
	compress[0][1] = m;//矩阵列数
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (sparse[i][j]!=0)
			{
				compress[temp][0] = i;
				compress[temp][1] = j;
				compress[temp][2] = sparse[i][j];
				temp++;
			}
		}
	}
	t = temp - 1;
	compress[0][2] = t;
	
	//遍历
	for (i = 0; i < temp; i++)
	{
		for (j = 0; j < 3; j++)
		{

			printf("%3d",compress[i][j]);
			
		}
		printf("\n");
	}

	return 0;

}