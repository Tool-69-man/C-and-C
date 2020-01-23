#include<stdio.h>
int main() {
	int a;
	float x, y;
	a = 7;
	x = 2.5;
	y = 4.7;
	printf("%d", a % 3 * (int)(x + y) % 2 / 4);
	return 0;
}