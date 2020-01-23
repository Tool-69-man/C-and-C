#include<stdio.h>
#include<string.h>
int main() {
	/*char str1[] = {'c','l','a','n','n','a','d','\0'};
	char str2[20] = {"china"};
	int i;
	int len1 = strlen(str1);
	printf("%d",len1);
	int len2 = strlen(str2);
	for ( i = 0; i < len1; i++)
	{
		printf("%c",str1[i]);
	}
	for ( i = 0; i < 20; i++)
	{
		printf("%c",str2[i]);
	}for ( i = 0; i < 20; i++)
	{
		printf("%c",str2[i]);
	}*/

	//char a[20],b[20];
	///*gets(b);
	//scanf("%s", &a);
	//puts(b);
	//printf("%s\n",a);*/


	//scanf("%s", &a);//如果scanf在gets前执行   有空格的话 空格后直接输入的是gets  注释：空格也算上
	//gets(b);
	//printf("%s\n", a);
	//puts(b);

	
	
	/*char s[20];
	int i;
	for ( i = 0; i < 19; i++)
	{
		scanf("%c",&s[i]);
	}
	s[i] = '\0';
	puts(s);*/


	char x[20];
	scanf("%s",x);
	//scanf("%s",&x[0]);
	puts(&x);












	return 0;
}