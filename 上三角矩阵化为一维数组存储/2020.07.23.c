#include<stdio.h>
int main() {
	int Upper[5][5] = {
		{7,8,12,21,9},
		{0,5,14,17,6},
		{0,0,7,23,24},
		{0,0,0,32,19},
		{0,0,0,0,8}
	};
	int index = 0;
	int j = 0;
	int i = 0;
		//����Ϊ�����������Ǿ���
		//n*(n+1)/2�������� = 15
	int row[15];//row-major		��Ϊ��
	int col[15];//column-major  ��Ϊ��
	printf("============�������Ǿ���=========\n");
	for ( i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++) {
			printf("%5d",Upper[i][j]);
		}
		printf("\n");
	}
	for ( i = 0; i < 5; i++)
	{
		for (j = 0; j < 5;j++) {
			if(i<=j){
				index = (11 - i) * i / 2 + (j - i);//k=[n+(n-i+1)]*i/2+(j-i)
				row[index] = Upper[i][j];
			}
			
		}
	}
	printf("=========����Ϊ����һά�洢=========\n");
	printf("[");
	for ( i = 0; i < 15; i++)
	{
		printf("%3d",row[i]);	
	}
	printf("]\n");


		//����Ϊ�����������Ǿ���
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++) {
			if (i <= j) {
				index = j * (j + 1) / 2 + i;//k= j * (j + 1) / 2 + i
				col[index] = Upper[i][j];
			}

		}
	}
	printf("=========����Ϊ����һά�洢=========\n");
	printf("[");
	for (i = 0; i < 15; i++)
	{
		printf("%3d", col[i]);
	}
	printf("]\n");



		return 0;
}