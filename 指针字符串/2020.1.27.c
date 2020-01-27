#include<stdio.h>
int main() {

	/*char* p1, * p2 = "string";//字符串与数字相反
	p1 = "string";
	printf("%d\n", *p1);
	printf("%d\n", *p2);
	printf("%s\n", p1);
	printf("%s\n", p2);*/
	//未带  星号   为值
	//带    星号   为地址
	//char str[20]="LOL is bad";
	//char* p1, * p2=str;
	//p1 = p2+7;//            p2+7   p1="bad"  
	//printf("%d\n", *p1);
	//printf("%d\n", *p2);
	//printf("%s\n", p1);
	//printf("%s\n", p2);

	char a[] = "L.L AND X.X", b[20];
	int i;
	for ( i = 0; *(a+i-1)!='\0';i++ )
	{
		*(b + i) = *(a + i);
	}
	//*(b + i) = '\0';
	printf("%s\n",a);
	printf("%s\n",b);






	return 0;
}