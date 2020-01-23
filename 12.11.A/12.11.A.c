#include<stdio.h>
int main() {
	int i, j,n;
	while (1) {
		scanf_s("%d", &n);
		for (i = 0; i < n; i++) {
			for (j = 0; j < n - i - 1; j++)
			{
				printf(" ");
			}
			for (j = 0; j <= 2 * i; j++)
			{
				putchar('*');
			}
			putchar('\n');
		}
	}
	return 0;
}