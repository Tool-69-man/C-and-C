#include<stdio.h>
void fun(int *x,int *y) {
	int temp = *x;
	*x = *y;
	*y = temp;
	printf("x=%d,y=%d",*x,*y);//x=2  y=1
}

int main() {
	int a = 1, b = 2;
	fun(&a, &b);
	printf("a=%d,b=%d",a,b);//a=2   b=1
	return 0;

}