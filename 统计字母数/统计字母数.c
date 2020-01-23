#include<stdio.h>
int main() {
	char a[20];
	gets(a);
	int i;
	for ( i = 0; i < 20; i++)
	{
		if (a[i]=='\0')
		{
			break;
		}

	}
	printf("×ÖÄ¸´®ÓÐ%d¸ö",i);
	return 0;
}