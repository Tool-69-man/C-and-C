#include<stdio.h>
void fun(int a, int b, int c) {
	int min = 0;
	if (a >= b) {
		min = b;
	}
	else {
		min = a;
	}
	if (min >= c) {
		min = c;
	}

	printf("最小的数：%d", min);
}
int main() {
	int a, b, c;
	scanf("%d", &a);
	getchar();
	scanf("%d", &b);
	getchar();
	scanf("%d", &c);
	fun(a, b, c);
	return 0;
}