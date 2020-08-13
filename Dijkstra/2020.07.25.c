#include<stdio.h>
//dijkstra狄克斯特拉  单源最短路
int main() {
	int t1 = 0;//矩阵的x,y和值
	int t2 = 0;
	int t3 = 0;
	int i = 0;//循环数
	int j = 0;
	int k = 0;
	int u = 0;//记录最近的点
	int n = 0;//顶点
	int m = 0;//边数
	int max = 999999;
	int min = 0;
	int dis[10] = { 0 };
	int book[10] = { 0 };
	int e[50][50] = { 0 };
	//输入顶点和边数
	printf("输入顶点和边数:\n");
	scanf("%d %d", &n, &m);
	//矩阵初始化 
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (i == j)
			{
				e[i][j] = 0;
			}
			else {
				e[i][j] = max;
			}
		}
	}
	//读入边数
	for (i = 1; i <= m; i++)
	{
		printf("输入相连两点和距离：\n");
		scanf("%d %d %d", &t1, &t2, &t3);
		e[t1][t2] = t3;
	}
	//初始化dis数组（路程记录）
	for ( i = 1; i <=n; i++)
	{
		dis[i] = e[1][i];
	}

	//dijkstra核心
	book[1] = 1;//1是	book[i]确定值     0是  book[i]是估计值
	for ( i = 1; i <=n; i++)
	{
		min = max;
		//找到离顶点最近点
		for ( j = 1; j <=n; j++)
		{
			if (book[j]==0&&dis[j]<min)
			{
				min = dis[j];
				u = j;
			}
			
		}
		book[u] = 1;
		for ( k = 1; k <=n; k++)
		{
			if (e[u][k]<max&&dis[k]>dis[u]+e[u][k]) {
				dis[k] = dis[u] + e[u][k];
			}
		}
	}


	//输出
	for (i = 1; i <=n; i++)
	{
		printf("%2d ",dis[i]);
	}
	getchar();
	getchar();
	return 0;
}