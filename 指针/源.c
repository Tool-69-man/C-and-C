#include<stdio.h>
int main() {
	int i=16;
	//int* p = &i;
	int* p;
	p = &i;
	printf("%p   %p\n", *p, p);//          变量值  *p=i=*&i
	printf("%p   %p\n", i, &i);//                   
	printf("%p   %p\n",*&i,*&p);           
	printf("%p   %p\n",*&i,&*p);//        *i未定义不存在

	printf("%p\n",  &p);//    p的地址       地址   *&p==&*p==&i==p
	//printf("%p   %p\n",&*i,&p);
	//printf("%p   %p\n",*&i,&*p);



	return 0;
}