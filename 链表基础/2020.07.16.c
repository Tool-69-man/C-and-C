#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main() {
	int a=10;
	int* p=NULL;
	double* p2=NULL;//设置指针一定要初始化 NULL    应为free 只是清除指针指向  不会清楚p
	p = &a;
	p2 = (double*)malloc(sizeof(double));//malloc的返回类型为void*   所以需要强制转化  malloc(n)  n为类型的字节数
	*p2 = 10;
	printf("p=%d,p2=%0.2f",*p,*p2);
	//free(p);不能free没有malloc的指针
	free(p2);//free 与 malloc 是一一配对 “一夫一妻”  

	return 0;

}