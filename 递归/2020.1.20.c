#include<stdio.h>
int num(int n);
int main() {
	int n;
	while (1) {
		scanf_s("%d", &n);
		printf("%d\n", num(n));
	}
	return 0;
}
int num(int n) {
	int flag;
	if (n > 0) {
		flag = n*num(n - 1);
	}
	else if(n==1||n==0)
	{
		flag = 1;
	}
	return flag;
}