#include<stdio.h>
//希尔排序是插入排序的变形
//稳定排序  复杂度一直是 O(n的3/2次方)

void shell(int data[],int size) {
	int i = 0;//扫描次数
	int j = 0;//定位比较元素
	int k = 1;//打印次数
	int tmp = 0;//存储
	int jmp = 0;//间距位移
	jmp = size / 2;
	while (jmp!=0)
	{
		for (i = jmp; i <=size;i++) {
			tmp = data[i];
			j = i - jmp;
			while (tmp<data[j]&&j>0)
			{
				data[j + jmp] = data[j];
				j -= jmp;
			}
			data[j + jmp] = tmp;
		}
		jmp = jmp / 2;
	}
	printf("\n");
	for ( i = 1; i <=size; i++)
	{
		printf("%2d ",data[i]);
	}

}


int main() {
	int i = 0;
	int data[100] = { 0 };
	int size = 0;
	printf("即将输入多少数字：\n");
	scanf("%d", &size);
	for ( i = 1; i <=size; i++)
	{
		printf("输入第%2d个数：\n",i);
		scanf("%d",&data[i]);
	}
	shell(data,size);

	return 0;
}