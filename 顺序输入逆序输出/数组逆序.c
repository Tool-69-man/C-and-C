#include<stdio.h>
#include<string.h>
#define M 5
int main() {
	printf("ÇëÊäÈë%d¸ö×ÖÄ¸",M-1);
	char a[M],b[M];
	gets(a);
	int i;
	for ( i = 0; i <M-1; i++)
	{
		b[ M-2- i] = a[i];
		b[M-1] = '\0';

	}
	
	puts(b);
	return 0;
}