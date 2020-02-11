#include "stdio.h"
void f(int &x)
{
	 (*x) = (*x) * (*x);
}
int main()
{
	int x = 10;
	f(x);
	printf("x=%d\n", x);
	return(0);
}
