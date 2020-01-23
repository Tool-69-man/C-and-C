#include<stdio.h>
void div(float a, float b);
int main() {
	int a = 5;
	int b = 10;
	div(a, b);
	return 0;
}
void div(float a, float b) {

	float div;
	printf("%f",a/b);
}