#include<stdio.h>
int fib(int i) {
	if (i==0)
	{
		return 0;
	}
	else if (i==1)
	{
		return 1;
	}
	else
	{
		return fib(i - 1) + fib(i - 2);
	}
	
}
int main() {
	int m = 0;
	while (1)
	{
		printf("请输入计算的数字：\n");
		scanf("%d", &m);
		printf("fib(%d)=%d\n",m, fib(m));
	}
	
	

	return 0;
}