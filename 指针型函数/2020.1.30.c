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

	//int (*p) ( ) ����ָ��    ָ�����洢��  ʵ�ֺ����Ĵ��ݣ���ַ���ݣ�
	//int  *p      ����ָ��    ָ�����ݴ洢��

	//int  *p ( )  ָ���ͺ���  ����ֵΪ��ַ����ָ�룩��  ���� 




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
	//}//ֻ�ı�ָ��    ʹ  p1  һֱָ�����ֵ
	//printf("%d %d\n",a,b);
	//printf("%d %d",*p1,*p2);


	
	return 0;
}