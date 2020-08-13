#include<stdio.h>
//Bellman-Ford-Moore
//相对其他算法的特点：能解决	有负权边的图  (a到b的值是负数)
int main() {
	int i = 0;
	int k = 0;
	int n = 0;
	int m = 0;
	int chenk = 0;//检查是否会是否会“松弛”
	int flag = 0;//0 没负权 1有负权

	//设置个正无穷（不允许别的数超过inf）
	int inf = 99999999;

	int dis[10] = { 0 };
	//int bak[10] = { 0 };
	int u[10] = { 0 };
	int v[10] = { 0 };
	int w[10] = { 0 };
	//读入顶点和条数
	printf("读入顶点和条数:\n");
	scanf("%d %d",&n,&m);

	for ( i = 1; i <=m; i++)
	{
		printf("读入相连的两点和权重：\n");
		scanf("%d %d %d",&u[i],&v[i],&w[i]);
	}

	//初始化dis,从1号开始
	for ( i = 0; i <= n; i++)
	{
		dis[i] = inf;
	}
	dis[1] = 0;

	//bellman核心算法
	for ( k = 0; k <= n-1; k++)
	{
		chenk = 0;//检查dis是否更新
		for ( i = 0; i <= m; i++)
		{
			if (dis[v[i]] > dis[u[i]]+w[i] && dis[u[i]] + w[i] < inf ){
				dis[v[i]] = dis[u[i]] + w[i];
				chenk = 1;
			}
		}
		if (chenk)
		{
			break;
		}
	}


	flag = 0;
	for ( i = 0; i <= m; i++)
	{
		if (dis[v[i]]>dis[u[i]]+w[i]) {
			flag = 1;
		}
	}

	if (flag)//1有负权
	{
		printf("此图有负权回路\n");
	}
	else {
		for ( i = 1; i <= n; i++)
		{
			printf("%2d ",dis[i]);
		}
	}
	getchar();
	getchar();
	return 0;
}