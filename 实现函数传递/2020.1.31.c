#include<stdio.h>
int max(int x, int y);
int min(int x,int y);
int add(int x, int y);
int XIO(int , int ,int (*CLANNAD) ());//       int (*CLANNAD)()   
int main() {//                            int (CLANNAD)()    int (fun)
	 int a, b;//           int  CLANNAD () ��* ������Ӱ�� ���ɿ��� ����  ����
	scanf("%d%d",&a,&b);//                      int *CLANNAD () ���ں��� ����

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