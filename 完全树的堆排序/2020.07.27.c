#include<stdio.h>
//完全树的优先队列
int h[101] = { 0 };//队列
int n;//记录堆的大小，元素个数


//交换
void swap(int x, int y) {
	int temp = 0;
	temp = h[x];//实现树的交换
	h[x] = h[y];
	h[y] = temp;
	return;
}

//向下调整函数（从小到大）
void siftdown(int i) {
	int t = 0;
	//flag判断是否继续
	int flag = 0;
	//如果有儿子并且需要调整
	while (i * 2 <= n && flag == 0)
	{
		t = i;
		//左儿子小于父节点,则交换
		if (h[i] > h[i * 2])
		{
			t = i * 2;
		}
		

		//如果有右儿子
		if (i*2+1<=n) {
			//右儿子小于父节点
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


//创建堆的函数
void creat() {
	int i=0;
	for ( i = n/2; i >= 1; i--)
	{
		siftdown(i);
	}
	return;
}

//堆排序  
void heapsort() {
	while (n>1)
	{
		swap(1, n);//将从大到小	变成 从小到大
		n--;
		siftdown(1);
	}
	return;
}

//删除最大的元素
int deletemax() {
	int t = 0;
	t = h[1];
	h[1] = h[n];
	n--;		
	siftdown(1);//递归函数 先输出最小的
	return t;
}

int main() {
	int i = 0;
	int num = 0;
	printf("请输入树元素个数：\n");
	scanf("%d",&num);
	for ( i = 1; i <=num; i++)
	{
		printf("请输入树的%d元素：\n",i);
		scanf("%d",&h[i]);
	}
	n = num;
	//建堆
	creat();
	

	//遍历方法1：
	//删除顶部元素，连续删除n次，从小到大输出
	/*for ( i = 1; i <=num; i++)
	{
		printf("%3d\n",deletemax());
	}*/
	//遍历方法2：
	heapsort();
	for ( i = 0; i <=num; i++)
	{
		printf("%2d ",h[i]);
	}

	getchar();
	getchar();


	return 0;
}