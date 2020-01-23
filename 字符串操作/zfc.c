#include<stdio.h>
int main() {
	char s[20];
	char a[20];

	gets(a);
	gets(s);
	//strncpy(a, s, 3);//strcpy加了个n可以指定长度,只把a的前3个字母复制为s的前三个。第四个不变；
	//printf("%d",strlen(s));可以
	//puts(strlen(s));无效strlen
	//strncat(a, s,5); 附加指定长度字符串
	puts(a);
	puts(s);
	return 0;
}