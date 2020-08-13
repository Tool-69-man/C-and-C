//用dfs深度遍历方式 展示图
//book[101]用于标记  
//e[cur][i]表示邻接矩阵存储法（横纵坐标：1-5  e[1][1]=0自己 e[1][2]=1数字1和2有边 e[1][4]=999999没边无限大）
//cur 是当前数字  i是要到达数字  
#include<stdio.h>
int book[101] = { 0 };
int sum =0;
int  max = 999999999;
int e[101][101] = {0};
int n=0;//顶点总个数，在main中输入
void dfs(int cur) {
	int i = 0;
	printf(" %d",cur);
	//用sum记录访问点数直至结束
	sum++;
	if (sum==n)
	{
		return;
	}
	//遍历cur与i是否相连或者已经访问
	//访问和递归
	for ( i = 0; i <=n; i++)
	{
		if (e[cur][i]==1&&book[i]==0)
		{
			book[i] = 1;
			dfs(i);
		}
	}
	
	return;
}

int main() {
	int i = 0;
	int j = 0;
	int h = 0;
	int k = 0;
	int m = 0;
	printf("请输入图中点个数:\n");
	scanf("%d",&n);
	printf("请输入图中边数:\n");
	scanf("%d", &m);
	//为二位矩阵赋值0和无穷
	for ( i = 1; i <=n ; i++)
	{
		for ( j = 1; j <=n; j++)
		{
			if (i==j) {
				e[i][j] = 0;
			}
			else
			{
				e[i][j] = max;
			}
			
		}
	}

	//为二位矩阵  相连数字 赋值
	for ( i = 1; i <=m; i++)
	{
		printf("请输入相连数字：\n");
		scanf("%d%d",&h,&k);
		e[h][k] = 1;
		e[k][h] = 1;//无向图所以反向也要记录
		
	}
	//展示矩阵
	for ( i = 1; i <=n; i++)
	{
		for ( j = 1; j <=n; j++)
		{

			
			printf("%10d",e[i][j]);
			if (j == n) {
				printf("\n");
			}
		}
	}

	//为起点book[1]标记，开始访问
	book[1] = 1;
	dfs(1);


	return 0;
}