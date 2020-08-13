#include<stdio.h>

int main() {
	int i = 0;
	int j = 0;
	int n = 0;
	int m = 0; 
	int a = 0; 
	int  b = 0; 
	int cur = 0; 
	int  book[101] = { 0 }; 
	int e[101][101] = { 0 };
	int max = 999999;
	int que[10001] = { 0 }; 
	int head = 1; 
	int tail = 1;
	printf("输入顶点数和边数：\n");
	scanf("%d %d", &n, &m);
	//初始化矩阵
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++)
		{
			if (i == j) {
				e[i][j] = 0;
			}
			else
			{
				e[i][j] = max;
			}
		}
	}
	//读入相连的数字
	for (i = 1; i <= m; i++)
	{
		printf("读入相连的数字\n");
		scanf("%d %d", &a, &b);
		e[a][b] = 1;
		e[b][a] = 1;
	}
	for ( i = 1; i <=n; i++)
	{
		for (j = 1; j <= n;j++) {
			printf("%8d", e[i][j]);
			if (j==n)
			{
				printf("\n");
			}
			
		}
	}
	//队列从顶点1出发，标记和队列++
	que[tail] = 1;
	tail++;
	book[1] = 1;
	//队列不为空循环
	//执行
	while (head < tail && tail <= n)
	{
		cur = que[head];
		for (i = 1; i <= n; i++)
		{
			if (e[cur][i] == 1 && book[i] == 0) {
				que[tail] = i;
				tail++;
				book[i]=1;
			}
			if (tail>n)
			{
				break;
			}
		}
		head++;
	}
	for ( i = 1; i < tail; i++)
	{
		printf("%d",que[i]);
	}
	getchar();
	getchar();
	return 0;
}