#include<stdio.h>
//�ṹ�巽�����򣬴洢�ߵĹ�ϵ
struct edge
{
	int u;
	int v;
	int w;
};
struct edge e[10] = {0,0,0};
int n = 0;
int m = 0;
int f[7] = { 0 };
int sum = 0;
int count = 0;

void quicksort(int left,int right) {
	int i = 0;
	int j = 0;
	struct edge t;
	if (left>right)
	{
		return;
	}
	i = left;
	j = right;
	//whileѭ��������
	while (i!=j)
	{
		while (i<j&&e[j].w>=e[left].w) {
			j--;
		}
		while (i<j&&e[i].w<=e[left].w)
		{
			i++;
		}
		if (i<j)
		{
			t = e[i];
			e[i] = e[j];
			e[j] = t;
		}


	}
	//�ڱ���λ
	t = e[left];
	e[left] = e[i];
	e[i] = t;
	//������������
	quicksort(left, i - 1);
	quicksort(i+1, right);
	return;
}

//������
int getf(int v) {
	if (f[v]==v)
	{
		return v;
	}
	else {
		f[v] = getf(f[v]);
		return f[v];
	}
}

//����
int merge(int v,int u) {
	int t1 = 0;
	int t2 = 0;
	t1 = getf(v);
	t1 = getf(u);
	if (t1!=t2)//�Ƿ���һ�����ϣ���һ�����ϣ�����������
	{
		f[t2] = t1;
		return 1;
	}
	return 0;
}



int main() {
	int i=0;
	//���붥��ͱ���
	printf("�����붥�����ͱ�����\n");
	scanf("%d %d",&n,&m);
	//�������������Ȩ
	for ( i = 1; i <= m; i++)
	{
		printf("���������������Ȩ�أ�\n");
		scanf("%d %d %d",&e[i].u,&e[i].v,&e[i].w);
	}
	//��С��������
	quicksort(1,m);//�ߵĿ���  Ȩֵ��С���� 
	//�����ʼ��
	for ( i = 1; i <= n; i++)
	{
		f[i] = i;
	}
	//Kruskal�㷨
	for ( i = 1; i <=m; i++)
	{
		if (merge(e[i].u,e[i].v)) {
			count++;
			sum = sum + e[i].w;
		}
		if (count == n - 1) 
		{
			break;
		}
	}
	printf("%3d ",sum);
	//ö�٣�������������ж��Ƿ���һ�����ϣ�ѡ�������ߣ�
	return 0;
}