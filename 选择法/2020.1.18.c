#include<stdio.h>
int main() {//ÿ��   �����Ƚ�  ѡ����С�������   ����ǰ�潻��λ��
	int a[10];
	int i, j, k, l;
	for ( i = 0; i < 10; i++)
	{
		printf("a[%d]=", i);
		scanf_s("%d",&a[i]);
	}
	for ( j = 0; j < 10-1; j++)
	{
		k = j;
		for ( i = j+1; i < 10; i++)
		{
			if (a[k] > a[i]) {
				k = i;
			}
			if (k != j) {
				l = a[j];
				a[j] = a[k];
				a[k] = l;
			}
		}
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d\t", a[i]);
	}
	return 0;
}