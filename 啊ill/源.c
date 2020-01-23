#include<stdio.h>
int main() { 
	char x[] = { "abcdefg" };
	char y[] = { 'a','b','c','d','e','f','g','\0'};//一定要加\0
	printf("%d\n", strlen(x));
	printf("%d\n", sizeof(x));
	printf("%d\n", strlen(y));
	printf("%d\n", sizeof(y));
	for (int i = 0; i <=7; i++) {
		printf("x[%d]=%c\n", i, x[i]);

	}
	for (int i = 0; i <=7;i++) {
		printf("y[%d]=%c\n", i, y[i]);

	}
	return 0;
}