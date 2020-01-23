#include<stdio.h>
int main() {

	int i;
	int b[70];
	for ( i = 0; i < 70; i++)
	{
       b[i] = i;
	}
	for ( i = 0; i < 70; i++)
	{
		char a = '\b[i]';
		printf("%c\n",a);
	}

	return 0;
}