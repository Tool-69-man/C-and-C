//50*50�ĵ�ͼ   ����Ķ�
//С����1��1��  С����4��3��   0�ǿյ�    1���ϰ���
#include<stdio.h>
int n = 0;
int m = 0;
int p = 0;
int  q = 0;
int min = 99999;
int a[51][51] = { 0 };
int book[51][51] = { 0 };

void dfs(int x,int y,int step) {
	int next[4][2] = { {0,1},{1,0},{0,-1},{-1,0} };//��������
	int tx = 0;
	int ty= 0;
	int k = 0;
	if (tx==x&&ty==y)
	{
		if (step<min)
		{
			min = step;
		}
		
		return;
	}
	//ö�������߷�
	for ( k =0; k <=3; k++)
	{
		//��һ������
		tx = x + next[k][0];
		ty = y + next[k][1];
		//�ж�Խ��
		if (tx<1||ty<1||tx>n||tx<m) {
			continue;
		}
		//�Ƿ����ϰ�������߹�
		if (a[tx][ty]==0&&book[tx][ty]==0)
		{
			book[tx][ty] = 1;
			dfs(tx,ty,step+1);
			book[tx][ty] = 0;
		}
	}
	return;
}


int main() {
	int i, j, startx, starty;
	printf("�Թ�����������������\n");
	scanf("%d%d",&n,&m);
	printf("�Թ��Ĳ��֣�\n");
	for ( i = 1; i <=n; i++)
	{
		for (j = 1; j <= m; j++) {
			scanf("%d",&a[i][j]);
		}
	}

	//���������յ�
	printf("���������յ�\n");
	scanf("%d %d %d %d",&startx,&starty,&p,&q);
	book[startx][starty] = 1;
	dfs(startx, starty, 0);
	printf("��̲�����%d",min);
	return 0;
}