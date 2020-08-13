//a[1]*100+a[2]*10+a[3]+a[4]*100+a[5]*10+a[6]=a[7]*100+a[8]*10+a[9]
//[][][]+[][][]=[][][]    用1-9实现算式
#include<stdio.h>
int a[10] = { 0 };
int book[10] = { 0 };
int total = 0;

void dfs(int step) {
	int i = 0;

	if (step==10)//站在第10个盒子时
	{
		if (a[1] * 100 + a[2] * 10 + a[3] + a[4] * 100 + a[5] * 10 + a[6] == a[7] * 100 + a[8] * 10 + a[9])
		{
			printf("%d%d%d+%d%d%d=%d%d%d\n", a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9]);
			total++;
		}
		return;
	}
	for ( i = 1; i <=9; i++)
	{
		if (book[i]==0)
		{
			a[step] = i;
			book[i] = 1;
			dfs(step+1);
			book[i] = 0;
		}
	}
	return;
}

int main() {
	dfs(1);
	printf("total=%d",total/2);
	getchar();
	getchar();
	return 0;
}
