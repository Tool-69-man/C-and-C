#include<stdio.h>
//Bellman-Ford-Moore
//��������㷨���ص㣺�ܽ��	�и�Ȩ�ߵ�ͼ  (a��b��ֵ�Ǹ���)
int main() {
	int i = 0;
	int k = 0;
	int n = 0;
	int m = 0;
	int chenk = 0;//����Ƿ���Ƿ�ᡰ�ɳڡ�
	int flag = 0;//0 û��Ȩ 1�и�Ȩ

	//���ø��������������������inf��
	int inf = 99999999;

	int dis[10] = { 0 };
	//int bak[10] = { 0 };
	int u[10] = { 0 };
	int v[10] = { 0 };
	int w[10] = { 0 };
	//���붥�������
	printf("���붥�������:\n");
	scanf("%d %d",&n,&m);

	for ( i = 1; i <=m; i++)
	{
		printf("���������������Ȩ�أ�\n");
		scanf("%d %d %d",&u[i],&v[i],&w[i]);
	}

	//��ʼ��dis,��1�ſ�ʼ
	for ( i = 0; i <= n; i++)
	{
		dis[i] = inf;
	}
	dis[1] = 0;

	//bellman�����㷨
	for ( k = 0; k <= n-1; k++)
	{
		chenk = 0;//���dis�Ƿ����
		for ( i = 0; i <= m; i++)
		{
			if (dis[v[i]] > dis[u[i]]+w[i] && dis[u[i]] + w[i] < inf ){
				dis[v[i]] = dis[u[i]] + w[i];
				chenk = 1;
			}
		}
		if (chenk)
		{
			break;
		}
	}


	flag = 0;
	for ( i = 0; i <= m; i++)
	{
		if (dis[v[i]]>dis[u[i]]+w[i]) {
			flag = 1;
		}
	}

	if (flag)//1�и�Ȩ
	{
		printf("��ͼ�и�Ȩ��·\n");
	}
	else {
		for ( i = 1; i <= n; i++)
		{
			printf("%2d ",dis[i]);
		}
	}
	getchar();
	getchar();
	return 0;
}