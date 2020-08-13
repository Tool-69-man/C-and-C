#include<stdio.h>//基数排序


void radix(int data[],int size) {
	int i = 0;
	int k = 0;
	int j = 0;
	int n = 0;//基数
	int m = 0;
	for ( n = 1; n <=100 ; n*=10)//n为基数从个位数开始
	{
		int tmp [10][100] = { 0 };
		//暂存数组
		for ( i = 1; i <=size; i++)
		{
			m = (data[i] / n) % 10;
			tmp[m][i] = data[i];
		}
		k = 1;
		for ( i = 0; i <= 10; i++)
		{
			for (j = 1; j <= size;j++) {
				if (tmp[i][j]!=0)
				{
					data[k] = tmp[i][j];
					k++;
				}
			}
		}
		printf("\n经过%3d位数:", n);
		for (i = 1; i <= size; i++)
		{
			printf("%3d ", data[i]);
		}
	
	}
	

}

int main() {
	int i = 0;
	int data[100] = { 0 };
	int size = 0;
	printf("即将输入多少数字：\n");
	scanf("%d", &size);
	for (i = 1; i <= size; i++)
	{
		printf("输入第%2d个数：\n", i);
		scanf("%d", &data[i]);
	}

	radix(data,size);
	return 0;
}