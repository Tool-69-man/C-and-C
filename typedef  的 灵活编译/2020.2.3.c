#include<stdio.h>
int main() {

	//typedef int all[4];
	//typedef  int ����;
	//all s1[3] = {1,15,30};//all s1==int s1[3]; all s1[3]==int *s1[3]
	//printf("%p %p %p\n", s1[0],s1[1],s1[2]);
	//int* s2[3] = {1,15,30};
	//printf("%p %p %p\n", &s2[0], &s2[1], &s2[2]);

	//typedef struct lol {
	//	char name[20];
	//	int age;

	//}student;//student ԭ��Ϊ�ṹ�����    
	//		 //typedef �� ���Զ����±��� �������Ǳ���
	////         �޷��ٸ�ֵ                 
	//student boy_a, boy_b;
	//boy_a.age = 15;
	//boy_b.age = 19;
	//student boy_c;
	//boy_c.age = 11;


	typedef int ³³��;//³³��==int
	typedef ³³�� ����, * CC;//����==³³�� 
	//CC==³³�� *    CC==int *
	³³�� a = 12, b = 13;
	³³��* q = &a;
	CC p= &b;
	printf("%d,%p\n",a,q);
	printf("%d,%p\n",b,p);
	
	return 0;
}