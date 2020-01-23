#include<stdio.h>
int main() {
	int p,i;
	scanf_s("%d", &p);
	int b[10];
	int array[20] = { 1,2,3,4,5,6,7,8,9,10 };
	for ( i = 0; i < p; i++)
	{
		b[i] = array[i];
	}
	for ( i = 0; i < p; i++)
	{
		array[i + 10] = b[i];
	}
	for ( i = 0; i < 10+p; i++)
	{
		printf("%d", array[i]);
	}
	return 0;
}