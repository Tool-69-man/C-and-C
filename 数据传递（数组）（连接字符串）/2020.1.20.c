#include<stdio.h>
#include<string.h>
int fun1(char a[], char b[]);
int main() {
	char a[50], b[20];
	gets(a);
	gets(b);
	fun1(a,b);
	puts(a);
	return 0;
}
int fun1(char a[],char b[] ) {
	int i = 0;
	int j = 0;
	while (a[i] != '\0') {

		i++;
	}
	//while (b[j]!='\0')
	//{
	//	a[i++] = b[j++];
	//}
	//a[i] = '\0';
	while ((a[i++] = b[j++] )!= '\0');

}