#include<stdio.h>
int main() {
	int i;
	int a[9] = {1,2,3,4,5,6,7,8,9};
	int b[9] ={9,8,7,6,5,4,3,2,1};
	int c[9] = {0};
	for ( i = 0; i < 9; i++)
	{
		c[i] = a[i] + b[i];
	}
	//c[8] = a[8] + b[8];
	
	for ( i = 0; i <9 ; i++)
	{
		printf("a[%d]=%2d\nb[%d]=%2d\nc[%d]=%d\n", i, a[i], i, b[i], i, c[i]);
		//printf("a[%d]=%d \nb[%d]=%d\n", i, a[i], i, b[i]);
	}
	return 0;
}