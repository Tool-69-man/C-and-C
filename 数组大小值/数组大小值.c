#include<stdio.h>
int main() {
	int a[10];
	int i,max,min;
	
	for ( i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	max = min = 0;
	for ( i = 0; i < 10; i++)
	{
		if (a[max] < a[i]) {
			max = i;
		}
		if (a[min] > a[i]) {
			min = i;
		}

	}
	printf("最大值为%d\n",a[max]);
	printf("最小值为%d\n",a[min]);
	return 0;
}