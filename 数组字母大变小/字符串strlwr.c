#include<stdio.h>
int main() {
	char a[6];//输入5字母定义a[6].....6表示长度
	gets(a);
	
	printf("%s", strlwr(a));
	return 0;
}