#include<stdio.h>
#define max 99999999
int min = max;
int book[101] = { 0 };
int e[101][101] = {0};
int n = 0;//����

//cur ���б�� dis·��
void dfs(int cur,int dis) {
	int i = 0;
	//·�̳�����Сmin����
	if (dis>min)
	{
		return;
	}
	//�ж��Ƿ񵽴�    �ж��Ƿ������Сֵ ���¾ͷ���
	if (cur==n)
	{
		if(min>dis){
			min = dis;
		}
		return;
	}
	//��1�ų��п�ʼ����  ����·����&&û�߹���
	//�ݹ�
	for ( i = 1; i <=n; i++)
	{
		if (book[i]==0&&e[cur][i]!=max)
		{
			book[i] = 1;
			dfs(i, dis + e[cur][i]);
			book[i] = 0;
		}
	}
	return ;
}


int main() {
	//������ά����(�Լ�Ϊ0��û·�����)
	int i = 0;
	int j = 0;
	
	int m = 0;//��������
	int a = 0;
	int b = 0;
	int c = 0;//·��
	printf("���붥��������������\n");
	scanf("%d %d",&n,&m);
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
	//��·����
	
	for ( i = 1; i <=m; i++)
	{
		printf("�������a->����b�������\n");
		scanf("%d %d %d",&a,&b,&c);
		e[a][b] = c;
	}

	//��һ�ų���
	book[1] = 1;
	dfs(1, 0);
	printf("%d",min);
	getchar();
	getchar();
	return 0;
}