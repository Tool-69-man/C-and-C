#include<stdio.h>
#include<string.h>
int main() {
	int a[5], b[5];
	int i = 0;
	for ( i = 0; i < 5; i++)
	{
		printf("������a[%d]\n",i);
		scanf("%d", &a[i]);
		getchar();
		printf("������b[%d]\n",i);
		scanf("%d", &b[i]);
	}
	




	return 0;
}