#include<stdio.h>
int main() {
	char s[20];
	char a[20];

	gets(a);
	gets(s);
	//strncpy(a, s, 3);//strcpy���˸�n����ָ������,ֻ��a��ǰ3����ĸ����Ϊs��ǰ���������ĸ����䣻
	//printf("%d",strlen(s));����
	//puts(strlen(s));��Чstrlen
	//strncat(a, s,5); ����ָ�������ַ���
	puts(a);
	puts(s);
	return 0;
}