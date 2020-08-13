#include<stdio.h>
//floyd-warshall弗洛伊德

	/*求路程最短距离：
	//只经过1号顶点
	for (i = 1; i <= n; i++) {//n为顶点数，e[i][j] = i到j城市的距离 
		for (j = 1; j <= n; j++) {
			if (e[i][j] > e[i][1] + e[1][j])
			{
				e[i][j] = e[i][1] + e[1][j];
			}
		}
	}
	//只经过2号顶点
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			if (e[i][j] > e[i][2] + e[2][j])
			{
				e[i][j] = e[i][2] + e[2][j];
			}
		}
	}
	*/

int main() {
	int t1 = 0;//矩阵的x,y和值
	int t2 = 0;
	int t3 = 0;
	int i = 0;//循环数
	int j = 0;
	int k = 0;
	int n = 0;//顶点
	int m = 0;//边数
	int max = 999999;
	int e[50][50] = { 0 };
	//输入顶点和边数
	printf("输入顶点和边数:\n");
	scanf("%d %d",&n,&m);
	//矩阵初始化 
	for ( i = 1; i <=n; i++)
	{
		for ( j = 1; j <=n; j++)
		{
			if (i==j)
			{
				e[i][j] = 0;
			}
			else {
				e[i][j] = max;
			}
		}
	}
	//读入边数
	for ( i = 1; i <=m; i++)
	{
		printf("输入相连两点和距离：\n");
		scanf("%d %d %d",&t1,&t2,&t3);
		e[t1][t2] = t3;
	}
	//核心算法     O(n*n*n)
	for ( k = 1; k <=n; k++)
	{
		for ( i = 1; i <=n; i++)
		{
			for (j = 1; j <= n;j++) {
				if (e[i][j]>e[i][k]+e[k][j])//如果不允许超过正无穷大max    则if(e[i][k]<max && e[k][j]<max && e[i][j]>e[i][k]+e[k][j])
				{
					e[i][j] = e[i][k] + e[k][j];//正无穷大相加 只有不超过   int  2147483647
				}
			}
		}
	}
	//输出结果
	printf("输出结果\n");
	for ( i = 1; i <=n; i++)
	{
		for (j = 1; j <= n;j++) {
			printf("%10d",e[i][j]);
		}
		printf("\n");
	}
	return 0;
}