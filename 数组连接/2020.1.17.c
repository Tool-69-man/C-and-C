#include<stdio.h>
#include<string.h>
int main() {
	//char a[50], b[20];
	//printf("�������ַ���a");
	////scanf("%s",a);
	//gets(a);
	//printf("�������ַ���b");
	////scanf("%s",b);
	///*for (int   z = 0; z < 20; z++)
	//{
	//	scanf("%c", b[z]);
	//}*/
	//gets(b);
	//int i, j;
	//for (i = 0; i < a[i] != '\0'; i++)
	//{
	//}
	//for ( j = 0; j < b[j]!='\0'; j++)
	//{
	//	a[i] = b[j];
	//	i++;
	//}
	//a[i] = '\0';
	//printf("%s",a);
	//strcat()

	char c[100], d[20];
	printf("�������ַ���c: ");
	gets(c);
	printf("�������ַ���b: ");
	gets(d);
	int len = strlen(c);
	int i,j;
	for ( i=len,j=0 ; d[j]!='\0' ; i++,j++)
	{
		c[i] = d[j];
	}
	c[i] = '\0';
	puts(c);

	return 0;
}