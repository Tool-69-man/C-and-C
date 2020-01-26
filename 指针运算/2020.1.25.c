#include<stdio.h>
int main() {
	int* p;
	int a, b = 10;
	p = &b;
	a = *p + 1;
	*p = *(&a) + b;
	
	
	printf("%X %X\n",p,&a);
	printf("%d %d\n",*p,a);


	return 0;
}