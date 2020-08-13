#include<stdio.h>
//����10�����ֵ� 1-10��  �ʣ������ж�������
//1	�ź� 2 ����ͬ��
//3	�ź� 4 ����ͬ��
//5	�ź� 2 ����ͬ��
//4	�ź� 6 ����ͬ��
//2	�ź� 6 ����ͬ��
//8	�ź� 7 ����ͬ��
//9	�ź� 7 ����ͬ��
//1	�ź� 6 ����ͬ��
//2	�ź� 4 ����ͬ��

int f[1000] = { 0 };
int n = 0;
int m = 0;
int sum = 0;
//�Լ���������ߺ��ֵ���ǿ ��BOSS �ұ߹�˳���

void init() {//��ʼ��
	int i = 0;
	for ( i = 1; i <= n; i++)
	{
		f[i] = i;
	}
	return;
}
int getf(int x) {
	if (f[x]==x)
	{
		return x;
	}
	else
	{
		f[x] = getf(f[x]);//�ҵ���������ʱBOSS
		return f[x];
	}
	
}

//�ϲ����ֵ�
void merge(int v,int u) {
	int t1 = 0;
	int t2 = 0;
	t1 = getf(v);
	t2 = getf(u);
	if (t1!=t2)
	{
		f[t2] = t1;
	}
	return ;
}
int main() {
	int i = 0;
	int x = 0;
	int y = 0;
	printf("�������ж��ٺ��ֵ���\n");
	scanf("%d",&n);
	printf("�������ж���������\n");
	scanf("%d", &m);
	//��ʼ��
	init();
	//�ϲ�
	for ( i = 1; i <=m; i++)
	{
		printf("������2�����ֵ���\n");
		scanf("%d %d", &x,&y);
		merge(x,y);
	}
	//��鼸������
	for (i = 1; i <=n; i++)
	{
		if (f[i]==i)
		{
			sum++;
		}
	}
	printf("��%d���壺\n",sum);
	for ( i = 1; i <= n; i++)
	{
		printf("f[%d]=%2d ",i, f[i]);
	}
	return 0;
}