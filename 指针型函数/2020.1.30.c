#include<stdio.h>
char* month(int n) {
	char* name[] = { "error","Fan","Feb","Mar","Apr","May","Jun" };
	return ((n < 1 || n>6)? name[0]:name[n]);


}
int main() {

	int n;
	printf("please enter n:");
	scanf("%d",&n);
	printf("-> %s",month(n));

	//int (*p) ( ) 函数指针    指向代码存储区  实现函数的传递（地址传递）
	//int  *p      数据指针    指向数据存储区

	//int  *p ( )  指针型函数  返回值为地址量（指针）的  函数 




	/*int i=20;
	int* p = &i;
	int** pp=&p;
	printf("%d",*(*pp));*/

	//int* p1, * p2, * p, a, b;
	//a = 3;
	//b = 5;
	//p1 = &a;
	//p2 = &b;
	//if (a<b) {
	//	p = p1;
	//	p1 = p2;
	//	p2 = p;
	//}//只改变指向    使  p1  一直指向最大值
	//printf("%d %d\n",a,b);
	//printf("%d %d",*p1,*p2);


	
	return 0;
}