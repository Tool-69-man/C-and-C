#include<stdio.h>
//dijkstra�ҿ�˹����  ��Դ���·
int main() {
	int t1 = 0;//�����x,y��ֵ
	int t2 = 0;
	int t3 = 0;
	int i = 0;//ѭ����
	int j = 0;
	int k = 0;
	int u = 0;//��¼����ĵ�
	int n = 0;//����
	int m = 0;//����
	int max = 999999;
	int min = 0;
	int dis[10] = { 0 };
	int book[10] = { 0 };
	int e[50][50] = { 0 };
	//���붥��ͱ���
	printf("���붥��ͱ���:\n");
	scanf("%d %d", &n, &m);
	//�����ʼ�� 
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (i == j)
			{
				e[i][j] = 0;
			}
			else {
				e[i][j] = max;
			}
		}
	}
	//�������
	for (i = 1; i <= m; i++)
	{
		printf("������������;��룺\n");
		scanf("%d %d %d", &t1, &t2, &t3);
		e[t1][t2] = t3;
	}
	//��ʼ��dis���飨·�̼�¼��
	for ( i = 1; i <=n; i++)
	{
		dis[i] = e[1][i];
	}

	//dijkstra����
	book[1] = 1;//1��	book[i]ȷ��ֵ     0��  book[i]�ǹ���ֵ
	for ( i = 1; i <=n; i++)
	{
		min = max;
		//�ҵ��붥�������
		for ( j = 1; j <=n; j++)
		{
			if (book[j]==0&&dis[j]<min)
			{
				min = dis[j];
				u = j;
			}
			
		}
		book[u] = 1;
		for ( k = 1; k <=n; k++)
		{
			if (e[u][k]<max&&dis[k]>dis[u]+e[u][k]) {
				dis[k] = dis[u] + e[u][k];
			}
		}
	}


	//���
	for (i = 1; i <=n; i++)
	{
		printf("%2d ",dis[i]);
	}
	getchar();
	getchar();
	return 0;
}