#include<stdio.h>
//现有10个黑手党 1-10号  问：现在有多少团体
//1	号和 2 号是同伙
//3	号和 4 号是同伙
//5	号和 2 号是同伙
//4	号和 6 号是同伙
//2	号和 6 号是同伙
//8	号和 7 号是同伙
//9	号和 7 号是同伙
//1	号和 6 号是同伙
//2	号和 4 号是同伙

int f[1000] = { 0 };
int n = 0;
int m = 0;
int sum = 0;
//自己定规则：左边黑手党更强 当BOSS 右边归顺左边

void init() {//初始化
	int i = 0;
	for ( i = 1; i <= n; i++)
	{
		f[i] = i;
	}
	return;
}
int getf(int x) {
	if (f[x]==x)
	{
		return x;
	}
	else
	{
		f[x] = getf(f[x]);//找到树根，临时BOSS
		return f[x];
	}
	
}

//合并黑手党
void merge(int v,int u) {
	int t1 = 0;
	int t2 = 0;
	t1 = getf(v);
	t2 = getf(u);
	if (t1!=t2)
	{
		f[t2] = t1;
	}
	return ;
}
int main() {
	int i = 0;
	int x = 0;
	int y = 0;
	printf("请输入有多少黑手党：\n");
	scanf("%d",&n);
	printf("请输入有多少线索：\n");
	scanf("%d", &m);
	//初始化
	init();
	//合并
	for ( i = 1; i <=m; i++)
	{
		printf("请输入2个黑手党：\n");
		scanf("%d %d", &x,&y);
		merge(x,y);
	}
	//检查几个家族
	for (i = 1; i <=n; i++)
	{
		if (f[i]==i)
		{
			sum++;
		}
	}
	printf("有%d家族：\n",sum);
	for ( i = 1; i <= n; i++)
	{
		printf("f[%d]=%2d ",i, f[i]);
	}
	return 0;
}