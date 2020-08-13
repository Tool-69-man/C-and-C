#include<stdio.h>

void hanoi(int n,int p1,int p2,int p3) {
	if (n==1)
	{
		printf("盘子从%d到%d\n",p1,p3);
	}
	else {
		hanoi(n - 1, p1, p3, p2);
		printf("盘子从%d到%d\n", p1, p3);
		hanoi(n - 1, p2, p1, p3);
	}

}


int main() {
	int n = 0;
	int n1 = 0;
	int n2= 0;
	int n3 = 0;
	printf("一共有多少盘子:\n");
	scanf("%d", &n);
	printf("n1,n2,n3有多少盘子:\n");
	scanf("%d%d%d", &n1,&n2,&n3);
	hanoi(n,n1,n2,n3);
	return 0;
}