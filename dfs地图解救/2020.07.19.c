//50*50的地图   解救心动
//小郭（1，1）  小哈（4，3）   0是空地    1是障碍物
#include<stdio.h>
int n = 0;
int m = 0;
int p = 0;
int  q = 0;
int min = 99999;
int a[51][51] = { 0 };
int book[51][51] = { 0 };

void dfs(int x,int y,int step) {
	int next[4][2] = { {0,1},{1,0},{0,-1},{-1,0} };//右下左上
	int tx = 0;
	int ty= 0;
	int k = 0;
	if (tx==x&&ty==y)
	{
		if (step<min)
		{
			min = step;
		}
		
		return;
	}
	//枚举四种走法
	for ( k =0; k <=3; k++)
	{
		//下一点坐标
		tx = x + next[k][0];
		ty = y + next[k][1];
		//判断越界
		if (tx<1||ty<1||tx>n||tx<m) {
			continue;
		}
		//是否是障碍物，或已走过
		if (a[tx][ty]==0&&book[tx][ty]==0)
		{
			book[tx][ty] = 1;
			dfs(tx,ty,step+1);
			book[tx][ty] = 0;
		}
	}
	return;
}


int main() {
	int i, j, startx, starty;
	printf("迷宫的行数，和列数：\n");
	scanf("%d%d",&n,&m);
	printf("迷宫的布局：\n");
	for ( i = 1; i <=n; i++)
	{
		for (j = 1; j <= m; j++) {
			scanf("%d",&a[i][j]);
		}
	}

	//输入起点和终点
	printf("输入起点和终点\n");
	scanf("%d %d %d %d",&startx,&starty,&p,&q);
	book[startx][starty] = 1;
	dfs(startx, starty, 0);
	printf("最短步数：%d",min);
	return 0;
}