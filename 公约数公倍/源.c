#include<stdio.h>
int main() {
	int m, n,num;
	scanf("%d,%d", &m, &n);
	/*scanf("%d", &m);
	getchar();
	scanf("%d", &n);*/

	if (m < n) {//始终保持吗m>n
		num = n;
		n = m;
		m = num;
	}
	for (int i = n; i >0 ; i--)//最大公约数
	{
		if (m % i == 0 && n % i == 0) {
			printf("%d和%d最大公约数%d\n",m,n,i );
			break;
		}
	}
	for (int j = m; j >=m; j++)
	{
		if (j % m == 0 && j % n == 0) {
			printf("%d和%d最小公倍数%d\n",m,n,j);
			break;
		}
	}


	return 0;
}