#include<stdio.h>
int main() {
	char a[6];//����5��ĸ����a[6].....6��ʾ����
	gets(a);
	
	printf("%s", strlwr(a));
	return 0;
}