#include<stdio.h>
#include<math.h>
int main() {
	double r,PI;
	int i;
	PI = 3.14;
	for ( i = 0; i <= 180; i++)
	{
		r = i * PI / 180;
		printf("%6.41f\n",sin(r));
	}




	return 0;
}