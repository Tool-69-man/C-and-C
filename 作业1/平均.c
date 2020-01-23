#include <stdio.h>
int add(float a, float b, float c);
int main() {
	float a, b, c;
	printf("ÇëÊäÈë3¸öÊı£º");
	scanf("%f %f %f", &a, &b, &c);
	add(a,b,c);
	return 0;
}
int add(float a, float b, float c)
{
	printf("%0.2f",(a + b + c) / 3);

}