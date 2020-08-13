#include<stdio.h>
#include<stdlib.h>

int main() {
	int list[11] = {0};
	int i, j,a;
	for ( i = 0; i < 5; i++)
	{
		scanf("%d",&a);
		list[a]++;
	}
	/*for ( i = 0; i <=10; i++)//从小到大排序
	{
		for (j = 1; j <= list[i]; j++) {
			printf("%d, ", i);
		}
	}*/
	for ( i = 10; i >=0; i--)//从大到小
	{
		for (j = 1; j <= list[i]; j++) {
			printf("%d, ", i);
		}
	}
	system("pause");
	return 0;
}