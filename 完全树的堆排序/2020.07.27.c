#include<stdio.h>
//��ȫ�������ȶ���
int h[101] = { 0 };//����
int n;//��¼�ѵĴ�С��Ԫ�ظ���


//����
void swap(int x, int y) {
	int temp = 0;
	temp = h[x];//ʵ�����Ľ���
	h[x] = h[y];
	h[y] = temp;
	return;
}

//���µ�����������С����
void siftdown(int i) {
	int t = 0;
	//flag�ж��Ƿ����
	int flag = 0;
	//����ж��Ӳ�����Ҫ����
	while (i * 2 <= n && flag == 0)
	{
		t = i;
		//�����С�ڸ��ڵ�,�򽻻�
		if (h[i] > h[i * 2])
		{
			t = i * 2;
		}
		

		//������Ҷ���
		if (i*2+1<=n) {
			//�Ҷ���С�ڸ��ڵ�
			if (h[t] > h[i * 2 + 1])
			{
				t = i * 2+1;
			}
		}

		if (t!=i)
		{
			swap(t, i);
			i = t;
		}else{
			flag = 1;
		}

	}
	
	return;
}


//�����ѵĺ���
void creat() {
	int i=0;
	for ( i = n/2; i >= 1; i--)
	{
		siftdown(i);
	}
	return;
}

//������  
void heapsort() {
	while (n>1)
	{
		swap(1, n);//���Ӵ�С	��� ��С����
		n--;
		siftdown(1);
	}
	return;
}

//ɾ������Ԫ��
int deletemax() {
	int t = 0;
	t = h[1];
	h[1] = h[n];
	n--;		
	siftdown(1);//�ݹ麯�� �������С��
	return t;
}

int main() {
	int i = 0;
	int num = 0;
	printf("��������Ԫ�ظ�����\n");
	scanf("%d",&num);
	for ( i = 1; i <=num; i++)
	{
		printf("����������%dԪ�أ�\n",i);
		scanf("%d",&h[i]);
	}
	n = num;
	//����
	creat();
	

	//��������1��
	//ɾ������Ԫ�أ�����ɾ��n�Σ���С�������
	/*for ( i = 1; i <=num; i++)
	{
		printf("%3d\n",deletemax());
	}*/
	//��������2��
	heapsort();
	for ( i = 0; i <=num; i++)
	{
		printf("%2d ",h[i]);
	}

	getchar();
	getchar();


	return 0;
}