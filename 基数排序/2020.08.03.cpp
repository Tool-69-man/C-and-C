#include<stdio.h>//��������


void radix(int data[],int size) {
	int i = 0;
	int k = 0;
	int j = 0;
	int n = 0;//����
	int m = 0;
	for ( n = 1; n <=100 ; n*=10)//nΪ�����Ӹ�λ����ʼ
	{
		int tmp [10][100] = { 0 };
		//�ݴ�����
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
		printf("\n����%3dλ��:", n);
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
	printf("��������������֣�\n");
	scanf("%d", &size);
	for (i = 1; i <= size; i++)
	{
		printf("�����%2d������\n", i);
		scanf("%d", &data[i]);
	}

	radix(data,size);
	return 0;
}