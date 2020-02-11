#include<stdio.h>
int main() {
	//enum weekday{a=1,b,c=1,d};//枚举  未赋值为0，1，2，3···  
							  //喏赋值 后一个为前一个数加1
	//a=3;用法错误！！！枚举元素是常量 不能赋值
	//printf("%d %d %d %d\n",a,b,c,d);
	//
	//enum weekday{Sun,Mon,Tue,Wed,Thu,Fri,Sat} day;//day为枚举变量
	//day = Wed;
	/*printf("%d %d %d %d %d %d %d\n", Sun, Mon, Tue, Wed, Thu, Fri, Sat);
	printf("%d",day);*/

	//enum {e,f,g,h,i,j,k}Jan,Feb,Mar,Apr,May,Jun,Jul;//直接定义枚举变量
	//printf("%d %d %d %d %d %d %d\n", e, f, g, h, i, j, k);
	//printf("%d %d %d %d %d %d %d\n", Jan, Feb, Mar, Apr, May, Jun, Jul);//需初始化
	enum month {Jan, Feb, Mar, Apr, May, Jun, Jul};//先定义类型
	enum month a, b, c,d,e,f,g;//分开定义变量


	return 0;
}