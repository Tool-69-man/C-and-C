#include<stdio.h>
void fun1(int *x,int *y) {//�����ﵽ�˽�������
	int temp = *x;//temp ��ָ�� 
	*x = *y;
	*y = temp;//���ָ�����        ֱ�Ӱ����ֽ���
	printf("x=%d,y=%d\n",*x,*y);//x=2  y=1
}
void fun2(int *o,int *p) {
	int* temp = o; //��ʼ��  o=3 p=4
	o = p;//��ַ����
	p = temp;//ָ�����仯���ѣ�����û��
	printf("o=%d,p=%d\n", *o, *p);//o=4,p=3
}
int main() {
	int a = 1, b = 2,c=3,d=4;
	fun1(&a, &b);
	fun2(&c, &d);
	printf("a=%d,b=%d\n",a,b);//a=2   b=1    fun1  a,b����
	printf("c=%d,d=%d\n",c,d);//c=3    d=4     fun2  c,d δ����
	return 0;
}