#include<stdio.h>
//结构体方便排序，存储边的关系
struct edge
{
	int u;
	int v;
	int w;
};
struct edge e[10] = {0,0,0};
int n = 0;
int m = 0;
int f[7] = { 0 };
int sum = 0;
int count = 0;

void quicksort(int left,int right) {
	int i = 0;
	int j = 0;
	struct edge t;
	if (left>right)
	{
		return;
	}
	i = left;
	j = right;
	//while循环快排序
	while (i!=j)
	{
		while (i<j&&e[j].w>=e[left].w) {
			j--;
		}
		while (i<j&&e[i].w<=e[left].w)
		{
			i++;
		}
		if (i<j)
		{
			t = e[i];
			e[i] = e[j];
			e[j] = t;
		}


	}
	//哨兵归位
	t = e[left];
	e[left] = e[i];
	e[i] = t;
	//左子树右子树
	quicksort(left, i - 1);
	quicksort(i+1, right);
	return;
}

//找祖先
int getf(int v) {
	if (f[v]==v)
	{
		return v;
	}
	else {
		f[v] = getf(f[v]);
		return f[v];
	}
}

//并查
int merge(int v,int u) {
	int t1 = 0;
	int t2 = 0;
	t1 = getf(v);
	t1 = getf(u);
	if (t1!=t2)//是否是一个集合（是一个集合，两点相连）
	{
		f[t2] = t1;
		return 1;
	}
	return 0;
}



int main() {
	int i=0;
	//读入顶点和边数
	printf("请输入顶点数和边数：\n");
	scanf("%d %d",&n,&m);
	//输入相连顶点和权
	for ( i = 1; i <= m; i++)
	{
		printf("请输入相连两点和权重：\n");
		scanf("%d %d %d",&e[i].u,&e[i].v,&e[i].w);
	}
	//从小到大排序
	quicksort(1,m);//边的快排  权值从小到大 
	//并查初始化
	for ( i = 1; i <= n; i++)
	{
		f[i] = i;
	}
	//Kruskal算法
	for ( i = 1; i <=m; i++)
	{
		if (merge(e[i].u,e[i].v)) {
			count++;
			sum = sum + e[i].w;
		}
		if (count == n - 1) 
		{
			break;
		}
	}
	printf("%3d ",sum);
	//枚举，如果不相连（判断是否在一个集合）选用这条边，
	return 0;
}