#include<stdio.h>
int www(int m,int n);
int sss(int m, int n);
int xxx(int m, int n);
int main() {
	int m, n,temp;
	scanf("%d %d",&m,&n);
	if (m > n) {
		temp = m;
		m = n;
		n = temp;
	}
	printf("%d\n",www(m, n));
	printf("%d\n",sss(m, n));
	printf("%d\n",xxx(m, n));

	return 0;
}
int www(int m, int n) {
	int i = 0;

	while (m<=n)
	{
		if (m % 2 == 0) {
			i += 1;
		}
		m++;
	}
	return i;
}
int sss(int m, int n) {
	int i = 0;

	do 
	{
		if (m % 2 == 0) {
			i += 1;
		}
		m++;
	} while (m <= n);
	return i;
}
int xxx(int m, int n) {
	int i = 0;

	for(m;m<=n;m++)
	{
		if (m % 2 == 0) {
			i += 1;
		}
		
	} 
	return i;
}