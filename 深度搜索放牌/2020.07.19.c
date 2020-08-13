//1-9之间的n牌数放n个盒子的放法
#include<stdio.h>
#include<string.h>
int book[10] = {0};
int a[10] = {0};
int n = 0;
void dfs(int step) {
	int i;
	if (step==n+1)
	{
		for (i = 1; i <= n;i++) {
			printf("第%d盒子中是%d\n",i,a[i]);
			
		}
		printf("\n=================\n");
		return;
	}

	for ( i = 1; i <=n; i++)//按照1,2,3.....一一尝试，第一个盒子n种可能，第二个盒子n-1种可能
	{
		if (book[i] == 0) {//判断扑克牌是否在手上   0在手上 1放入
			book[i] = 1;
			a[step] = i;//盒子保存数
			dfs(step + 1);//递归，对下一个盒子
			book[i] = 0;//收回牌
		}
	}
	return;
}
int main() {
	printf("请输入1-9你需放入的牌数\n");
	scanf("%d",&n);
	dfs(1);
	getchar();
	getchar();
	return 0;
}