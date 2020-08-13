#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int a[101], n;
void quickSort1(int left,int right) {
	int i=0, j=0, t=0, temp=0;
	if (left>right) {
		return;
	}
	temp = a[left];
	i = left;
	j = right;

	while (i!=j)
	{
		while (i<j&&a[j]>=temp)
		{
			j--;
		}
		a[i] = a[j];
		while (i<j&&a[i]<=temp)
		{
			i++;
		}
		a[j] = a[i];
		/*if (i<j) {
			t = a[i];
			a[i] = a[j];
			a[j] = a[i];
		}*/

	}
	//a[left] = a[i];
	a[i] = temp;
	quickSort1(left, i - 1);
	quickSort1(i+1, right);
	return;
}





int main() {
	int i=0, j=0;
	printf("需要输入多少个数：\n");
	scanf("%d",&n);
	for ( i = 1; i <=n; i++)
	{
		printf("需要输入第%d个数：\n",i);
		scanf("%d",&a[i]);
	}
	quickSort1(1, n);
	for ( j = 1; j <=n; j++)
	{
		printf("%d, ",a[j]);
	}
	system("pause");
	return 0;
}