#include<stdio.h>
int main(){
	int a[10];
	int i,j;
	int sum = 0;//sum��Ҫ��ʼ����ֵ���������ر���SDL���鲻��һֱ������������
    int  avg;
	for ( i = 0; i < 10; i++)
	{
		scanf_s("%d",&a[i]);//�ر�SDL     �����
	}
	for ( i = 0; i <10; i++)
	{
		sum += a[i];
		avg = sum / 10;
		//avg += a[i] / 10;
	}
	printf("%d\n",sum);
	printf("%d\n",avg);
	for ( i = 0; i < 10; i++)
	{
		if (a[i] > avg) {
			printf("a[%d]=%d\n",i,a[i]);
		}
	}

	return 0;
}