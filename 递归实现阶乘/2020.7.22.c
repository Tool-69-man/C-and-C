#include<stdio.h>

int fun(int sum) {
	if (sum==0)
	{
		return 1;
	}
	else {
		sum=sum*fun(sum-1);
	}
	return sum;
}


int main() {
	int sum=0;
	printf("ÇëÊäÈëĞè½×³ËÊı×Ö£º\n");
	scanf("%d",&sum);
	printf("%d",fun(sum));
	return 0;
}