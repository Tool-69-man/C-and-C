#include<stdio.h>
int main() {
	int i=16;
	//int* p = &i;
	int* p;
	p = &i;
	printf("%p   %p\n", *p, p);//          ����ֵ  *p=i=*&i
	printf("%p   %p\n", i, &i);//                   
	printf("%p   %p\n",*&i,*&p);           
	printf("%p   %p\n",*&i,&*p);//        *iδ���岻����

	printf("%p\n",  &p);//    p�ĵ�ַ       ��ַ   *&p==&*p==&i==p
	//printf("%p   %p\n",&*i,&p);
	//printf("%p   %p\n",*&i,&*p);



	return 0;
}