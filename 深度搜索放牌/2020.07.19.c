//1-9֮���n������n�����ӵķŷ�
#include<stdio.h>
#include<string.h>
int book[10] = {0};
int a[10] = {0};
int n = 0;
void dfs(int step) {
	int i;
	if (step==n+1)
	{
		for (i = 1; i <= n;i++) {
			printf("��%d��������%d\n",i,a[i]);
			
		}
		printf("\n=================\n");
		return;
	}

	for ( i = 1; i <=n; i++)//����1,2,3.....һһ���ԣ���һ������n�ֿ��ܣ��ڶ�������n-1�ֿ���
	{
		if (book[i] == 0) {//�ж��˿����Ƿ�������   0������ 1����
			book[i] = 1;
			a[step] = i;//���ӱ�����
			dfs(step + 1);//�ݹ飬����һ������
			book[i] = 0;//�ջ���
		}
	}
	return;
}
int main() {
	printf("������1-9������������\n");
	scanf("%d",&n);
	dfs(1);
	getchar();
	getchar();
	return 0;
}