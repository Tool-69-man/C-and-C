#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main() {
	int a=10;
	int* p=NULL;
	double* p2=NULL;//����ָ��һ��Ҫ��ʼ�� NULL    ӦΪfree ֻ�����ָ��ָ��  �������p
	p = &a;
	p2 = (double*)malloc(sizeof(double));//malloc�ķ�������Ϊvoid*   ������Ҫǿ��ת��  malloc(n)  nΪ���͵��ֽ���
	*p2 = 10;
	printf("p=%d,p2=%0.2f",*p,*p2);
	//free(p);����freeû��malloc��ָ��
	free(p2);//free �� malloc ��һһ��� ��һ��һ�ޡ�  

	return 0;

}