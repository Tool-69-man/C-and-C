#include<stdio.h>
int text(int a, int b);
int main() {
	int x, y;
	scanf("%d,%d", &x, &y);
	text(x, y);
}
int text(int a, int b) {
	int result = a + b;
		printf("两数之和=%d", result);
	return 0;
}
