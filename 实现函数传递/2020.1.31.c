#include<stdio.h>
int max(int x, int y);
int min(int x,int y);
int add(int x, int y);
int XIO(int , int ,int (*CLANNAD) ());//       int (*CLANNAD)()   
int main() {//                            int (CLANNAD)()    int (fun)
	 int a, b;//           int  CLANNAD () 带* 几乎无影响 依旧可以 运行  以上
	scanf("%d%d",&a,&b);//                      int *CLANNAD () 属于函数 不行

	printf("max=");
	XIO(a,b,max);

	printf("min=");
	XIO(a, b, min);

	printf("add=");
	XIO(a, b, add);

	return 0;
}
int max(int x, int y) {

	return x > y ? x : y;
}
int min(int x, int y) {

	return x > y ? y : x;
}
int add(int x, int y) {

	return x+y;
}
int XIO(int x, int y, int (*CLANNAD) ()) {

	printf("%d\n", (*CLANNAD) (x, y));

}