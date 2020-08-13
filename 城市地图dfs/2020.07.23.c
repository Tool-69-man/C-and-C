#include<stdio.h>
#define max 99999999
int min = max;
int book[101] = { 0 };
int e[101][101] = {0};
int n = 0;//顶点

//cur 城市编号 dis路程
void dfs(int cur,int dis) {
	int i = 0;
	//路程超过最小min结束
	if (dis>min)
	{
		return;
	}
	//判断是否到达    判断是否更新最小值 更新就返回
	if (cur==n)
	{
		if(min>dis){
			min = dis;
		}
		return;
	}
	//从1号城市开始尝试  （有路才走&&没走过）
	//递归
	for ( i = 1; i <=n; i++)
	{
		if (book[i]==0&&e[cur][i]!=max)
		{
			book[i] = 1;
			dfs(i, dis + e[cur][i]);
			book[i] = 0;
		}
	}
	return ;
}


int main() {
	//建立二维矩阵(自己为0，没路无穷大)
	int i = 0;
	int j = 0;
	
	int m = 0;//相连个数
	int a = 0;
	int b = 0;
	int c = 0;//路径
	printf("输入顶点数和相连个数\n");
	scanf("%d %d",&n,&m);
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
	//道路输入
	
	for ( i = 1; i <=m; i++)
	{
		printf("输入城市a->城市b和其距离\n");
		scanf("%d %d %d",&a,&b,&c);
		e[a][b] = c;
	}

	//从一号出发
	book[1] = 1;
	dfs(1, 0);
	printf("%d",min);
	getchar();
	getchar();
	return 0;
}