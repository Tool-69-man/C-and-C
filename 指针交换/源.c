#include<stdio.h>
void fun1(int *x,int *y) {//真正达到了交换数据     形参影响  实参
	//&x为 aaa{1}    &y  为  bbb {2}   
	int temp = *x;//temp 非指针     &temp为 ttt{1}
	*x = *y;//&x为aaa{2}
	*y = temp;//temp数值给&y bbb{1}        直接把数字交换   
	printf("x=%d,y=%d\n",*x,*y);//&x为aaa{2}   &y为bbb{1}
}
void fun2(int *o,int *p) {
	//&o 为ccc{3}    &p 为ddd{4}      &temp{NULL}  XXX无法读取内存
	int* temp = o; //&temp为 ccc{3}     形参不影响  实参
	o = p;// &o为ddd{4}      地址交换
	p = temp;// &p为ccc{3}              指向发生变化而已，其他没变
	printf("o=%d,p=%d\n", *o, *p);//&o为ddd{4}  &p为ccc{3}     
}
int main() {
	int a = 1, b = 2,c=3,d=4;
	int* p = &a;//a=1    &a  aaa    p=aaa  *p=1
	
	/*   设置地址 方便讨论
	设 &a 为   aaa{2}
	设 &b 为   bbb{1}
	设 &c 为   ccc{3}
	设 &d 为   ddd{4}
	*/

	fun1(&a, &b);
	fun2(&c, &d);
	/*   地址    地址变化情况
	 &a 为   aaa{1}
	 &b 为   bbb{2}    a,b地址中数字交换
	 &c 为   ccc{3}
	 &d 为   ddd{4}     
	*/
	printf("a=%d,b=%d\n",a,b);//a=2   b=1    fun1  a,b交换
	printf("c=%d,d=%d\n",c,d);//c=3    d=4     fun2  c,d 未交换
	return 0;
}