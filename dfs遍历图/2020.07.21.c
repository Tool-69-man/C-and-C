//��dfs��ȱ�����ʽ չʾͼ
//book[101]���ڱ��  
//e[cur][i]��ʾ�ڽӾ���洢�����������꣺1-5  e[1][1]=0�Լ� e[1][2]=1����1��2�б� e[1][4]=999999û�����޴�
//cur �ǵ�ǰ����  i��Ҫ��������  
#include<stdio.h>
int book[101] = { 0 };
int sum =0;
int  max = 999999999;
int e[101][101] = {0};
int n=0;//�����ܸ�������main������
void dfs(int cur) {
	int i = 0;
	printf(" %d",cur);
	//��sum��¼���ʵ���ֱ������
	sum++;
	if (sum==n)
	{
		return;
	}
	//����cur��i�Ƿ����������Ѿ�����
	//���ʺ͵ݹ�
	for ( i = 0; i <=n; i++)
	{
		if (e[cur][i]==1&&book[i]==0)
		{
			book[i] = 1;
			dfs(i);
		}
	}
	
	return;
}

int main() {
	int i = 0;
	int j = 0;
	int h = 0;
	int k = 0;
	int m = 0;
	printf("������ͼ�е����:\n");
	scanf("%d",&n);
	printf("������ͼ�б���:\n");
	scanf("%d", &m);
	//Ϊ��λ����ֵ0������
	for ( i = 1; i <=n ; i++)
	{
		for ( j = 1; j <=n; j++)
		{
			if (i==j) {
				e[i][j] = 0;
			}
			else
			{
				e[i][j] = max;
			}
			
		}
	}

	//Ϊ��λ����  �������� ��ֵ
	for ( i = 1; i <=m; i++)
	{
		printf("�������������֣�\n");
		scanf("%d%d",&h,&k);
		e[h][k] = 1;
		e[k][h] = 1;//����ͼ���Է���ҲҪ��¼
		
	}
	//չʾ����
	for ( i = 1; i <=n; i++)
	{
		for ( j = 1; j <=n; j++)
		{

			
			printf("%10d",e[i][j]);
			if (j == n) {
				printf("\n");
			}
		}
	}

	//Ϊ���book[1]��ǣ���ʼ����
	book[1] = 1;
	dfs(1);


	return 0;
}