#include<stdio.h>
//floyd-warshall��������

	/*��·����̾��룺
	//ֻ����1�Ŷ���
	for (i = 1; i <= n; i++) {//nΪ��������e[i][j] = i��j���еľ��� 
		for (j = 1; j <= n; j++) {
			if (e[i][j] > e[i][1] + e[1][j])
			{
				e[i][j] = e[i][1] + e[1][j];
			}
		}
	}
	//ֻ����2�Ŷ���
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			if (e[i][j] > e[i][2] + e[2][j])
			{
				e[i][j] = e[i][2] + e[2][j];
			}
		}
	}
	*/

int main() {
	int t1 = 0;//�����x,y��ֵ
	int t2 = 0;
	int t3 = 0;
	int i = 0;//ѭ����
	int j = 0;
	int k = 0;
	int n = 0;//����
	int m = 0;//����
	int max = 999999;
	int e[50][50] = { 0 };
	//���붥��ͱ���
	printf("���붥��ͱ���:\n");
	scanf("%d %d",&n,&m);
	//�����ʼ�� 
	for ( i = 1; i <=n; i++)
	{
		for ( j = 1; j <=n; j++)
		{
			if (i==j)
			{
				e[i][j] = 0;
			}
			else {
				e[i][j] = max;
			}
		}
	}
	//�������
	for ( i = 1; i <=m; i++)
	{
		printf("������������;��룺\n");
		scanf("%d %d %d",&t1,&t2,&t3);
		e[t1][t2] = t3;
	}
	//�����㷨     O(n*n*n)
	for ( k = 1; k <=n; k++)
	{
		for ( i = 1; i <=n; i++)
		{
			for (j = 1; j <= n;j++) {
				if (e[i][j]>e[i][k]+e[k][j])//������������������max    ��if(e[i][k]<max && e[k][j]<max && e[i][j]>e[i][k]+e[k][j])
				{
					e[i][j] = e[i][k] + e[k][j];//���������� ֻ�в�����   int  2147483647
				}
			}
		}
	}
	//������
	printf("������\n");
	for ( i = 1; i <=n; i++)
	{
		for (j = 1; j <= n;j++) {
			printf("%10d",e[i][j]);
		}
		printf("\n");
	}
	return 0;
}