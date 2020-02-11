#include<stdio.h>
void fun1(int *x,int *y) {//真正达到了交换数据
	int temp = *x;//temp 非指针 
	*x = *y;
	*y = temp;//数字给数字        直接把数字交换
	printf("x=%d,y=%d\n",*x,*y);//x=2  y=1
}
void fun2(int *o,int *p) {
	int* temp = o; //初始化  o=3 p=4
	o = p;//地址交换
	p = temp;//指向发生变化而已，其他没变
	printf("o=%d,p=%d\n", *o, *p);//o=4,p=3
}
int main() {
	int a = 1, b = 2,c=3,d=4;
	fun1(&a, &b);
	fun2(&c, &d);
	printf("a=%d,b=%d\n",a,b);//a=2   b=1    fun1  a,b交换
	printf("c=%d,d=%d\n",c,d);//c=3    d=4     fun2  c,d 未交换
	return 0;
}