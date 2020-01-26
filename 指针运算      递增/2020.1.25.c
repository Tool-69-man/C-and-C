#include<stdio.h>
int main() {
	/*int b = 1;
	int* p = &b;
	int c = 2;
	int* g = &c;
	printf("%d\n", p);
	printf("%d\n",g);
	printf("%d\n",*(p+2));
	printf("%d\n",*p+2);*/
	int i;
	int a[10];
	int* p = a;
	for ( i = 1; i <=10; i++)
	{
		*p = i;
		p++;
	}
	p = &a[0];
	for ( i = 1; i <=10; i++,p++)
	{
		printf("a[%d]=%d\n",i,*p);
	}
	printf("%x\n",*(a+9));
	p = a+9;//p=&a[0]+9
	for (i = 0; i < 10; i++, p--) {
		printf("a[%d]%d\n",i,*p);
	}
	return 0;
}